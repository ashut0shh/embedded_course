/*
 * GPIO.h
 *
 *  Created on: 06-Jun-2026
 *      Author: ashutosh sriram
 */
#include <stdint.h>

#ifndef GPIO_H_
#define GPIO_H_
typedef struct
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t RCC_AHB_EN;
} GPIO_typedef;
#define RCC_AHB1ENR (*(volatile uint32_t*)0x40023830)
#define GPIOA ((GPIO_typedef*) 0x40020000)
#define GPIOB ((GPIO_typedef*) 0x40020400)
#define GPIOC ((GPIO_typedef*) 0x40020800)
void GPIO_TOGGLE(GPIO_typedef *port,uint8_t pin);
void GPIO_INIT(GPIO_typedef *port,uint8_t pin);

#endif /* GPIO_H_ */
