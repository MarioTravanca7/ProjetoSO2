#include "common.h"

#ifdef SO2_TP_DLL_2021_EXPORTS
#define DLL_IMP_API __declspec(dllexport)
#else
#define DLL_IMP_API __declspec(dllimport)
#endif



DLL_IMP_API double meuFactor;
int varGlobal; // uso interno da DLL
DLL_IMP_API double meuApplyFator(double x);


