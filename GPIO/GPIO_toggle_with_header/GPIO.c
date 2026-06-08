/*
 * GPIO.C
 *
 *  Created on: 06-Jun-2026
 *      Author: ashutosh sriram
 */


#include "GPIO.h"
//GPIO

#define RCC_AHB1ENR (*(volatile uint32_t*) 0x40023830)
#define GPIO_BASE 0x40020000
#define GPIO_MODER (*(volatile uint32_t*)(GPIO_BASE + 0x00))
#define GPIO_ODR (*(volatile uint32_t*)(GPIO_BASE + 0x14))

void GPIO_INIT(void){
	RCC_AHB1ENR |=(1<<0);
	GPIO_MODER &= ~(3<<10);
	GPIO_MODER |= (1<<10);
}
	void GPIO_TOGGLE(void){
			GPIO_ODR ^= (1<<5);
	}


