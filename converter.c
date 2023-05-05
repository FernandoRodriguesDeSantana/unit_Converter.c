#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"pt_BR");

    int opcao = 0;
    float valor = 0;

    printf("Ola, seja bem vindo(a)! Este eh um programa para conversao de unidades. Aproveite =D");

    printf("\n\nSelecione a grandeza que deseja realizar a conversao:\n1-Massa\n2-Tempo\n3-Temperatura\nInsira: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            printf("\n\nInsira o valor a ser convertido: ");
            scanf("%f", &valor);
            printf("\nSua unidade:\n1-Quilograma(kg)\n2-Hectograma(hg)\n3-Decagrama(dag)\n4-Grama(g)\n5-Decigrama(dg)\n6-Centigrama(cg)\n7-Miligrama(mg)\nInsira: ");
    }

    return 0;
}
