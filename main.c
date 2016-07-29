
#include <stm32f407xx.h>

int main(void)
{
	RCC->AHB1ENR|= RCC_AHB1ENR_GPIODEN|RCC_AHB1ENR_GPIOBEN;
	GPIOD->MODER|=(GPIO_MODER_MODER15_0|GPIO_MODER_MODER14_0|GPIO_MODER_MODER13_0|GPIO_MODER_MODER12_0);
	GPIOD->ODR|=(GPIO_ODR_ODR_15|GPIO_ODR_ODR_14|GPIO_ODR_ODR_13|GPIO_ODR_ODR_12);
	GPIOB->MODER|=(GPIO_MODER_MODER10_0);
	GPIOB->OSPEEDR|=(GPIO_OSPEEDER_OSPEEDR10_0 );
	GPIOB->ODR|=(GPIO_ODR_ODR_10);
	
//	GPIOD->MODER  &= ((0UL <<  2*12)|(0UL <<  2*13)|(0UL <<  2*14)|(0UL <<  2*15) ); 
//  GPIOD->MODER  |= ((1UL <<  2*12)|(1UL <<  2*13)|(1UL <<  2*14)|(1UL <<  2*15) );							/* init gpiod to output         */
//	GPIOD->ODR    |= ((0UL <<  12)| (0UL <<  13)|(0UL <<  14)|(0UL <<  15));             			  	/* put "1" to portd 12,13,14,15 */
//	GPIOA->PUPDR  |= ((1UL  <<  1 ));
	
	while(1)
	{
		GPIOB->ODR^=(GPIO_ODR_ODR_10);
	}
}
