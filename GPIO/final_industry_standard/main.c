#include <stdint.h>
#include "GPIO.h"
void delay(void)
{
    for(volatile uint32_t i=0;i<500000;i++);
}

 int main(){
	 GPIO_INIT(GPIOB,5);
	 while(1){
	 GPIO_TOGGLE(GPIOB,5);
	 delay();
 }
 }

