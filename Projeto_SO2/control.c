#include "../SO2_TP_DLL_2021.h"
#include "control.h"



//
//void AddAirport() {
//	char airportname;
//	int posX, posY;
//}

//void Registry() {
//	if (RegCreateKeyEx(HKEY_CURRENT_USER, TEXT("Software\\SO2"), 0, NULL,
//		REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &key, &check) == ERROR_SUCCESS) {
//		if (check == REG_CREATED_NEW_KEY) {
//			RegSetValueEx(key, TEXT("ListaTop10"), 0, REG_BINARY, (LPBYTE)reg, sizeof(reg));
//			RegSetValueEx(key, TEXT("Top10"), 0, REG_DWORD, (LPBYTE)&nTop, sizeof(DWORD));
//		}
//		else if (check == REG_OPENED_EXISTING_KEY) {
//			RegSetValueEx(key, TEXT("ListaTop10"), 0, REG_BINARY, (LPBYTE)reg, sizeof(reg));
//			RegSetValueEx(key, TEXT("Top10"), 0, REG_DWORD, (LPBYTE)&nTop, sizeof(DWORD));
//			tam = sizeof(DWORD);
//			RegQueryValueEx(key, TEXT("Top10"), NULL, NULL, (LPBYTE)&nTop, &tam);
//			tam = sizeof(reg);
//			RegQueryValueEx(key, TEXT("ListaTop10"), 0, NULL, (LPBYTE)reg, &tam);
//			//mostra();
//
//		}
//	}
//}



int ResgtryChange() {
	int aeroporto, aviao;
	_tprintf(TEXT("aviao:"));
	_tscanf_s(TEXT("%d"), &aviao);

	_tprintf(TEXT("aeroporto:"));
	_tscanf_s(TEXT("%d"), &aeroporto);

	if (RegCreateKeyEx(HKEY_CURRENT_USER, TEXT("Software\\SO2"), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &key, &check) == ERROR_SUCCESS) {
		if (check == REG_CREATED_NEW_KEY) {
			_tprintf(TEXT("Chave criada com sucesso!"));
			RegSetValueEx(key, TEXT("aviao"), 0, REG_DWORD, (LPBYTE)&aviao, sizeof(int));
			RegSetValueEx(key, TEXT("aeroporto"), 0, REG_DWORD, (LPBYTE)&aeroporto, sizeof(int));
		}
		else {
			tam = sizeof(aviao);
			RegQueryValueEx(key, TEXT("aviao"), 0, NULL, (LPBYTE)&aviao, &tam);
			tam = sizeof(aeroporto);
			RegQueryValueEx(key, TEXT("aeroporto"), 0, NULL, (LPBYTE)&aeroporto, &tam);
			_tprintf(TEXT("aviao aeroporto : %d %d\n"), aviao, aeroporto);
		}
	}
}

int Registry() {
	//se nao tiver registry ainda no pc
	int aviao, aeroporto;

	if (RegCreateKeyEx(HKEY_CURRENT_USER, TEXT("Software\\SO2"), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &key, &check) == ERROR_SUCCESS) {
		if (check == REG_CREATED_NEW_KEY) {
			aviao = 20; 
			aeroporto = 100;
			_tprintf(TEXT("Chave criada com sucesso!"));
			//Criar atributos
			RegSetValueEx(key, TEXT("aviao"), 0, REG_DWORD, (LPBYTE)&aviao, sizeof(int));
			RegSetValueEx(key, TEXT("aeroporto"), 0, REG_DWORD, (LPBYTE)&aeroporto, sizeof(int));
		}
		else {
			tam = sizeof(aviao);
			RegQueryValueEx(key, TEXT("aviao"), 0, NULL, (LPBYTE)&aviao,&tam);
			tam = sizeof(aeroporto);
			RegQueryValueEx(key, TEXT("aeroporto"), 0, NULL, (LPBYTE)&aeroporto,&tam);
			_tprintf(TEXT("aviao aeroporto : %d %d\n"), aviao,aeroporto);
		}
		return 0;
	}
}

int _tmain(DWORD argc, TCHAR** argv){
	TCHAR command[TAM] = TEXT("");
	TCHAR nameP[TAM];
	nameP[0] = '\0';
	DWORD score;

#ifdef UNICODE
	_setmode(_fileno(stdin), _O_WTEXT);
	_setmode(_fileno(stdout), _O_WTEXT);
#endif
	_tprintf(TEXT("Game:"));

	int x=0;
	//int* q= 50, * p=50;
	//x = move(50,50,50,50,&q,&p);
	_tprintf(TEXT("x: %d"), x);

	Registry();
	//_tprintf(TEXT("jogador:"));
	//_tscanf_s(L"%[^\n]", nameP, TAM); //TODO - ver melhor com a prof
	//_tprintf(TEXT("pontos:"));
	////_tscanf_s(TEXT("%d"), &score);

	/*do {

		if (_tcscmp(command, "addAirport") == 0) {
		}
		if (_tcscmp(command, "sair") == 0) {
		}

	} while (_tcscmp(command, "sair")==0);*/



	return 0;
}