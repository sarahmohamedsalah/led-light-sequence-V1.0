//
// Created by Sarah on 4/3/2023.
//

#ifndef UNTITLED2_BUTTON_H
#define UNTITLED2_BUTTON_H
#include "../../MCAL/DIO/DIO.h"
#define BUTTON_0_PORT	DIO_PORTB
#define BUTTON_0_Pin	DIO_PIN0
typedef enum buttonErrors{
    BUTTON_OK,
    WRONG_BUTTON_PORT,
    WRONG_BUTTON_PIN
}EN_buttonError_t;
EN_buttonError_t BTN0_GetValue(uint8_t buttonPort, uint8_t buttonPin);
EN_buttonError_t BTN0_Init(uint8_t buttonPort, uint8_t buttonPin);
#endif //UNTITLED2_BUTTON_H
