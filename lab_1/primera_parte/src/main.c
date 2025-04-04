#include <stdio.h>
#include "global.h"

int main() {
    // Init_lab
    init_lab();

    // Eq_solver
    coeff_t coef = {1, -3, 2}; // Ecuación: x^2 - 3x + 2 = 0
    root_t soluciones = eq_solver(&coef);

    if (soluciones.has_real_roots) {
        printf("Raices reales: %.2f y %.2f\n", soluciones.root1, soluciones.root2);
    } else {
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

    if (reversed != NULL) {
        printf("Original: %s\n", original);
        printf("Invertido: %s\n", reversed);
        free(reversed);
    } else {
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
    
    return 0;
}
