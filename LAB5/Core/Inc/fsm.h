/*
 * fsm.h
 *
 *  Created on: Nov 28, 2024
 *      Author: Admin
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include <stdint.h>
#include <string.h>
#include "main.h"

#define INIT 0
#define READING 1
#define STOP 2

#define RST 10
#define OK 11

#define MAX_BUFFER_SIZE  30
#define MAX_CMD_SIZE 5

#define TIMER_FSM 		1

extern uint8_t buffer_byte;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void fsm_uart_callback(void);
void command_parser_fsm(ADC_HandleTypeDef* hadc1, UART_HandleTypeDef* huart2);
void uart_communication_fsm(ADC_HandleTypeDef* hadc1, UART_HandleTypeDef* huart2);

#endif /* INC_FSM_H_ */
