#include <stdio.h>
#include <time.h>
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


//void days_left(date_t_start, date_t_finish);
//time_t date_t_start = 1/01/2001;


int vocales(char *string)

{
    int vuelta = 0;
    int vocal =0;
    
while (*(string+vuelta) !=  '\0')
{
    if (string[vuelta] == 'a' || string[vuelta] == 'e' || string[vuelta] == 'i' || 
    string[vuelta] == 'o' || string[vuelta] == 'u' ||
    string[vuelta] == 'A' || string[vuelta] == 'E' || string[vuelta] == 'I' || 
    string[vuelta] == 'O' || string[vuelta] == 'U') 
    vocal++;
    

    vuelta++;
}
printf("La palabra tiene %d vocales.\n", vocal);
}
int consonates(char *string)

{
    int vuelta = 0;
    int consonante =0;
    
while (*(string+vuelta) !=  '\0')
{
    if (string[vuelta] != 'a' || string[vuelta] != 'e' || string[vuelta] != 'i' || 
    string[vuelta] != 'o' || string[vuelta] != 'u' ||
    string[vuelta] != 'A' || string[vuelta] != 'E' || string[vuelta] != 'I' || 
    string[vuelta] != 'O' || string[vuelta] != 'U') 
    consonante++;
    

    vuelta++;
}
printf("La palabra tiene %d consonates.\n", consonante);
}



