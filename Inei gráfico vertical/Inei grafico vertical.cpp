#include <iostream>
#include<conio.h>

using namespace std;

int Ingresarpa(string msje) {
	int p;
	do {
		cout << msje;
		cin >> p;

	} while (p < 0);
	return p;
}
int Ingresarpaedad(string msje) {
	int ped;
	do {
		cout << msje;
		cin >> ped;
	} while (ped < 0);
	return ped;
}
char Ingresarg() {
	char g;
	do {
		cout << "Ingrese el tipo de gráfico que desea ver:" << endl;
		cout << "Gráfico por provincia (P) o por edad (E): ";
		cin >> g;
		g = toupper(g);
	} while (g != 'P' && g != 'E');
	return g;
}
void graficar(int l, int c, int p, int t) {
	for (int i = 0; i < 10; i++) //filas
	{
		for (int j = 0; j < 4;j++) //columnas
		{
			if ((i >= t - p && j == 0) || (i >= t - l && j == 1) ||
				(i >= t - c && j == 2) || ( j == 3)) 
				cout << " * ";
			 else
				cout << "   ";
		}
			cout << endl;
	}
	cout << " P  L  C  T";
}

int main() {
	int L, C, P;
	int pa1, pa31, pa51, pa70;
	char grafico;
	int totalp, totale;

	setlocale(LC_ALL, "spanish");

	L = Ingresarpa("Ingrese el número de pacientes infectados en Lima: ");
	C = Ingresarpa("Ingrese el número de pacientes infectados en Callao: ");
	P = Ingresarpa("Ingrese el número de pacientes infectados en Provincia: ");
	totalp = L + C + P;
	pa1 = Ingresarpaedad("Ingrese la cantidad de pacientes entre 1 y 30 años: ");
	pa31 = Ingresarpaedad("Ingrese la cantidad de pacientes entre 31 y 50 años: ");
	pa51 = Ingresarpaedad("Ingrese la cantidad de pacientes entre 51 y 70 años: ");
	pa70 = Ingresarpaedad("Ingrese la cantidad de pacientes mayores a 70 años: ");
	totale = pa1 + pa31 + pa51 + pa70;
	grafico = Ingresarg();
	cout << endl;
	switch (grafico) {
	case 'P':
	 
		graficar(L / 10, C / 10, P / 10, totalp/10);
			

		break;
	}
	getch();
	return 0;

}