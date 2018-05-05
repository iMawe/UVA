#include <stdio.h>
#include<iostream>
using namespace std;

int main(){

    int x, TipoTe, input, CRespuestas;

    while( scanf("%d", &TipoTe) != EOF ){
        CRespuestas = 0;
        for( x=0; x<5; x++ ){
            scanf("%d", &input);
            if(input == TipoTe)
               CRespuestas++;
        }

        printf("%d\n", CRespuestas);
    }

    string Palabra="palabra";
    scanf("...*",&Palabra);

return 0;
}
