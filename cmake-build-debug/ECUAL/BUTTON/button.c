//
// Created by Sarah on 4/3/2023.
//

#include "button.h"




void BTN0_Init(void)
{
    DIO_SetPin_Direction(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);
}

Uint8t BTN0_GetValue(void)
{
    Uint8t BTNX;

    //value = GET_BIT(PINB, PINB);
    DIO_ReadPin_Value(DIO_PORTD, DIO_PIN2, &BTNX);
    while(!BTNX){

        return BTNX;}
}
