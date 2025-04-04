// global.h
#ifndef GLOBAL_H_
#define GLOBAL_H_

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    double a;
    double b;
    double c;
} coeff_t;

typedef struct
{
    double root1;
    double root2;
    int has_real_roots;
} root_t;
typedef struct
{
    int rows;
    int cols;
    double **data;
} matriz_t; // Matriz
typedef struct
{
    double real;
    double imag;
} complex_t; // Números complejos

typedef struct
{
    int day;
    int month;
    int year;
} date_t; // Fecha
// funciones resueltas
void init_lab(void);
root_t eq_solver(coeff_t *coefficient);

// Convierta un número binario en uno decimal:
int32_t bin2dec(int32_t binary, bool sign);

// Lea los valores en un array y los muestre en pantalla en orden inverso.
void print_reverse_array(void *array, size_t data_type, size_t array_size);

// Encuentre los elementos máximo y mínimo en un array.
void max_index(void *array, size_t data_type, size_t array_size);
void min_index(void *array, size_t data_type, size_t array_size);

// Devuelva la resta de dos matrices:
matriz_t matrix_sub(matriz_t A, matriz_t B);

// Intercambie el contenido de dos elementos, deberá retornar si la operacion se realizo con exito (0)
// no (-1):
int swap(void *elem_1, void *elem_2, size_t data_type);

// Cuente el número de vocales y consonantes en un string:
int consonantes(char *string);
int vocales(char *string);

// Imprima y devuelve un string al revés:
char *reverse_string(char *string);

// Encuentre la longitud de un string (sin usar funciones de biblioteca) retorna -1 en caso de error:
int32_t string_length(char *string);

// Cuente el número total de palabras en un string. (sin usar librerías standard):
int32_t string_words(char *string);

// Copie un string en otro string. (sin usar librerías standard):
int string_copy(char *source, char *destination);

// Extraiga una subcadena de una cadena dada, debe retornar -1 en caso de no encontrarse. (sin
// ar librerías standard):
int find_in_string(char *haystack, char *needle);

// Lea una oración y reemplace los caracteres en minúsculas con mayúsculas o viceversa según
// cida el usuario. (sin usar librerías standard):
void string_to_caps(char *string);
void string_to_min(char *string);

// Sume dos números complejos:
complex_t sum(complex_t a, complex_t b);

// Multiplique dos números complejos:
complex_t prod(complex_t a, complex_t b);

// Al ingresar dos fechas encuentre la diferencia, en días, entre ellas.
int days_left(date_t start, date_t finish);

#endif // GLOBAL_H_
