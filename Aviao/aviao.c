#include "aviao.h"


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

	//_tprintf(TEXT("jogador:"));
	//_tscanf_s(L"%[^\n]", nameP, TAM); //TODO - ver melhor com a prof
	//_tprintf(TEXT("pontos:"));
	//_tscanf_s(TEXT("%d"), &score);


	//vai ficar numa thread ?
	do {

		if (_tcscmp(command, "destino") == 0) {

		}
		if (_tcscmp(command, "embarcar") == 0) {

		}
		if (_tcscmp(command, "iniciarviagem") == 0) {

		}

		if (_tcscmp(command, "sair") == 0) {
			//notificaçoes 
		}


	} while (_tcscmp(command, "sair") == 0);



	return 0;
}