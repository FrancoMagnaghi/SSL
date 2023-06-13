#include <stdio.h>
#include "Convertir.h"

int main (){
    const int LOWER = 0;
    const int UPPER = 300;
    const int STEP = 20;
    int fahr, cels;
    printf("Fahrenheit   Celsius\n");
    printf("--------------------\n");
    for (fahr = LOWER; fahr <= UPPER ; fahr = fahr + STEP){
        printf ("%3d \t %6.1f\n", fahr, ConvertirFahrACels(fahr) );
    }

    printf("Celsius   Fahrenheit\n");
    printf("--------------------\n");
    for (cels = LOWER; cels <= UPPER ; cels = cels + STEP){
        printf ("%3d \t %6.1f\n", cels, ConvertirCelsAFahr(cels) );
    }
return 0;
}