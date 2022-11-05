/*
 * button.h
 *
 *  Created on: 3 thg 11, 2022
 *      Author: Bryce
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int RESETPressed();
int INCPressed();
int DECPressed();

extern int RESET_flag;

void getKeyInput_RESET();
void getKeyInput_INC();
void getKeyInput_DEC();

#endif /* INC_BUTTON_H_ */
