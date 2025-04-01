add_library(global global.c)

# Especificar el directorio de los headers para esta librería
target_include_directories(global PUBLIC include)
include_directories(${CMAKE_SOURCE_DIR}/components/global_lib/include)
add_executable(main src/main.c components/global_lib/global.c)
