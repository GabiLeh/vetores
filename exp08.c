#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void main(){//Vetor de Strings, todo vetor de string é uma matriz
	//Sortear um nome aleatório
	SetConsoleOutputCP(CP_UTF8);
	char nomes[7][50]= {
	"Jacinto Pena", 
	"Jacinto Paixão", 
	"Jacinto Amor", 
	"Osmar Motta", 
	"Osmar Educado", 
	"Osmar Dito", 
	"Osmar Amado",
	};
	srand(time(NULL));
	int i = 0; i < 7;
		printf("%s\n", nomes[i]);
		getch();
}