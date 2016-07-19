/*
 * ControleCuboDeLED.h
 *
 *  Created on: 16/07/2016
 *      Author: Evandro
 */

#ifndef CONTROLECUBODELED_H_
#define CONTROLECUBODELED_H_

#include "driverlib.h"
#include "types.h"

void InitLED(void);
void ControleCubo(unsigned char plano, unsigned led);
void ControlePlano1(unsigned led);
void ControlePlano2(unsigned led);
void ControlePlano3(unsigned led);
void ControlePlano4(unsigned led);

#endif /* CONTROLECUBODELED_H_ */
