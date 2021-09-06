/*
 *
 * AT91SAM3X8E ARM Cotex M3 PWM Driver
 *
 * Author: Saranyan
 *
 * Version: V1.0
 *
 */

#ifndef AT91SAM3X8E_PWM_DRIVER_H
#define AT91SAM3X8E_PWM_DRIVER_H

/*
 * DEFINES
 */

/*
 * REGISTERS
 */

/*
 * PWM STRUCT
 */

typedef struct {

	/* Variables */
} PWM;

/*
 * INITIALISATION
 */
uint8_t PWM_Peripheral_Initialise();

/*
 * SET PWM FREQUENCY and DUTY CYCLE
 */
uint8_t PWM_Frequency();
uint8_t PWM_Duty_Cycle();

/*
 * LOW LEVEL FUNCTIONS
 */







