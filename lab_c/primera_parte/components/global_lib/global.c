#include <stdio.h>
#include "global.h"
#include <stdint.h>
#include <stddef.h>

void init_lab(void) {
    printf("Laboratorio lenguaje C de Gonzalo Soto, Santiago El Ters, Jeronimo Ventos\n");
}

root_t eq_solver(coeff_t *coefficient) {
    root_t result;
    double a = coefficient->a;
    double b = coefficient->b;
    double c = coefficient->c;
    
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante >= 0) {
        result.root1 = (-b + sqrt(discriminante)) / (2 * a);
        result.root2 = (-b - sqrt(discriminante)) / (2 * a);
        result.has_real_roots = 1;
    } else {
        result.root1 = result.root2 = 0;
        result.has_real_roots = 0;
    }
    
    return result;
}

void max_index(void *array, size_t data_type, size_t array_size) {
    size_t max_idx = 0;
    char *arr = (char *)array;  // Convertimos a un puntero genérico

    for (size_t i = 1; i < array_size; i++) {
        if (*(arr + i * data_type) > *(arr + max_idx * data_type)) {
            max_idx = i;
        }
    }

    printf("indice del maximo: %zu\n", max_idx);
}

void min_index(void *array, size_t data_type, size_t array_size) {
    size_t min_idx = 0;
    char *arr = (char *)array;

    for (size_t i = 1; i < array_size; i++) {
        if (*(arr + i * data_type) < *(arr + min_idx * data_type)) {
            min_idx = i;
        }
    }

    printf("indice del minimo: %zu\n", min_idx);
}

char *reverse_string(char *string) {
    size_t len = strlen(string); // Longitud del string
    char *reversed = (char *)malloc(len + 1); // Asignamos memoria para el string invertido

    if (reversed == NULL) {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    for (size_t i = 0; i < len; i++) {
        reversed[i] = string[len - 1 - i]; // Copiamos los caracteres en orden inverso
    }

    reversed[len] = '\0'; // Agregamos el carácter nulo al final
    return reversed;
}

int32_t string_length(char *string) {
    if (string == NULL) return -1; // Manejo de error si el puntero es NULL

    int32_t length = 0;

    while (string[length] != '\0') { // Recorremos hasta el carácter nulo '\0'
        length++;
    }

    return length;
}

int32_t string_words(char *string) {
    if (string == NULL) return -1; // Manejo de error

    int32_t count = 0;
    int in_word = 0; // Indica si estamos dentro de una palabra

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ' && string[i] != '\t' && string[i] != '\n') {
            if (!in_word) { // Si encontramos un carácter y no estábamos en una palabra
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0; // Si encontramos un espacio u otro carácter de salto de línea, salimos de la palabra
        }
    }

    return count;
}

complex_t sum(complex_t a, complex_t b) {
    complex_t result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Funciones para mostrar las estructuras diseñadas en global.h
//Consigna
//NOTA: En caso de definir un tipo nuevo de variable o estructura, deberá proveer de su respectiva
//función para desplegar el valor de sus atributos.

void display_coeff(coeff_t coeff) {
    printf("Coeficientes de la ecuación:\n");
    printf("a = %.2f\n", coeff.a);
    printf("b = %.2f\n", coeff.b);
    printf("c = %.2f\n", coeff.c);
}

void display_roots(root_t roots) {
    if (roots.has_real_roots) {
        printf("Raíces reales:\n");
        printf("x1 = %.2f\n", roots.root1);
        printf("x2 = %.2f\n", roots.root2);
    } else {
        printf("La ecuación no tiene raíces reales.\n");
    }
}

void display_complex(complex_t c) {
    if (c.imag >= 0) {
        printf("Número complejo: %.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("Número complejo: %.2f - %.2fi\n", c.real, -c.imag);
    }
}