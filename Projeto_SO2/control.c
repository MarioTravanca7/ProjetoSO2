#include "../SO2_TP_DLL_2021.h"
#include "control.h"

#define RAIO 2 //mudar para 10

void inicio() {
	control.mapX = 10; //1000
	control.mapY = 10; //1000
}

void VerificaNomeAeroporto() {

}


void VerificaPosicaoAeroporto() {

}

void AddAirport(int *cA) {
	char airportname;
	int posX, posY;
	int verifica = 1;// 1 - existe aeroporto		0 - nao existe aeroporto

	/*_tprintf(TEXT("nome aeroporto:"));
	_tscanf_s(L"%[^\n]", nameP, TAM);
	
	_tprintf(TEXT("X:"));
	_tscanf_s(TEXT("%d"), &control.aeroportos[0].posX);
	_tprintf(TEXT("Y:"));
	_tscanf_s(TEXT("%d"), &control.aeroportos[0].posY);*/




	control.aeroportos[0].name = "New York";
	control.aeroportos[0].posX = 8;
	control.aeroportos[0].posY = 6;

}

void MostrarAirport() {


}

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


void MostraMapa() { //Thread ? 

}

int _tmain(DWORD argc, TCHAR** argv){
	TCHAR command[TAM] = TEXT("");
	TCHAR nameP[TAM];
	nameP[0] = '\0';
	DWORD score;
	int contaAvioes = 0;

#ifdef UNICODE
	_setmode(_fileno(stdin), _O_WTEXT);
	_setmode(_fileno(stdout), _O_WTEXT);
#endif
	_tprintf(TEXT("Game:"));

	int x=0;
	//DLL
	//int* q= 50, * p=50;
	//x = move(50,50,50,50,&q,&p);
	_tprintf(TEXT("x: %d"), x);

	Registry();
	inicio();
	//_tprintf(TEXT("jogador:"));
	//_tscanf_s(L"%[^\n]", nameP, TAM); //TODO - ver melhor com a prof
	//_tprintf(TEXT("pontos:"));
	////_tscanf_s(TEXT("%d"), &score);

	do {
		_tprintf(TEXT("jogador:"));
		_tscanf_s(L"%[^\n]", command); // ver como se apanha uma string

		if (_tcscmp(command, "addairport") == 0) {
			AddAirport(&contaAvioes, contaAvioes);
		}

		if (_tcscmp(command, "airportlist") == 0) {

		}
		if (_tcscmp(command, "airplanelist") == 0) {

		}
		if (_tcscmp(command, "passaglist") == 0) {

		}

		if (_tcscmp(command, "sair") == 0) {
			//notificaçoes 
		}


	} while (_tcscmp(command, "sair")==0);


	return 0;
}