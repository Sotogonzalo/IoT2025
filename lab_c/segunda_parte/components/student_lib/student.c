#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

// Función para agregar un estudiante al inicio de la lista
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

// Función para eliminar un estudiante por CI
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

// Función que muestra todos los estudiantes
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

// Función para mostrar un estudiante específico
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

// Función que ordena la lista por CI (utilizando método Burbuja)
void sort_by_ci(node_t **head) {
    if (!head || !*head) return;
    int swapped;
    node_t *pointer;
    node_t *last_pointer = NULL;
    do {
        swapped = 0;
        pointer = *head;
        while (pointer->next != last_pointer) {
            if (pointer->data.ci > pointer->next->data.ci) {
                student_t temp = pointer->data;
                pointer->data = pointer->next->data;
                pointer->next->data = temp;
                swapped = 1;
            }
            pointer = pointer->next;
        }
        last_pointer = pointer;
    } while (swapped);
}

// Función para ordenar lista por Apellido y Nombre (utilizando método Burbuja)
void sort_by_name(node_t **head) {
    if (!head || !*head) return;
    int swapped;
    node_t *pointer;
    node_t *last_pointer = NULL;
    do {
        swapped = 0;
        pointer = *head;
        while (pointer->next != last_pointer) {
            int cmp = strcmp(pointer->data.apellido, pointer->next->data.apellido);
            if (cmp == 0) {
                cmp = strcmp(pointer->data.nombre, pointer->next->data.nombre);
            }
            if (cmp > 0) {
                student_t temp = pointer->data;
                pointer->data = pointer->next->data;
                pointer->next->data = temp;
                swapped = 1;
            }
            pointer = pointer->next;
        }
        last_pointer = pointer;
    } while (swapped);
}

// Funcion para devolver la letra correspondiente al promedio
const char* get_grade_letter(float promedio) {
    if (promedio <= 30) return "D";
    else if (promedio <= 60) return "R";
    else if (promedio <= 75) return "B";
    else if (promedio <= 81) return "BMB";
    else if (promedio <= 94) return "MB";
    else return "S";
}

// Liberar memoria de la lista
void free_list(node_t **head) {
    node_t *current = *head;
    while (current != NULL) {
        node_t *next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}
