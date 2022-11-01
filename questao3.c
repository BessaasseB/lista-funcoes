#include <stdio.h>

float toCelc(float tempF){

    return (tempF - 32.0) * (5.0/9.0);
    
}


int main(void){

    float tempF, tempC;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = toCelc(tempF);

    printf("\nTemperatura em Graus Celcius: %.2f\n", tempC);

    return 0;
}