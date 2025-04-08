add_library(student_lib student.c)

# Especificar el directorio de los headers para esta librería
target_include_directories(student_lib PUBLIC include)
