#include <stdio.h>
#include "global.h"

void global_function() {
    printf("Funcion de global ejecutada.\n");
}

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
