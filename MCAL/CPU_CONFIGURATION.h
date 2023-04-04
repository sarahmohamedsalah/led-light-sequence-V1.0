//
// Created by Sarah on 4/3/2023.
//

#ifndef UNTITLED2_CPU_CONFIGURATION_H
#define UNTITLED2_CPU_CONFIGURATION_H
#undef F_CPU /*Remove previous definition*/
#define F_CPU 16000000UL/*16 MegaHz(16 Million)*/
//#include <util/delay.h>
//#include <avr/interrupt.h>
#include <stdint.h>
//#include <avr/io.h> /*All registers are Pre-Defined here*/
#include "ATMEGA32_REGISTERS.h"
#include "./DIO/DIO.h"
#endif //UNTITLED2_CPU_CONFIGURATION_H
