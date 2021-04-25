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
DWORD tam;

typedef struct {
	int aeroportos;
	int avioes;
}REGISTRY;
REGISTRY reg;
typedef struct {
	char* name;
	int posX, posY;
}AEROPORTO;

typedef struct {
	int mapX, mapY;
	AEROPORTO aeroportos[MAX];
}MAPA;

typedef struct {
	char destino[TAM];
}PASSAGEIRO;