#include <stdio.h>
#include "global.h"
#include <stdint.h>
#include <stddef.h>

void init_lab(void)
{
    printf("Laboratorio lenguaje C de Gonzalo Soto, Santiago El Ters, Jeronimo Ventos\n");
}

root_t eq_solver(coeff_t *coefficient)
{
    root_t result;
    double a = coefficient->a;
    double b = coefficient->b;
    double c = coefficient->c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante >= 0)
    {
        result.root1 = (-b + sqrt(discriminante)) / (2 * a);
        result.root2 = (-b - sqrt(discriminante)) / (2 * a);
        result.has_real_roots = 1;
    }
    else
    {
        result.root1 = result.root2 = 0;
        result.has_real_roots = 0;
    }

    return result;
}

void max_index(void *array, size_t data_type, size_t array_size)
{
    size_t max_idx = 0;
    char *arr = (char *)array; // Convertimos a un puntero genérico

    for (size_t i = 1; i < array_size; i++)
    {
        if (*(arr + i * data_type) > *(arr + max_idx * data_type))
        {
            max_idx = i;
        }
    }

    printf("indice del maximo: %zu\n", max_idx);
}

void min_index(void *array, size_t data_type, size_t array_size)
{
    size_t min_idx = 0;
    char *arr = (char *)array;

    for (size_t i = 1; i < array_size; i++)
    {
        if (*(arr + i * data_type) < *(arr + min_idx * data_type))
        {
            min_idx = i;
        }
    }

    printf("indice del minimo: %zu\n", min_idx);
}

char *reverse_string(char *string)
{
    size_t len = strlen(string);              // Longitud del string
    char *reversed = (char *)malloc(len + 1); // Asignamos memoria para el string invertido

    if (reversed == NULL)
    {
        return NULL; // Si la asignación de memoria falla, devolvemos NULL
    }

    for (size_t i = 0; i < len; i++)
    {
        reversed[i] = string[len - 1 - i]; // Copiamos los caracteres en orden inverso
    }

    reversed[len] = '\0'; // Agregamos el carácter nulo al final
    return reversed;
}

int32_t string_length(char *string)
{
    if (string == NULL)
        return -1; // Manejo de error si el puntero es NULL

    int32_t length = 0;

    while (string[length] != '\0')
    { // Recorremos hasta el carácter nulo '\0'
        length++;
    }

    return length;
}

int32_t string_words(char *string)
{
    if (string == NULL)
        return -1; // Manejo de error

    int32_t count = 0;
    int in_word = 0; // Indica si estamos dentro de una palabra

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ' && string[i] != '\t' && string[i] != '\n')
        {
            if (!in_word)
            { // Si encontramos un carácter y no estábamos en una palabra
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0; // Si encontramos un espacio, salimos de la palabra
        }
    }

    return count;
}

complex_t sum(complex_t a, complex_t b)
{
    complex_t result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int32_t bin2dec(int32_t binary, bool sign)
{
    int numero_decimal = 0;
    int cantidad_de_cifras = 0;
    while (binary > 0)
    {
        if (binary % 10) // si tiene resto
        {
            numero_decimal = numero_decimal + pow(2, (cantidad_de_cifras));
            cantidad_de_cifras = cantidad_de_cifras + 1;
        }
        else
        {
            cantidad_de_cifras = cantidad_de_cifras + 1;
        }
        binary = binary / 10;
    }
    if (sign == false)
    {
        numero_decimal = -numero_decimal;
    }
    return numero_decimal;
}