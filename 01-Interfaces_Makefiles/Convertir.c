#include <stdio.h>
#include "Convertir.h"

double ConvertirFahrACels(double fahr){
    return (5.0 / 9.0) * (fahr-32);
}

double ConvertirCelsAFahr(double cels){
    return (cels * (9.0 / 5.0) + 32);
}
