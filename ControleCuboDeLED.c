/*
 * ControleCuboDeLED.c
 *
 *  Created on: 16/07/2016
 *      Author: Evandro
 */

#include "ControleCuboDeLED.h"
//===========================================================================
//
//
//
//===========================================================================
void InitLED(void)
{
    // Anodo
    GPIO_setAsOutputPin(GPIO_PORT_P4,GPIO_PIN2);
    GPIO_setAsOutputPin(GPIO_PORT_P4,GPIO_PIN1);
    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN5);

    //katodo
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN0);
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN2);
    GPIO_setAsOutputPin(GPIO_PORT_P7,GPIO_PIN4);
    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN0);
    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN1);
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN6);
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN3);
    GPIO_setAsOutputPin(GPIO_PORT_P8,GPIO_PIN1);
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN5);
    GPIO_setAsOutputPin(GPIO_PORT_P2,GPIO_PIN4);
    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN5);
    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN4);
    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN3);
    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN2);

    GPIO_setAsOutputPin(GPIO_PORT_P4,GPIO_PIN3);
    GPIO_setAsOutputPin(GPIO_PORT_P4,GPIO_PIN0);
    //return (0);

    //GPIO_setOutputLowOnPin

	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);

    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
    GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
    GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
    GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
    GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
    GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
    GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
    GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);

    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
}
//===========================================================================
//
//
//
//===========================================================================
void ControlePlano1(unsigned led)
{
/*
	//GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
*/
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN2);

	switch(led)
	{
		case 0:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
		break;

		case 1:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
		break;

		case 2:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
		break;

		case 3:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
		break;

		case 4:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
		break;

		case 5:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
		break;

		case 6:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
		break;

		case 7:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
		break;

		case 8:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
		break;

		case 9:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
		break;

		case 10:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
		break;

		case 11:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
		break;

		case 12:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
		break;

		case 13:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);
		break;

		case 14:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
		break;

		case 15:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
		    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
		    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;
	}



}
//===========================================================================
//
//
//
//===========================================================================
void ControlePlano2(unsigned led)
{
/*
	//GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
*/
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN1);

	switch(led)
	{
		case 0:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
		break;

		case 1:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
		break;

		case 2:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
		break;

		case 3:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
		break;

		case 4:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
		break;

		case 5:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
		break;

		case 6:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
		break;

		case 7:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
		break;

		case 8:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
		break;

		case 9:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
		break;

		case 10:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
		break;

		case 11:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
		break;

		case 12:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
		break;

		case 13:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);
		break;

		case 14:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
		break;

		case 15:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
		    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
		    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;
	}

}
//===========================================================================
//
//
//
//===========================================================================
void ControlePlano3(unsigned led)
{
/*
	//GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
*/
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
	GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN6);

	switch(led)
	{
		case 0:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
		break;

		case 1:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
		break;

		case 2:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
		break;

		case 3:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
		break;

		case 4:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
		break;

		case 5:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
		break;

		case 6:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
		break;

		case 7:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
		break;

		case 8:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
		break;

		case 9:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
		break;

		case 10:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
		break;

		case 11:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
		break;

		case 12:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
		break;

		case 13:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);
		break;

		case 14:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
		break;

		case 15:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
		    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
		    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;
	}

}
//===========================================================================
//
//
//
//===========================================================================
void ControlePlano4(unsigned led)
{
/*
	//GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
*/
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN5);
	switch(led)
	{
		case 0:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
		break;

		case 1:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
		break;

		case 2:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
		break;

		case 3:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
		break;

		case 4:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
		break;

		case 5:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
		break;

		case 6:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
		break;

		case 7:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
		break;

		case 8:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
		break;

		case 9:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
		break;

		case 10:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
		break;

		case 11:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
		break;

		case 12:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
		break;

		case 13:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);
		break;

		case 14:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
		break;

		case 15:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);
		    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
		    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;
	}

}
//===========================================================================
//
//
//
//===========================================================================
void ControleCubo(unsigned char plano, unsigned led)
{
	switch(plano)
	{
		case 0:
	    	GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN2);
	    	//GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	        GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
		break;

		case 1:
	    	GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN1);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	    	//GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
		break;

		case 2:
	    	GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN6);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	    	//GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
		break;

		case 3:
	    	GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN5);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN2);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN1);
	    	GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN6);
	    	//GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN5);
		break;
	}

	switch(led)
	{
		case 0:
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		//GPIO_setOutputLowOnPin

		case 1:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 2:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputLowOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 3:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 4:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 5:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 6:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 7:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputLowOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 8:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 9:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputLowOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 10:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 11:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 12:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 13:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputLowOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 14:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

			GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

		case 15:
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN2);
			GPIO_setOutputHighOnPin(GPIO_PORT_P7,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
			GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN6);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P8,GPIO_PIN1);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P2,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN5);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN4);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN3);
			GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN2);

		    GPIO_setOutputHighOnPin(GPIO_PORT_P4,GPIO_PIN3);
		    GPIO_setOutputLowOnPin(GPIO_PORT_P4,GPIO_PIN0);
		break;

	}
}

//===========================================================================
