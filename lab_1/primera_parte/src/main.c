#include <stdio.h>
#include "global.h"

int main()
{
    // Init_lab
    init_lab();

    // Eq_solver
    coeff_t coef = {1, -3, 2}; // Ecuación: x^2 - 3x + 2 = 0
    root_t soluciones = eq_solver(&coef);

    if (soluciones.has_real_roots)
    {
        printf("Raices reales: %.2f y %.2f\n", soluciones.root1, soluciones.root2);
    }
    else
    {
        printf("La ecuación no tiene raíces reales.\n");
    }

    // Max y Min index
    int arr[] = {10, 3, 7, 2, 9, 5};
    size_t data_type = sizeof(int);
    size_t array_size = sizeof(arr) / sizeof(arr[0]);

    max_index(arr, data_type, array_size);
    min_index(arr, data_type, array_size);

    // Reverse string
    char original[] = "Hola Mundo!";
    char *reversed = reverse_string(original);

    if (reversed != NULL)
    {
        printf("Original: %s\n", original);
        printf("Invertido: %s\n", reversed);
        free(reversed);
    }
    else
    {
        printf("Error al asignar memoria.\n");
    }

    // String length y String words
    char test_string[] = "Hola mundo! prueba de string.";

    int32_t len = string_length(test_string);
    int32_t words = string_words(test_string);

    printf("Longitud del string: %d\n", len);
    printf("Numero de palabras: %d\n", words);

    // Complex sum
    complex_t num1 = {3.0, 2.5};
    complex_t num2 = {1.5, -4.0};

    complex_t resultado = sum(num1, num2);
    printf("Suma compleja: (%.2f, %.2fi)\n", resultado.real, resultado.imag);

    // bin2dec
    int32_t binarypos = 101001;
    int32_t binaryneg = 110010;
    int decpositivo = bin2dec(binarypos, true);  // numero binario positivo que transformo a decimal
    int decnegativo = bin2dec(binaryneg, false); // numero binario positivo que transformo a decimal
    printf("su numero positivo binario es en decimal:%i\n su numero negativo binario es en decimal:%i\n", decpositivo, decnegativo);

    // matrix_sub
    matriz_t a;
    a.data[0][0] = 1;
    a.data[0][1] = 3;
    a.data[1][0] = 1;
    a.data[1][1] = 4;
    matriz_t b;
    b.data[0][0] = 2;
    b.data[0][1] = 3;
    b.data[1][0] = 5;
    b.data[1][1] = 2;
    matriz_t resultadomatrixsub = matrix_sub(a, b);
    printf("a continuacion la matriz equivalente a la resta\n %i %i\n %i %i\n", resultadomatrixsub.data[0][0], resultadomatrixsub.data[0][1], resultadomatrixsub.data[1][0], resultadomatrixsub.data[1][1]);

    // string_copy
    char string_origen[32] = "hola como estas fvefve"; // string origen
    char string_destino[32] = "bieeen :D";             // string destino
    string_copy(string_origen, string_destino);
    printf("%s\n", string_origen);
    printf("%s\n", string_destino);

    // find_in_string
    char *haystackstring = "hola comi coma comi estas comi";
    char *needlestring = "comi";
    printf("cantidad de veces que extraigo el needle del haystack: %i\n", find_in_string(haystackstring, needlestring));
}
