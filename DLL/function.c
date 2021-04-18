

#include "functions.h"


double meuFactor = 4;

double meuApplyFator(double x) {
	_tprintf(_T("estou na DLL\n"));

	return meuFactor * x;
}
