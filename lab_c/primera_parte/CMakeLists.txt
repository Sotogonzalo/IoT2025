cmake_minimum_required(VERSION 3.10)
project(MiProyecto C)

# Habilitar compilación con estándares modernos de C
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(component_lib "components")
set(include_lib "include")
set(lib "global_lib")

# Agregar subdirectorios de las librerías
add_subdirectory("${component_lib}/${lib}")

# Definir el ejecutable principal
add_executable(mi_programa src/main.c)

# Vincular las bibliotecas al ejecutable
target_link_libraries(mi_programa "${lib}")

# Agregar los directorios de encabezados de las bibliotecas
target_include_directories(mi_programa PRIVATE 
    "${component_lib}/${lib}/${include_lib}"
)
