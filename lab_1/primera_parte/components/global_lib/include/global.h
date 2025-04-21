// global.h
#ifndef GLOBAL_H_
#define GLOBAL_H_

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>
//
typedef struct {
    double a;
    double b;
    double c;
} coeff_t;

typedef struct {
    double root1;
    double root2;
    int has_real_roots;
} root_t;

// funciones resueltas
void init_lab(void);
root_t eq_solver(coeff_t *coefficient);

//Convierta un número binario en uno decimal:
int32_t bin2dec(int32_t binary, bool sign); // Santi

//Lea los valores en un array y los muestre en pantalla en orden inverso.
void print_reverse_array(void *array, size_t data_type, size_t array_size); // Jeronimo

//Encuentre los elementos máximo y mínimo en un array.
void max_index(void *array, size_t data_type, size_t array_size); // Gonza
void min_index(void *array, size_t data_type, size_t array_size); // Gonza

//Devuelva la resta de dos matrices:
//matriz_t matrix_sub(matriz_t A, matriz_t B); // Santi

//Intercambie el contenido de dos elementos, deberá retornar si la operacion se realizo con exito (0)
//no (-1):
int swap(void *elem_1, void *elem_2, size_t data_type); // Jeronimo

//Cuente el número de vocales y consonantes en un string:
int consonantes(char *string); // Jeronimo hecho
int vocales(char *string); // Jeronimo hecho

//Imprima y devuelve un string al revés:
char *reverse_string(char *string); // Gonza

//Encuentre la longitud de un string (sin usar funciones de biblioteca) retorna -1 en caso de error:
int32_t string_length(char *string); // Gonza

//Cuente el número total de palabras en un string. (sin usar librerías standard):
int32_t string_words(char *string); // Gonza

//Copie un string en otro string. (sin usar librerías standard):
int string_copy(char *source, char *destination); // Santi

//Extraiga una subcadena de una cadena dada, debe retornar -1 en caso de no encontrarse. (sin
//ar librerías standard):
int find_in_string(char *haystack, char *needle); // Santi

//Lea una oración y reemplace los caracteres en minúsculas con mayúsculas o viceversa según
//cida el usuario. (sin usar librerías standard):
void string_to_caps(char *string); // Jeronimo
void string_to_min(char *string); // Jeronimo

//Sume dos números complejos:
//complex_t sum(complex_t a, complex_t b); // Gonza

//Multiplique dos números complejos:
//complex_t prod(complex_t a, complex_t b); // Santi

//Al ingresar dos fechas encuentre la diferencia, en días, entre ellas.
//int days_left(date_t start, date_t finish); // TODOS, dificil


#endif // GLOBAL_H_
