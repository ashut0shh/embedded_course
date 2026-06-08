/*
 * GPIO.C
 *
 *  Created on: 06-Jun-2026
 *      Author: ashutosh sriram
 */


#include "GPIO.h"
//GPIO

//#define GPIO_BASE 0x40020000
//#define GPIO_MODER (*(volatile uint32_t*)(GPIO_BASE + 0x00))
//#define GPIO_ODR (*(volatile uint32_t*)(GPIO_BASE + 0x14))

void GPIO_INIT(GPIO_typedef *port,uint8_t pin){
	uint32_t bit =((uint32_t)port- (uint32_t)GPIOA)/0x400;

	RCC_AHB1ENR |=(1<<bit);
	port ->MODER &= ~(3<<(pin*2));
	port ->MODER |= (1<<(pin*2));
}
void GPIO_TOGGLE(GPIO_typedef *port,uint8_t pin){
    port->ODR ^= (1<<pin);
}


