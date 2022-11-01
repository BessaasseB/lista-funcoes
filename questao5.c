#include <stdio.h>
#include <math.h>
#define PI 3.1414592

float calcVol(float raio){

    return (4 * PI * pow(raio, 3)) / 3;     

}

int main(void){

    float raio, vol;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);


    vol = calcVol(raio);

    printf("\nO volume da esfera e %.2f unidades cubicas.\n", vol);

    return 0;
}