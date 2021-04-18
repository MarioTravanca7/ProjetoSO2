#include "../SO2_TP_DLL_2021.h"

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

int _tmain(DWORD argc, TCHAR** argv) {
	TCHAR command[TAM];
	TCHAR nameP[TAM];
	nameP[0] = '\0';
	DWORD score;

#ifdef UNICODE
	_setmode(_fileno(stdin), _O_WTEXT);
	_setmode(_fileno(stdout), _O_WTEXT);
#endif
	_tprintf(TEXT("Game:"));

	int x;
	int* q= 50, * p=50;
	x = move(50,50,50,50,&q,&p);
	_tprintf(TEXT("x: %d"), x);

	
	//_tprintf(TEXT("jogador:"));
	//_tscanf_s(L"%[^\n]", nameP, TAM); //TODO - ver melhor com a prof
	//_tprintf(TEXT("pontos:"));
	////_tscanf_s(TEXT("%d"), &score);

	//do {

	//} while (_tcscmp(command, "sair")==0);



	return 0;
}