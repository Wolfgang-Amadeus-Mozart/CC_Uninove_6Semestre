import java.io.*;// requisições de entrada/saida 
import java.net.*; //conexoes de rede (sockets)
import java.util.*; //fins gerais

public class UserThread extends Thread {
    private final Socket socket; //Meio de comunicação TCP
    private final ChatServer server; // servidor de Chat
    private PrintWriter writer; //escrever no buffer de saida (I/O)

    public UserThread (Socket socket, ChatServer server){
        this.socket = socket;
        this.server = server; 

        }

        @Override
        public void run(){
            try {
                //Leitura dos dos 
                InputStream input = socket.getInputStream();

                //joga os dados nos buffer

                BufferedReader reader = new BufferedReader(new InputStreamReader(input));

                // Canal de saída (response)
                OutputStream output = socket.getOutputStream();
                writer = new PrintWriter(output, true);

                //Mostrar os usuários conectados
                printUsers();

                // Capturar os dados do teclado (cliente) - remote mode
                String username = reader.readLine();
                server.adduserNames(username);

                // Brodcast - famoso avião de droga
                String serverMessage = "New user connected" + username;
                server.broadccas(serverMessage, this);

                //Capturar mensagem do client
                String clientMessage;

                // Repetição remota das mensagens
                do {
                clientMessage = reader.readLine();
                serverMessage = "[" + username + "]: " + clientMessage;
                server.broadccas(serverMessage, this);

                //Mostrar a mensagem enviada ao servidor no seu console
                System.out.println(serverMessage);

                }while(!clientMessage.equals("bye"));
                //Uma vez o usuário desconectado
                // Remover o usuário
                server.removeUser(username, this);

                //fecha a conexao
                socket.close();

                //avisa a galera que o usaername saiu
                serverMessage = username + "exited";
                server.broadccas(serverMessage, this);


            } catch (Exception e) {
                System.out.println("Err" + e);
            }}

            void printUsers () {
                if (server.hasUsers()){
                    writer.println("Users connected: " + server.getUserNames());
                }else {
                    writer.println("No users connected");
                }
    }
}
