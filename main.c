//#include <stdio.h>
#include "cmake-build-debug/ECUAL/BUTTON/button.h"
#include "cmake-build-debug/ECUAL/LED/led.h"
int main() {
    BTN0_Init();
    LED0_Init();
    LED1_Init();
    LED2_Init();
    LED3_Init();

    while(1){
      int counter =0;
    if(BTN0_GetValue()){
        counter ++;

    }
    if(counter ==1){
        LED0_ON();

    }else if(counter ==2){
        LED1_ON();
        LED0_ON();
    }else if(counter ==3){
        LED2_ON();
        LED1_ON();
        LED0_ON();
    }else if (counter ==4){
        LED3_ON();
        LED2_ON();
        LED1_ON();
        LED0_ON();
    }else if (counter ==5){
        LED0_OFF();
        LED3_ON();
        LED2_ON();
        LED1_ON();
    }else if (counter ==6){
        LED0_OFF();
        LED3_ON();
        LED2_ON();
        LED1_OFF();
    }
    else if (counter ==7){
        LED0_OFF();
        LED3_ON();
        LED2_OFF();
        LED1_OFF();
    }else if (counter ==8){
        LED0_OFF();
        LED3_OFF();
        LED2_ON();
        LED1_OFF();
    }else if (counter ==9) {
        break;
    }



    }
}
