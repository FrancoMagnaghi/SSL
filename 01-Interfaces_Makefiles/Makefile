BIN = TablasDeConversion.exe
OBJ = TablasDeConversion.o Convertir.o
CC = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include"
LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
RM = rm -f

TablasDeConversion.exe: TablasDeConversion.o Convertir.o
	gcc TablasDeConversion.o Convertir.o -o TablasDeConversion.exe
TablasDeConversion.o: Convertir.h TablasDeConversion.c
	gcc -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS)
Convertir.o:Convertir.h Convertir.c
	gcc -c Convertir.c -o Convertir.o $(CFLAGS)
ConversionTest.o: Convertir.c ConversionTest.C
	gcc ConversionTest.c Convertir.c -o ConversionTest.o

tests: ConversionTest.o
	rm -f ./ConversionTest
.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)