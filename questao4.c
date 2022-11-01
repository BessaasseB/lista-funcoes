#include <stdio.h>
#include <math.h>
#define PI 3.1414592

float calcVol(float h, float raio){

    return PI * pow(raio, 2) * h; 
}

int main(void){

    float h, raio, volume;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &h);

    printf("Informe o raio: ");
    scanf("%f", &raio);


    volume = calcVol(h, raio);

    printf("\nO volume do cilindro e: %.2f unidades cubicas\n", volume);

    return 0;
}