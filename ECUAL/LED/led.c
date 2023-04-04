//
// Created by Sarah on 4/3/2023.
//


#include "led.h"


void LED0_Init(void)
{

    //DDRC = 0x04;

    DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
    //PORTC = 0x04;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
    //PORTC = 0x00;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED0_Toggle(void)
{
    //TGL_BIT(PORTC, 2);
    DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}

void LED1_Init(void)
{

    //DDRC = 0x04;
    DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED1_ON(void)
{
    //PORTC = 0x04;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED1_OFF(void)
{
    //PORTC = 0x00;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED1_Toggle(void)
{
    //TGL_BIT(PORTC, 2);
    DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}

void LED2_Init(void)
{

    //DDRC = 0x04;
    DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED2_ON(void)
{
    //PORTC = 0x04;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED2_OFF(void)
{
    //PORTC = 0x00;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED2_Toggle(void)
{
    //TGL_BIT(PORTC, 2);
    DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}









void LED3_Init(void)
{

    //DDRC = 0x04;
    DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED3_ON(void)
{
    //PORTC = 0x04;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED3_OFF(void)
{
    //PORTC = 0x00;
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED3_Toggle(void)
{
    //TGL_BIT(PORTC, 2);
    DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}









