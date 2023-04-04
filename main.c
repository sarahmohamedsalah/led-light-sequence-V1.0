//#include <stdio.h>
#include "./ECUAL/BUTTON/button.h"
#include "./ECUAL/LED/led.h"
int main() {
     BTN0_Init(PORTD, 2);
    LED0_Init(PORTC,2);
    LED1_Init(PORTC,3);
    LED2_Init(PORTC,4);
    LED3_Init(PORTC,5);

    while(1){
      int counter =0;
    if(BTN0_GetValue(PORTD, 2)){
        counter ++;

    }
    if(counter ==1){
        LED0_ON(PORTC, 2);

    }else if(counter ==2){
        LED1_ON(PORTC, 3);
        LED0_ON(PORTC, 2);
    }else if(counter ==3){
        LED2_ON(PORTC, 4);
        LED1_ON(PORTC, 3);
        LED0_ON(PORTC, 2);
    }else if (counter ==4){
        LED3_ON(PORTC, 5);
        LED2_ON(PORTC, 4);
        LED1_ON(PORTC, 3);
        LED0_ON(PORTC, 2);
    }else if (counter ==5){
        LED0_OFF(PORTC, 2);
        LED3_ON(PORTC, 5);
        LED2_ON(PORTC, 4);
        LED1_ON(PORTC, 3);
    }else if (counter ==6){
        LED0_OFF(PORTC, 2);
        LED3_ON(PORTC, 5);
        LED2_ON(PORTC, 4);
        LED1_OFF(PORTC, 3);
    }
    else if (counter ==7){
        LED0_OFF(PORTC, 2);
        LED3_ON(PORTC, 5);
        LED2_OFF(PORTC, 4);
        LED1_OFF(PORTC, 3);
    }else if (counter ==8){
        LED0_OFF(PORTC, 2);
        LED3_OFF(PORTC, 5);
        LED2_ON(PORTC, 4);
        LED1_OFF(PORTC, 3);
    }else if (counter ==9) {
        break;
    }



    }
}
