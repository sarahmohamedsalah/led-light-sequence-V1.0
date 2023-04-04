cmake_minimum_required(VERSION 3.25)
project(led_light_sequence_V1_0 C)

set(CMAKE_C_STANDARD 11)

add_executable(led_light_sequence_V1_0 main.c ECUAL/LED/led.c MCAL/DIO/DIO.c ECUAL/BUTTON/button.c)
