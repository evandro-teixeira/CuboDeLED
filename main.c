#include "driverlib.h"
#include "ControleCuboDeLED.h"
#include "types.h"

#define COMPARE_VALUE 5000

uint8_t led1 = 0;
uint8_t led2 = 0;
uint8_t led3 = 0;
uint8_t led4 = 0;

boolean EstadoPlano1 = 0;
uint8_t EstadoPlano2 = 0;
boolean EstadoPlano3 = 0;
boolean EstadoPlano4 = 0;

uint32_t Contador_Tick = 0;
uint32_t Ticks_Plano1  = 0;
uint32_t Ticks_Plano2  = 0;
uint32_t Ticks_Plano3  = 0;
uint32_t Ticks_Plano4  = 0;

void delay(unsigned long int i);
void ControleCubo1(void);
void ControleCubo2(void);
void ControleCubo3(void);
uint32_t Calcula_Tick(uint32_t ticks);
boolean Check_Tick_Timer(uint32_t ticks);

int main(void)
{
    WDT_A_hold(WDT_A_BASE);
    InitLED();

    //Start timer in continuous mode sourced by SMCLK
    Timer_A_initContinuousModeParam initContParam = {0};
    initContParam.clockSource = TIMER_A_CLOCKSOURCE_SMCLK;
    initContParam.clockSourceDivider = TIMER_A_CLOCKSOURCE_DIVIDER_1;
    initContParam.timerInterruptEnable_TAIE = TIMER_A_TAIE_INTERRUPT_DISABLE;
    initContParam.timerClear = TIMER_A_DO_CLEAR;
    initContParam.startTimer = false;
    Timer_A_initContinuousMode(TIMER_A1_BASE, &initContParam);
    //Initiaze compare mode
    Timer_A_clearCaptureCompareInterrupt(TIMER_A1_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_0);
    Timer_A_initCompareModeParam initCompParam = {0};
    initCompParam.compareRegister = TIMER_A_CAPTURECOMPARE_REGISTER_0;
    initCompParam.compareInterruptEnable = TIMER_A_CAPTURECOMPARE_INTERRUPT_ENABLE;
    initCompParam.compareOutputMode = TIMER_A_OUTPUTMODE_OUTBITVALUE;
    initCompParam.compareValue = COMPARE_VALUE;
    Timer_A_initCompareMode(TIMER_A1_BASE, &initCompParam);
    Timer_A_startCounter(TIMER_A1_BASE,TIMER_A_CONTINUOUS_MODE);

    //tempo = 1;
    led1 = 0;
    led2 = 1;
    led3 = 2;
    led1 = 3;

	//Enter LPM0, enable interrupts
	__bis_SR_register(LPM0_bits + GIE);

/*
    while(1)
    {
    	ControlePlano1(led1);
    	//delay(1000);
    	ControlePlano2(led2);
    	//delay(1000);
    	ControlePlano3(led3);
    	//delay(1000);
    	ControlePlano4(led4);
    	//delay(1000);
    	led1++;
    	if(led1>15) led1 = 0;
    	led2++;
    	if(led2>15) led2 = 0;
    	led3++;
    	if(led1>15) led3 = 0;
    	led4++;
    	if(led4>15) led4 = 0;
    }
*/
}
//===========================================================================
//
//
//
//===========================================================================
void delay(unsigned long int i)
{
	unsigned long int t = 0;
	for(t=0;t<=i;t++)
	{
		__delay_cycles(1);
	}
}
//===========================================================================
//
//
//
//===========================================================================
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMER1_A0_VECTOR
__interrupt
#elif defined(__GNUC__)
__attribute__((interrupt(TIMER1_A0_VECTOR)))
#endif
void TIMER1_A0_ISR(void)
{
    uint16_t compVal = Timer_A_getCaptureCompareCount
    		           (TIMER_A1_BASE,
                       TIMER_A_CAPTURECOMPARE_REGISTER_0)
                       + COMPARE_VALUE;

    //Toggle P1.0
    GPIO_toggleOutputOnPin(GPIO_PORT_P1,GPIO_PIN0);

    //Add Offset to CCR0
    Timer_A_setCompareValue(TIMER_A1_BASE,TIMER_A_CAPTURECOMPARE_REGISTER_0,compVal);

    Contador_Tick++;

    /*
     * Aplicação
     */
    switch(EstadoPlano2)
    {
    case 0:
    	ControleCubo1();
    	Ticks_Plano1++;
    	if(Ticks_Plano1 > 1000)
    	{
    		Ticks_Plano1 = 0;
    		EstadoPlano2 = 1;
    	}
    break;
    case 1:
    	ControleCubo2();
    	Ticks_Plano1++;
    	if(Ticks_Plano1 > 1000)
    	{
    		Ticks_Plano1 = 0;
    		EstadoPlano2 = 2;
    	}
    break;
    case 2:
    	ControleCubo3();
    	Ticks_Plano1++;
    	if(Ticks_Plano1 > 1000)
    	{
    		Ticks_Plano1 = 0;
    		EstadoPlano2 = 0;
    	}
    break;
    }

    /*
    switch(estado)
    {
    	case 0:
			//switch(EstadoPlano1)
			//{
			//	case 0:
			//		Ticks_Plano1 = Check_Tick_Timer(10000);
			//		EstadoPlano1 = 1;
					ControlePlano1(vetor[i]);
			//	break;
			//	case 1:
			//		if(Check_Tick_Timer(Ticks_Plano1))
			//		{
			//			EstadoPlano1 = 0;
						//ControlePlano1(led1);
						//led1++;
						//if(led1>15) led1 = 0;
			//		}
			//	break;
			//}
			x++;
			if(x>20)
			{
				x = 0;
				i++;
				if(i>15)
				{
					i = 0;
					//estado = 1;
				}
			}
			estado = 1;
		break;
		case 1:
			//switch(EstadoPlano2)
			//{
			//	case 0:
			//		Ticks_Plano2 = Check_Tick_Timer(10000);
			//		EstadoPlano2 = 1;
					ControlePlano2(vetor[ii]);
			//	break;
			//	case 1:
			//		if(Check_Tick_Timer(Ticks_Plano2))
			//		{
			//			EstadoPlano2 = 0;
			//			//led2++;
			//			//if(led2>15) led2 = 0;
			//			//ControlePlano2(led2);
			//		}
			//	break;
			//}
			xx++;
			if(xx>20)
			{
				xx=0;
				ii++;
				if(ii>15)
				{
					ii = 0;
					//estado = 2;
				}
			}
			estado = 2;
		break;
		case 2:
			//switch(EstadoPlano3)
			//{
			//	case 0:
			//		Ticks_Plano3 = Check_Tick_Timer(10000);
			//		EstadoPlano3 = 1;
					ControlePlano3(vetor[iii]);
			//	break;
			//	case 1:
			//		if(Check_Tick_Timer(Ticks_Plano3))
			//		{
			//			EstadoPlano3 = 0;
			//			//led3++;
			//			//if(led3>15) led3 = 0;
						//ControlePlano3(led3);
			//		}
			//	break;
			//}

			xxx++;
			if(xxx>20)
			{
				xxx = 0;
				iii++;
				if(iii>15)
				{
					iii = 0;
					//estado = 3;
				}
			}
			estado = 3;
		break;
		case 3:
			//switch(EstadoPlano4)
			//{
			//	case 0:
			//		Ticks_Plano4 = Check_Tick_Timer(10000);
			//		EstadoPlano4 = 1;
					ControlePlano4(vetor[iiii]);
			//	break;
			//	case 1:
			//		if(Check_Tick_Timer(Ticks_Plano4))
			//		{
			//			EstadoPlano4 = 0;
						//led4++;
						//if(led4>15) led4 = 0;
						//ControlePlano4(led4);
			//		}
			//	break;
			//}
			xxxx++;
			if(xxxx>20)
			{
				xxxx = 0;
				iiii++;
				if(iiii>15)
				{
					iiii = 0;
					//estado = 0;
				}
			}
			estado = 0;
		break;
    }
    */
    //Ticks_Plano3 = Check_Tick_Timer(200000000);
    //if(Check_Tick_Timer(Ticks_Plano3))
    /*
    if(Contador_Tick > 10)
    {
    	Contador_Tick = 0;
    	led1++;
		if(led1>15) led1 = 0;
		led2++;
		if(led2>15) led2 = 0;
		led3++;
		if(led3>15) led3 = 0;
		led4++;
		if(led4>15) led4 = 0;
    }
    */
}
//===========================================================================
//
//
//
//===========================================================================
boolean Check_Tick_Timer(uint32_t ticks)
{
    boolean flag = FALSE;
    if(Contador_Tick >= ticks)
    {
         flag = TRUE;
    }
    return flag;
}
//===========================================================================
//
//
//
//===========================================================================
uint32_t Calcula_Tick(uint32_t ticks)
{
    return (Contador_Tick + ticks);
}
//===========================================================================
//
//
//
//===========================================================================
void ControleCubo1(void)
{
	static uint8_t vetor[18]={4,15,1,10,11,9,12,14,5,2,13,3,7,8,0,6,7};
	static uint8_t estado = 0;
	static uint8_t i = 0;
	static uint8_t ii = 0;
	static uint8_t iii = 0;
	static uint8_t iiii = 0;
	static uint8_t x = 0;
	static uint8_t xx = 0;
	static uint8_t xxx = 0;
	static uint8_t xxxx = 0;
	switch(estado)
	{
		case 0:
			ControlePlano1(vetor[i]);
			x++;
			if(x>10)
			{
				x = 0;
				i++;
				if(i>16)
				{
					i = 0;
				}
			}
			estado = 1;
		break;
		case 1:
			ControlePlano2(vetor[ii]);
			xx++;
			if(xx>10)
			{
				xx=0;
				ii++;
				if(ii>16)
				{
					ii = 0;
				}
			}
			estado = 2;
		break;
		case 2:
			ControlePlano3(vetor[iii]);
			xxx++;
			if(xxx>10)
			{
				xxx = 0;
				iii++;
				if(iii>16)
				{
					iii = 0;
					//estado = 3;
				}
			}
			estado = 3;
		break;
		case 3:
			ControlePlano4(vetor[iiii]);
			xxxx++;
			if(xxxx>10)
			{
				xxxx = 0;
				iiii++;
				if(iiii>16)
				{
					iiii = 0;
					//estado = 0;
				}
			}
			estado = 0;
		break;
	}
}
//===========================================================================
//
//
//
//===========================================================================
void ControleCubo2(void)
{
	//static uint8_t vetor[17]={4,15,1,10,11,9,12,14,5,2,13,3,7,8,0,6};
	static uint8_t estado = 0;
	static uint8_t i = 0;
	static uint8_t ii = 0;
	static uint8_t iii = 0;
	static uint8_t iiii = 0;/*
	static uint8_t x = 0;
	static uint8_t xx = 0;
	static uint8_t xxx = 0;
	static uint8_t xxxx = 0;*/
	switch(estado)
	{
		case 0:
			ControlePlano1(i);
			i++;
			if(i>15)
			{
				i = 0;
			}
			estado = 1;
		break;
		case 1:
			ControlePlano2(ii);
			ii++;
			if(ii>15)
			{
				ii = 0;
			}
			estado = 2;
		break;
		case 2:
			ControlePlano3(iii);
			iii++;
			if(iii>15)
			{
				iii = 0;
			}
			estado = 3;
		break;
		case 3:
			ControlePlano4(iiii);

			iiii++;
			if(iiii>15)
			{
				iiii = 0;
			}
			estado = 0;
		break;
	}
}
//===========================================================================
//
//
//
//===========================================================================
void ControleCubo3(void)
{
	//static uint8_t vetor[17]={4,15,1,10,11,9,12,14,5,2,13,3,7,8,0,6};
	static uint8_t vetor4[12]={4,15,1,10,11,9,12,14,5,2,13,3};
	static uint8_t vetor3[12]={7,7,8,8,8,0,0,0,6,6,6,7};
	static uint8_t vetor2[12]={0,0,6,6,6,7,7,7,8,8,8,0};
	static uint8_t vetor1[12]={12,14,5,2,13,3,4,15,1,10,11,9};
	static uint8_t estado = 0;
	static uint8_t i = 0;
	static uint8_t ii = 0;
	static uint8_t iii = 0;
	static uint8_t iiii = 0;
	static uint8_t x = 0;
	static uint8_t xx = 0;
	static uint8_t xxx = 0;
	static uint8_t xxxx = 0;

	switch(estado)
	{
		case 0:
			ControlePlano2(vetor4[i]);
			x++;
			if(x>10)
			{
				x = 0;
				i++;
				if(i>11)
				{
					i = 0;
				}
			}
			estado = 1;
		break;
		case 1:
			ControlePlano1(vetor3[ii]);
			xx++;
			if(xx>10)
			{
				xx=0;
				ii++;
				if(ii>11)
				{
					ii = 0;
				}
			}
			estado = 2;
		break;
		case 2:
			ControlePlano4(vetor2[iii]);
			xxx++;
			if(xxx>10)
			{
				xxx = 0;
				iii++;
				if(iii>11)
				{
					iii = 0;
					//estado = 3;
				}
			}
			estado = 3;
		break;
		case 3:
			ControlePlano3(vetor1[iiii]);
			xxxx++;
			if(xxxx>10)
			{
				xxxx = 0;
				iiii++;
				if(iiii>11)
				{
					iiii = 0;
					//estado = 0;
				}
			}
			estado = 0;
		break;
	}
}
//===========================================================================
