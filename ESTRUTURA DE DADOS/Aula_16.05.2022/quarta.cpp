#include <iostream>
using namespace std;

int perimetro_retangulo(int a, int b) {
	// 2*a + 2*b
	_asm {
		// 2 * a
		mov eax, a;
		mov ecx, 2;
		mul ecx;
		mov ebx, eax;

		// 2 * b
		mov eax, b;
		mov cx, 2;
		mul cx;

		// eax = (b * a) + ecx = (2 * a)
		add eax, ebx;
	}
}

int area_do_retangulo(int a, int b) {
	// a * b
	_asm {
		mov eax, a;
		mul b;
		mov a, eax;
	}
	return a;
}

int perimetro_do_quadrado(int a) {
	// 4*a
	_asm {
		mov eax, a;
		mov ecx, 4; // Move para algum registrador
		mul ecx;
	}
}

int area_do_quadrado(int a) {
	// a * a
	_asm {
		mov eax, a;
		mul a;
	}
}


int perimetro_do_triangulo(int a, int b, int c) {
	// a + b + c
	_asm {
		mov eax, a;
		add eax, b;
		add eax, c;
	}
}

int perimetro_do_triangulo(int a) {
	// 3 * a
	_asm {
		mov eax, a;
		mov ecx, 3;
		mul ecx;
	}
}

int perimetro_do_triangulo(int a, int b) {
	// sqrt (a*a + b*b) + a + b;
	int resultado = 0;
	int temporario = 0;
	_asm {
		// a * a
		mov eax, a;
		mul a;
		mov ecx, eax; // ecx = eax(a * a)

		// b * b
		mov eax, b; // Rescreve
		mul b;

		// a*a + b*b
		add eax, ecx;
		mov temporario, eax;
		// a + b
		mov eax, a;
		add eax, b;

		mov resultado, eax;
	}
	return resultado += sqrt(temporario);
}

int main()
{
	cout << perimetro_retangulo(10, 5) << endl;
	cout << area_do_retangulo(10, 5) << endl;
	cout << perimetro_do_quadrado(5) << endl;
	cout << area_do_quadrado(10) << endl;
	cout << perimetro_do_triangulo(3, 5, 8) << endl;
	cout << perimetro_do_triangulo(3) << endl;
	cout << perimetro_do_triangulo(5, 5) << endl;
}
