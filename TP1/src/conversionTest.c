#include <stdio.h>
#include <assert.h>
#include "conversion.h"


// Pruebas para celsiusToFahrenheit

void fahrenheitTest(){
    assert(fahrenheit(0) == 32);
    assert(fahrenheit(100) == 212);
    assert(fahrenheit(-40) == -40);
}

// Pruebas para fahrenheitToCelsius
void celciusTest(){
    assert(celsius(32) == 0);
    assert(celsius(212) == 100);
    assert(celsius(-40) == -40);
}
    
void realizarTests(){
    fahrenheitTest();
    celciusTest();
    printf("Todas las pruebas pasaron con exito.\n");
}
    
