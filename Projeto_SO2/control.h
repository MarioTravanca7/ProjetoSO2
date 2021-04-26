#include <time.h>
#include <windows.h>
#include <tchar.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <process.h>

#define TAM 256
#define MIN 10
#define MAX 1000

//Registry
HKEY key;
int check;
DWORD tam;// = int


//estruturas
typedef struct {
	int aeroportos;
	int avioes;
}REGISTRY;

typedef struct {
	char* name;
	int posX, posY;
	
}AEROPORTO;

typedef struct {
	char nome[TAM];
	char origem[TAM];
	char destino[TAM];
	int aguarda; // tempo em segundos que fica aguardar ate embarcar(opcional) 
	int esperaMax; // chega a este tempo e o passageiro desiste (se for indicado)
	DWORD mapX, mapY; //1000 - 1000
}PASSAGEIRO;

typedef struct {
	char Aeroporto_inicial[TAM];
	BOOL ar;// 0 - no aeroporto		1 - no ar
	DWORD capacidade; // numero de passageiros
	DWORD velociade; //posiçoes por segundo
	DWORD vida; // Se ficar mais de 3 segundos sem dar noticias morre
	DWORD mapX, mapY; //1000 - 1000
}AVIAO;

typedef struct {
	DWORD mapX, mapY; //1000 - 1000
	//int mapa[MAX][MAX];
	AEROPORTO aeroportos[MAX];
	PASSAGEIRO passageiros[MAX];
	AVIAO avioes[MAX];

}CONTROL; //espaço aéreo


//var structs
CONTROL control;
REGISTRY reg;