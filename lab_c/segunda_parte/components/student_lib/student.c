#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

#define NAME_LEN 50

// Agregar un estudiante al inicio de la lista
void add_student(node_t **head, student_t new_student) {
    node_t *new_node = (node_t*)malloc(sizeof(node_t));
    if (!new_node) {
        printf("Error al asignar memoria.\n");
        return;
    }
    new_node->data = new_student;
    new_node->next = *head;
    *head = new_node;
}

// Eliminar un estudiante por CI
void remove_student(node_t **head, int32_t ci) {
    node_t *current = *head, *prev = NULL;
    while (current != NULL && current->data.ci != ci) {
        prev = current;
        current = current->next;
    }
    if (!current) {
        printf("Estudiante con CI %d no encontrado.\n", ci);
        return;
    }
    if (!prev) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    free(current);
    printf("Estudiante eliminado.\n");
}

// Mostrar todos los estudiantes
void display_all(node_t *head) {
    if (!head) {
        printf("Lista vacía.\n");
        return;
    }
    node_t *current = head;
    while (current) {
        printf("Nombre: %s %s\nCI: %d\nGrado: %d\nPromedio: %.2f (%s)\n\n",
               current->data.nombre, current->data.apellido,
               current->data.ci, current->data.grado,
               current->data.promedio, get_grade_letter(current->data.promedio));
        current = current->next;
    }
}

// Mostrar un estudiante específico
void display_student(node_t *head, int32_t ci) {
    node_t *current = head;
    while (current) {
        if (current->data.ci == ci) {
            printf("Nombre: %s %s\nCI: %d\nGrado: %d\nPromedio: %.2f (%s)\n",
                   current->data.nombre, current->data.apellido,
                   current->data.ci, current->data.grado,
                   current->data.promedio, get_grade_letter(current->data.promedio));
            return;
        }
        current = current->next;
    }
    printf("Estudiante con CI %d no encontrado.\n", ci);
}

// Ordenar lista por CI (Burbuja)
void sort_by_ci(node_t **head) {
    if (!head || !*head) return;
    int swapped;
    node_t *ptr1;
    node_t *lptr = NULL;
    do {
        swapped = 0;
        ptr1 = *head;
        while (ptr1->next != lptr) {
            if (ptr1->data.ci > ptr1->next->data.ci) {
                student_t temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Ordenar lista por Apellido y Nombre (Burbuja)
void sort_by_name(node_t **head) {
    if (!head || !*head) return;
    int swapped;
    node_t *ptr1;
    node_t *lptr = NULL;
    do {
        swapped = 0;
        ptr1 = *head;
        while (ptr1->next != lptr) {
            int cmp = strcmp(ptr1->data.apellido, ptr1->next->data.apellido);
            if (cmp == 0) {
                cmp = strcmp(ptr1->data.nombre, ptr1->next->data.nombre);
            }
            if (cmp > 0) {
                student_t temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Retornar letra correspondiente a promedio
const char* get_grade_letter(float promedio) {
    if (promedio <= 30) return "D";
    else if (promedio <= 60) return "R";
    else if (promedio <= 75) return "B";
    else if (promedio <= 81) return "BMB";
    else if (promedio <= 94) return "MB";
    else return "S";
}

// Liberar la lista
void free_list(node_t **head) {
    node_t *current = *head;
    while (current != NULL) {
        node_t *next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}
