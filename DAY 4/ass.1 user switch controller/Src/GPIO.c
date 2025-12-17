/*
 * GPIO.c
 *
 *  Created on: 17-Dec-2025
 *      Author: Ashutosh-PC
 */
#include"GPIO.h"
void led_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= BV(3);
	//1. select mode as output
	GPIOA->MODER &= ~(BV(25));
	GPIOA->MODER |= BV(24);
	//2. select type as push pull
	GPIOA->OTYPER &= ~(BV(12));
	//3. select speed as low
	GPIOA->OSPEEDR &= ~(BV(25));
	GPIOA->OSPEEDR &= ~(BV(24));
	//4. select pull up/down as no
	GPIOA->PUPDR &= ~(BV(25));
	GPIOA->PUPDR &= ~(BV(24));
}
void switch_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= BV(0);
	//1. select mode as output
	GPIOA->MODER &= ~(BV(0) | BV(1));
	//2. select type as push pull
	GPIOA->OTYPER &= ~(BV(0));
	//3. select speed as low
	GPIOA->OSPEEDR &= ~(BV(0) | BV(1));
	//4. select pull up/down as no
	GPIOA->PUPDR &= ~(BV(0) | BV(1));
}
void led_on(void)
{
	GPIOA->ODR |= BV(12);
}
int switch_status(void)
{
	if(GPIOA->IDR  & BV(0))
		return(1);
	else
		return(0);
}


