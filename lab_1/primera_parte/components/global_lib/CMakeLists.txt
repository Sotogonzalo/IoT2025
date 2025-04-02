add_library(global_lib global.c)

# Especificar el directorio de los headers para esta librería
target_include_directories(global_lib PUBLIC include)
