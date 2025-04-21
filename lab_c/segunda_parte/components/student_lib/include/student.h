// student.h
#ifndef STUDENT_H_
#define STUDENT_H_

#include <stdio.h>
#include <stdint.h>

typedef struct {
    char nombre[50];
    char apellido[50];
    int32_t ci;
    int grado;
    float promedio;
} student_t;

typedef struct node {
    student_t data;
    struct node *next;
} node_t;

// Funciones de lista
void add_student(node_t **head, student_t new_student);
void remove_student(node_t **head, int32_t ci);

// Funciones de visualización
void display_all(node_t *head);
void display_student(node_t *head, int32_t ci);

// Ordenamiento
void sort_by_ci(node_t **head);
void sort_by_name(node_t **head);

// Utilidades
const char* get_grade_letter(float promedio);
void free_list(node_t **head);
void display_student_data(student_t s);

#endif // STUDENT_H_
