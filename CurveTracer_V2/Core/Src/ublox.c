/*
 * ublox.c
 *
 *  Created on: Nov 8, 2020
 *      Author: IanRe
 */
#include "main.h"
#include "ublox.h"
#include <stdio.h>
#include <string.h>

int state = 0;
char receive[1];
extern UART_HandleTypeDef huart2;

void ublox_setup(void){


	switch(state)
	{
	case 0:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)verbose_error_code,sizeof(verbose_error_code));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
		//	case 1:
		//		HAL_UART_Transmit_IT(&huart2,(uint8_t *)sim_pin_status,sizeof(sim_pin_status));
		//		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));

	case 1:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)GPRS_attached_stat,sizeof(GPRS_attached_stat));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 2:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)GPRS_attached_stat,sizeof(GPRS_attached_stat));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 3:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)GPRS_APN,sizeof(GPRS_APN));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 4:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)dynamic_ip,sizeof(dynamic_ip));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 5:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)Activate_GPRS,sizeof(Activate_GPRS));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 6:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)C_IP,sizeof(C_IP));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 7:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)socket_create,sizeof(socket_create));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 8:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)DNS,sizeof(DNS));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 9:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)connect,sizeof(connect));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 10:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)greeting,sizeof(greeting));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 11:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)write,sizeof(write));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	case 12:
		HAL_UART_Transmit_IT(&huart2,(uint8_t *)read,sizeof(read));
		HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));
	default:
		printf("bla");

	}






	//	HAL_UART_Transmit(&huart2,(uint8_t *)airplane_mode,sizeof(airplane_mode),0xFFFF);
	//	HAL_UART_Receive(&huart2,(uint8_t *)receive,sizeof(receive),0X00FF);
	//
	//	HAL_UART_Transmit(&huart2,(uint8_t *)LTE_preferred,sizeof(LTE_preferred),0xFFFF);
	//	HAL_UART_Receive(&huart2,( uint8_t *)receive,sizeof(receive),0X00FF);

	//	HAL_UART_Transmit(&huart2,(uint8_t *)stat,sizeof(stat),0xFFFF);
	//	HAL_UART_Receive(&huart2,(uint8_t *)receive,sizeof(receive),0X00FF);
	//
	//	HAL_UART_Transmit(&huart2,(uint8_t *)full_functionality,sizeof(full_functionality),0xFFFF);
	//	HAL_UART_Receive(&huart2,(uint8_t *)receive,sizeof(receive),0X00FF);
	//

	//	HAL_Delay(10000);
	//
	//	HAL_UART_Transmit(&huart2,(uint8_t *)sim_pin,sizeof(sim_pin),0xFFFF);
	//	HAL_UART_Receive(&huart2,(uint8_t *)receive,sizeof(receive),0X00FF);
	//
	//
	//		HAL_UART_Transmit(&huart2,(uint8_t *)auto_reg,sizeof(auto_reg),0xFFFF);
	//		HAL_UART_Receive(&huart2,(uint8_t *)receive,sizeof(receive),0X00FF);

	//	HAL_UART_Transmit(&huart2,(uint8_t *)check_network_registration,sizeof(check_network_registration),0xFFFF);
	//	HAL_UART_Receive_IT(&huart2,(uint8_t *)receive,sizeof(receive));

}
