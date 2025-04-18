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
    double real;
    double imag;
} complex_t;
typedef struct
{
    int data[10][10];
} matriz_t;
// funciones resueltas
void init_lab(void);
root_t eq_solver(coeff_t *coefficient);
void max_index(void *array, size_t data_type, size_t array_size);
void min_index(void *array, size_t data_type, size_t array_size);
char *reverse_string(char *string);
int32_t string_length(char *string);
int32_t string_words(char *string);
complex_t sum(complex_t a, complex_t b);
int32_t bin2dec(int32_t binary, bool sign);
matriz_t matrix_sub(matriz_t A, matriz_t B);
int string_copy(char *source, char *destination);
int find_in_string(char *haystack, char *needle);
complex_t prod(complex_t a, complex_t b);
// Lea los valores en un array y los muestre en pantalla en orden inverso.
void print_reverse_array(void *array, size_t data_type, size_t array_size); // Jeronimo

// Intercambie el contenido de dos elementos, deberá retornar si la operacion se realizo con exito (0)
// no (-1):
int swap(void *elem_1, void *elem_2, size_t data_type); // Jeronimo

// Cuente el número de vocales y consonantes en un string:
int consonantes(char *string); // Jeronimo
int vocales(char *string);     // Jeronimo

// Extraiga una subcadena de una cadena dada, debe retornar -1 en caso de no encontrarse. (sin
// ar librerías standard):

// Lea una oración y reemplace los caracteres en minúsculas con mayúsculas o viceversa según
// cida el usuario. (sin usar librerías standard):
void string_to_caps(char *string); // Jeronimo
void string_to_min(char *string);  // Jeronimo

// Al ingresar dos fechas encuentre la diferencia, en días, entre ellas.
// int days_left(date_t start, date_t finish); // TODOS, dificil

#endif // GLOBAL_H_
