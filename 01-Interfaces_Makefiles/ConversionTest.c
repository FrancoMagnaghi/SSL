#include <assert.h>
#include <stdio.h>
#include "Convertir.h"

int sacarCeros (double grados){
    int valor = grados;
    return valor;
}

void testFahrACels(){
    assert(ConvertirFahrACels(32) == 0);
    assert(sacarCeros (ConvertirFahrACels(68)) == 20);
    assert(sacarCeros (ConvertirFahrACels(212)) == 100);
}

void testCelsAFahr(){
    assert(ConvertirCelsAFahr(0) == 32);
    assert(sacarCeros (ConvertirCelsAFahr(20)) == 68);
    assert(sacarCeros (ConvertirCelsAFahr(100)) == 212);
}

int main (){
   testFahrACels();
    testCelsAFahr();
    return 0;
}