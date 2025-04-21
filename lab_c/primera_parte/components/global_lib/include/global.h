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

typedef struct {
    double real;
    double imag;
} complex_t;

typedef struct {
    int day;
    int month;
    int year;
} date_t;

typedef struct
{
    int data[10][10];
} matriz_t;

void display_coeff(coeff_t coeff);
void display_roots(root_t roots);
void display_complex(complex_t c);
void display_date(date_t d);
void display_matriz(matriz_t m, size_t filas, size_t columnas);

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
void print_reverse_array(void *array, size_t data_type, size_t array_size);
int swap(void *elem_1, void *elem_2, size_t data_type);
int consonantes(char *string);
int vocales(char *string);
void string_to_caps(char *string);
void string_to_min(char *string);
int days_left(date_t start, date_t finish);

#endif // GLOBAL_H_
