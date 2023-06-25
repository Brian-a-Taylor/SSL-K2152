#include <stdio.h>
#include "conversion.h"

float fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

float celsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

