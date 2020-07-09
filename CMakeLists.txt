cmake_minimum_required(VERSION 3.16)
project(ProgrammingLesson C)

set(CMAKE_C_STANDARD 99)

add_executable(HelloWorld Lesson1/HelloWorld.c)
add_executable(VariableDeclaration Lesson1/VariableDeclaration.c)
add_executable(TypeConveresion Lesson1/TypeConveresion.c)
add_executable(Operators Lesson1/Operators.c)
add_executable(Excercises Lesson1/Excercises.c)

