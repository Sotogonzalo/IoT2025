#include <stdio.h>
#include <stdlib.h>
#include "global.h"

int main() {
    // ---- Funcion init_lab ----
    printf("\n--- Funcion init_lab ---\n");
    init_lab();

    // ---- Funcion eq_solver ----
    printf("\n--- Funcion eq_solver ---\n");
    coeff_t coef = {1, -3, 2}; // Ecuación: x^2 - 3x + 2 = 0
    printf("Input: coef = {%.1f, %.1f, %.1f}\n", coef.a, coef.b, coef.c);
    root_t soluciones = eq_solver(&coef);
    if (soluciones.has_real_roots) {
        printf("Output: Raíces reales: %.2f y %.2f\n", soluciones.root1, soluciones.root2);
    } else {
        printf("Output: La ecuación no tiene raíces reales.\n");
    }

    // ---- Funcion max_index y min_index ----
    printf("\n--- Funcion max_index y min_index ---\n");
    int arr[] = {10, 3, 7, 2, 9, 5};
    size_t data_type = sizeof(int);
    size_t array_size = sizeof(arr) / sizeof(arr[0]);
    printf("Input: arr = {10, 3, 7, 2, 9, 5}, tipo = int, tamaño = %zu\n", array_size);
    max_index(arr, data_type, array_size);
    min_index(arr, data_type, array_size);

    // ---- Funcion reverse_string ----
    printf("\n--- Funcion reverse_string ---\n");
    char original[] = "Hola Mundo!";
    printf("Input: \"%s\"\n", original);
    char *reversed = reverse_string(original);
    if (reversed != NULL) {
        printf("Output: \"%s\"\n", reversed);
        free(reversed);
    } else {
        printf("Output: Error al asignar memoria.\n");
    }

    // ---- Funcion string_length y string_words ----
    printf("\n--- Funcion string_length y string_words ---\n");
    char test_string[] = "Hola mundo! prueba de string.";
    printf("Input: \"%s\"\n", test_string);
    int32_t len = string_length(test_string);
    int32_t words = string_words(test_string);
    printf("Output: Longitud = %d, Palabras = %d\n", len, words);

    // ---- Funcion sum (suma de complejos) ----
    printf("\n--- Funcion sum (suma de complejos) ---\n");
    complex_t num1 = {3.0, 2.5};
    complex_t num2 = {1.5, -4.0};
    printf("Input: (%.2f + %.2fi), (%.2f + %.2fi)\n", num1.real, num1.imag, num2.real, num2.imag);
    complex_t resultado = sum(num1, num2);
    printf("Output: (%.2f + %.2fi)\n", resultado.real, resultado.imag);

    // ---- Funcion bin2dec ----
    printf("\n--- Funcion bin2dec ---\n");
    int32_t binarypos = 101001;
    int32_t binaryneg = 110010;
    printf("Input: binario positivo = %d, negativo = %d\n", binarypos, binaryneg);
    int decpositivo = bin2dec(binarypos, true);
    int decnegativo = bin2dec(binaryneg, false);
    printf("Output: decimal positivo = %d, decimal negativo = %d\n", decpositivo, decnegativo);

    // ---- Funcion matrix_sub ----
    printf("\n--- Funcion matrix_sub ---\n");
    matriz_t a = {{{1, 3}, {1, 4}}};
    matriz_t b = {{{2, 3}, {5, 2}}};
    printf("Input:\nA = [%d %d; %d %d]\nB = [%d %d; %d %d]\n",
           a.data[0][0], a.data[0][1], a.data[1][0], a.data[1][1],
           b.data[0][0], b.data[0][1], b.data[1][0], b.data[1][1]);
    matriz_t resultadomatrixsub = matrix_sub(a, b);
    printf("Output:\nResultado = [%d %d; %d %d]\n",
           resultadomatrixsub.data[0][0], resultadomatrixsub.data[0][1],
           resultadomatrixsub.data[1][0], resultadomatrixsub.data[1][1]);

    // ---- Funcion string_copy ----
    printf("\n--- Funcion string_copy ---\n");
    char string_origen[32] = "hola como estas fvefve";
    char string_destino[32] = "bieeen :D";
    printf("Input: origen = \"%s\", destino = \"%s\"\n", string_origen, string_destino);
    string_copy(string_origen, string_destino);
    printf("Output: origen = \"%s\", destino = \"%s\"\n", string_origen, string_destino);

    // ---- Funcion find_in_string ----
    printf("\n--- Funcion find_in_string ---\n");
    char *haystackstring = "hola comi coma comi estas comi";
    char *needlestring = "comi";
    printf("Input: haystack = \"%s\", needle = \"%s\"\n", haystackstring, needlestring);
    printf("Output: cantidad de apariciones = %d\n", find_in_string(haystackstring, needlestring));

    // ---- Funcion prod (producto complejo) ----
    printf("\n--- Funcion prod (producto de complejos) ---\n");
    complex_t num1imag = {2.0, 4.0};
    complex_t num2imag = {5.0, 6.0};
    printf("Input: (%.2f + %.2fi) * (%.2f + %.2fi)\n", num1imag.real, num1imag.imag, num2imag.real, num2imag.imag);
    complex_t product = prod(num1imag, num2imag);
    printf("Output: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
