/*
 * button.c
 *
 *  Created on: 3 thg 11, 2022
 *      Author: Bryce
 */


#include "button.h"
#include "main.h"

int RESET_flag = 0;
int INC_flag = 0;
int DEC_flag = 0;

int KeyReg0_RESET = NORMAL_STATE;
int KeyReg1_RESET = NORMAL_STATE;
int KeyReg2_RESET = NORMAL_STATE;
int KeyReg3_RESET = NORMAL_STATE;

int KeyReg0_INC = NORMAL_STATE;
int KeyReg1_INC = NORMAL_STATE;
int KeyReg2_INC = NORMAL_STATE;
int KeyReg3_INC = NORMAL_STATE;

int KeyReg0_DEC = NORMAL_STATE;
int KeyReg1_DEC = NORMAL_STATE;
int KeyReg2_DEC = NORMAL_STATE;
int KeyReg3_DEC = NORMAL_STATE;

int TimerForKeyPress_RESET = 200;
int TimerForKeyPress_INC = 200;
int TimerForKeyPress_DEC = 200;

int RESETPressed()
{
	if (RESET_flag == 1)
	{
		RESET_flag = 0;
		return 1;
	}
	return 0;
}

int INCPressed()
{
	if (INC_flag == 1)
	{
		INC_flag = 0;
		return 1;
	}
	return 0;
}

int DECPressed()
{
	if (DEC_flag == 1)
	{
		DEC_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_RESET()
{
	RESET_flag = 1;
}

void getKeyInput_RESET()
{
	KeyReg0_RESET = KeyReg1_RESET;
	KeyReg1_RESET = KeyReg2_RESET;
	KeyReg2_RESET = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	if((KeyReg0_RESET == KeyReg1_RESET) && (KeyReg1_RESET == KeyReg2_RESET))
	{
		if(KeyReg3_RESET != KeyReg2_RESET)
		{
			KeyReg3_RESET = KeyReg2_RESET;
			if(KeyReg2_RESET == PRESSED_STATE)
			{
				subKeyProcess_RESET();
				TimerForKeyPress_RESET = 300;
			}
		}
		else
		{
			TimerForKeyPress_RESET--;
			if(TimerForKeyPress_RESET == 0)
			{
				if(KeyReg2_RESET == PRESSED_STATE)
				{
					subKeyProcess_RESET();
				}
				TimerForKeyPress_RESET = 100;
			}
		}
	}
}
void subKeyProcess_INC()
{
	INC_flag = 1;
}

void getKeyInput_INC()
{
	KeyReg0_INC = KeyReg1_INC;
	KeyReg1_INC = KeyReg2_INC;
	KeyReg2_INC = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	if((KeyReg0_INC == KeyReg1_INC) && (KeyReg1_INC == KeyReg2_INC))
	{
		if(KeyReg3_INC != KeyReg2_INC)
		{
			KeyReg3_INC = KeyReg2_INC;
			if(KeyReg2_INC == PRESSED_STATE)
			{
				subKeyProcess_INC();
				TimerForKeyPress_INC = 300;
			}
		}
		else
		{
			TimerForKeyPress_INC--;
			if(TimerForKeyPress_INC == 0)
			{
				if(KeyReg2_INC == PRESSED_STATE)
				{
					subKeyProcess_INC();
				}
				TimerForKeyPress_INC = 100;
			}
		}
	}
}
void subKeyProcess_DEC()
{
	DEC_flag = 1;
}

void getKeyInput_DEC()
{
	KeyReg0_DEC = KeyReg1_DEC;
	KeyReg1_DEC = KeyReg2_DEC;
	KeyReg2_DEC = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
	if((KeyReg0_DEC == KeyReg1_DEC) && (KeyReg1_DEC == KeyReg2_DEC))
	{
		if(KeyReg3_DEC != KeyReg2_DEC)
		{
			KeyReg3_DEC = KeyReg2_DEC;
			if(KeyReg2_DEC == PRESSED_STATE)
			{
				subKeyProcess_DEC();
				TimerForKeyPress_DEC = 300;
			}
		}
		else
		{
			TimerForKeyPress_DEC--;
			if(TimerForKeyPress_DEC == 0)
			{
				if(KeyReg2_DEC == PRESSED_STATE)
				{
					subKeyProcess_DEC();
				}
				TimerForKeyPress_DEC = 100;
			}
		}
	}
}
