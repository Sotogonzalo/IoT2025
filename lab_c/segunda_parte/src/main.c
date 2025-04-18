#include <stdio.h>
#include "student.h"

int main() {
    node_t *head = NULL;

    // Crear estudiantes de ejemplo
    student_t student1 = {"Juan", "Perez", 12345678, 2, 85.5};
    student_t student2 = {"Ana", "Gomez", 87654321, 3, 92.0};
    student_t student3 = {"Carlos", "Martinez", 11223344, 1, 70.0};

    // Agregar estudiantes a la lista
    add_student(&head, student1);
    add_student(&head, student2);
    add_student(&head, student3);

    // Mostrar todos los estudiantes
    printf("Lista de estudiantes:\n");
    display_all(head);

    // Eliminar un estudiante por CI
    printf("\nEliminando estudiante con CI 87654321:\n");
    remove_student(&head, 87654321);
    
    // Mostrar lista después de eliminación
    printf("\nLista de estudiantes despues de eliminacion:\n");
    display_all(head);

    // Mostrar un estudiante específico por CI
    printf("\nMostrar estudiante con CI 12345678:\n");
    display_student(head, 12345678);

    // Ordenar la lista por CI
    printf("\nLista ordenada por CI:\n");
    sort_by_ci(&head);
    display_all(head);

    // Ordenar la lista por Apellido y Nombre
    printf("\nLista ordenada por Apellido y Nombre:\n");
    sort_by_name(&head);
    display_all(head);

    // Liberar memoria de la lista
    free_list(&head);

    return 0;
}
