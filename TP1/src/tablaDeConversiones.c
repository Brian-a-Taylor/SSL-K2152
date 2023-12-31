#include <stdio.h>
#include "conversion.h"

void imprimirTablas(int lower, int upper, int step);
void imprimirTablaACelsius(int lower, int upper, int step);
void imprimirTablaAFahrenheit(int lower, int upper, int step);

void imprimirTablas(int lower, int upper, int step){
    
    imprimirTablaACelsius(lower, upper, step);
    imprimirTablaAFahrenheit(lower, upper, step);
}

void imprimirTablaACelsius(int lower, int upper, int step){
    float valorFahrenheit,valorCelsius;
    valorFahrenheit = lower;
    printf("Tabla de farenheit a celcius:\n");
    while(valorFahrenheit <= upper){
        valorCelsius = celsius(valorFahrenheit);
        printf("%.1f\t%.1f\n",valorFahrenheit,valorCelsius);
        
        valorFahrenheit += step;
    }
    printf("\n");
}

void imprimirTablaAFahrenheit(int lower, int upper, int step){
    float valorCelsius = lower;
    float valorFahrenheit;
    printf("Tabla de celcius a farenheit:\n");
    while(valorCelsius <= upper){
        valorFahrenheit = fahrenheit(valorCelsius);
        printf("%.1f\t%.1f\n", valorCelsius, valorFahrenheit);

        valorCelsius = valorCelsius + step;
    }
    printf("\n");
}

int main(void) {
    

    int lower,upper,step;
    int input;
    lower = 0; 
    upper = 300;
    step = 20;
    printf("Ingrese una opcion:\n 1)Fahrenheit \n 2)Celsius \n 3)Ambas tablas\n");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        imprimirTablaAFahrenheit(lower,upper,step);
        break;
    case 2:
        imprimirTablaACelsius(lower,upper,step);
        break;
    case 3:
        imprimirTablas(lower,upper,step);
        break;
    default:
        break;
    }
    
    return 0;
}

