#include <stdio.h>
// #include "global.h"
#include "../components/global_lib/include/global.h"

int main() {

    init_lab();

    coeff_t coef = {1, -3, 2}; // Ecuación: x^2 - 3x + 2 = 0
    root_t soluciones = eq_solver(&coef);

    if (soluciones.has_real_roots) {
        printf("Raíces reales: %.2f y %.2f\n", soluciones.root1, soluciones.root2);
    } else {
        printf("La ecuación no tiene raíces reales.\n");
    }
    
    return 0;
}
