set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -std=c99 -Wall -DUNIX -g -DDEBUG -O0")
add_executable (main main.c)
