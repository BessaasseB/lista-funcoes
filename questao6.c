#include <stdio.h>
#include <math.h>

float imcCalc(float peso, float altura){

    return peso / pow(altura, 2);

}


int main(void){

    float peso, altura, imc;

    printf("Informe seu peso (Kg): ");
    scanf("%f", &peso);

    printf("informe sua altura (M): ");
    scanf("%f", &altura);


    imc = imcCalc(peso, altura);

    printf("Seu IMC e: %.2f", imc);


    return 0;
}