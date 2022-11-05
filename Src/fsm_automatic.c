/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Bryce
 */


#include "fsm_automatic.h"

void fsm_automatic_run()
{
	switch(status)
	{
		case AUTONUM_0:
	  		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);  //0
	  		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, SET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_0;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_1;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_9;
					setTimer1(10000);
				}

			break;
		case AUTONUM_1:
	  		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, SET);	//1
	  		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, SET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_0;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_2;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}

			break;
		case AUTONUM_2:
	  		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//2
	  		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_1;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_3;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_1;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}

			break;
		case AUTONUM_3:
			  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//3
			  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_2;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_4;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_2;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}

			break;
		case AUTONUM_4:
	  		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, SET);	//4
			  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_3;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_5;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_3;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
		case AUTONUM_5:
	  		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//5
	  		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, SET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_4;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_6;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_4;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
		case AUTONUM_6:
			  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//6
			  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, SET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_5;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_7;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_5;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
		case AUTONUM_7:
			  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//7
	  		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, SET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_6;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_8;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_6;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
		case AUTONUM_8:
			  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//8
			  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_7;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_9;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_7;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
		case AUTONUM_9:
			  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, RESET);	//9
			  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
	  		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);

		  		if (timer1_flag == 1)
				{
					status = AUTONUM_8;
					setTimer1(10000);
				}
				if (INCPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
				if (DECPressed() == 1)
				{
					status = NUM_8;
					setTimer1(10000);
				}
				if (RESETPressed() == 1)
				{
					status = NUM_0;
					setTimer1(10000);
				}
			break;
	}
}
