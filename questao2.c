#include <stdio.h>

void qualMes(int num1){
    switch (num1)
    {
    case 1:
        printf("Entrada: %d\n", num1);
        printf("Mes: Janeiro\n");
        printf("31 dias\n");
        break;
    case 2:
        printf("Entrada: %d\n", num1);
        printf("Mes: Fevereiro\n");
        printf("28/29 dias\n");
        break;
    case 3:
        printf("Entrada: %d\n", num1);
        printf("Mes: Marco\n");
        printf("31 dias\n");
        break;
    case 4:
        printf("Entrada: %d\n", num1);
        printf("Mes: Abril\n");
        printf("30 dias\n");
        break;
    case 5:
        printf("Entrada: %d\n", num1);
        printf("Mes: Maio\n");
        printf("31 dias\n");
        break;
    case 6:
        printf("Entrada: %d\n", num1);
        printf("Mes: Junho\n");
        printf("30 dias\n");
        break;
    case 7:
        printf("Entrada: %d\n", num1);
        printf("Mes: Julho\n");
        printf("31 dias\n");
        break;
    case 8:
        printf("Entrada: %d\n", num1);
        printf("Mes: Agosto\n");
        printf("31 dias\n");
        break;
    case 9:
        printf("Entrada: %d\n", num1);
        printf("Mes: Setembro\n");
        printf("30 dias\n");
        break;
    case 10:
        printf("Entrada: %d\n", num1);
        printf("Mes: Outubro\n");
        printf("31 dias\n");
        break;
    case 11:
        printf("Entrada: %d\n", num1);
        printf("Mes: Novembro\n");
        printf("30 dias\n");
        break;
    case 12:
        printf("Entrada: %d\n", num1);
        printf("Mes: Dezembro\n");
        printf("31 dias\n");
        break;
    
    default:
        break;
    }
}

int main(void){

    int mes;

    do{
        printf("Insira um numero de 1 a 12: ");
        scanf("%d", &mes);

        if(mes < 1 || mes > 12){
            printf("O numero informado nao esta no alcance pedido!\n");
        }

    }while(mes < 1 || mes > 12);
        
    
    qualMes(mes);


    return 0;
}