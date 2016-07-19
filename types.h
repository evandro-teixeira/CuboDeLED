/*
 * types.h
 *
 *  Created on: 16/07/2016
 *      Author: Evandro
 */

#ifndef TYPES_H_
#define TYPES_H_


/******************************************************************************/
/* Standard ANSI C types */
/******************************************************************************/
#ifndef int8_t
typedef signed char int8_t;
#endif
//#ifndef int16_t
//typedef signed short int int16_t;
//#endif
#ifndef int32_t
typedef signed long int int32_t;
#endif
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned int uint16_t;
#endif
#ifndef uint32_t
typedef unsigned long int uint32_t;
#endif
#ifndef boolean
typedef unsigned char   boolean;
#endif
/******************************************************************************/
/* Definições padrão */
/******************************************************************************/
#ifndef FALSE
#define FALSE   ((boolean) 0)
#endif
#ifndef TRUE
#define TRUE    ((boolean) 1)
#endif
#ifndef NULL
#define NULL    (void *) 0
#endif
/******************************************************************************/
//
/******************************************************************************/


#endif /* TYPES_H_ */
