#include <stdio.h>

int greaterThan(num1, num2){

    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
   
}


int main(void){

    int num1, num2, greater;


    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    greater = greaterThan(num1, num2);

    printf("O maior numero e: %d", greater);

    return 0;
}