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

void string_to_min(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + ('a' - 'A');  // o +32
        }
        i++;
    }
}
void string_to_caps(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A');  // o -32
        }
        i++;
    }
}

int consonantes(char *string);
{
    int letras = []
    int vuelta = 0;
    int consonante= letras->consonante;
    int vocal =letras->vocal;
    char string =&puntero;
    string_to_min(string)
while vuelta != '\0';
if (string{vuelta} == 'u' || 'a' || 'e' || 'o' ||'i'){
int vocal++;
} else {int consonante++;}
int vuelta++;
return consonante
}
 
int vocales(char *string);
{
    int letras = []
    int vuelta = 0;
    int consonante= letras->consonantes;
    int vocal =letras->vocal;
    char string =&puntero;
    string_to_min(string)
while vuelta != '\0';
if (string{vuelta} == 'u' || 'a' || 'e' || 'o' ||'i'){
int vocal++;
} else {int consonante++;}
int vuelta++;
return vocal
}
typedef enum {
    TIPO_INT,
    TIPO_FLOAT,
    TIPO_CHAR,
    TIPO_DOUBLE,
    TIPO_LONG
}Data_type;

size_t obtenerTamanio(Data_type tipo) {
    switch (tipo) {
        case TIPO_INT:    return sizeof(int);
        case TIPO_FLOAT:  return sizeof(float);
        case TIPO_CHAR:   return sizeof(char);
        case TIPO_DOUBLE: return sizeof(double);
        case TIPO_LONG:   return sizeof(long);
        default: return 0;
    }
}

int swap(void* elem_1, void* elem_2, Data_type tipo) {
    size_t tam = obtenerTamanio(tipo);  // 
    if (tam == 0 || elem_1 == 0 || elem_2 == 0) {
        return -1;
    }

    // Variable temporal fijo (ajustá el tamaño si necesitás tipos más grandes)
    char temp[32];
    if (tam > sizeof(temp)) {
        return -1; // No hay suficiente espacio para hacer el swap
    }

    // Copiar byte a byte
    for (size_t i = 0; i < tam; i++) {
        temp[i] = ((char*)elem_1)[i];
    }

    for (size_t i = 0; i < tam; i++) {
        ((char*)elem_1)[i] = ((char*)elem_2)[i];
    }

    for (size_t i = 0; i < tam; i++) {
        ((char*)elem_2)[i] = temp[i];
    }

    return 0;
}
void print_reverse_array(void *array, size_t data_type, size_t array_size) {
    unsigned char *ptr = (unsigned char *)array;

    for (size_t i = array_size; i > 0; i--) {
        void *elem_ptr = ptr + (i - 1) * data_type;

        // Asumimos que el tipo es int
        int *valor = (int *)elem_ptr;
        printf("%d ", *valor);
    }
    printf("\n");
}
