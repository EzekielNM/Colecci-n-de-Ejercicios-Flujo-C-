cmake_minimum_required(VERSION 3.29)
project(Colecci_n_de_Ejercicios_Flujo_C_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Colecci_n_de_Ejercicios_Flujo_C_
    .idea/.gitignore
    .idea/Colecci-n-de-Ejercicios-Flujo-C-.iml
    .idea/editor.xml
    .idea/misc.xml
    .idea/modules.xml
    .idea/vcs.xml
    .idea/workspace.xml
    main.cpp
    main.h
        matematicas.cpp
        geometria.cpp
        ciencia.cpp)
