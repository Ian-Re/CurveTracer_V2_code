/*
 * ublox.h
 *
 *  Created on: Nov 8, 2020
 *      Author: IanRe
 */

#ifndef INC_UBLOX_H_
#define INC_UBLOX_H_

#include "stm32f7xx_hal.h"

void ublox_setup(void);
#define check_network "AT+URAT?\r\n"
#define verbose_error_code "AT+CMEE=2\r\n"
#define LTE_preferred "AT+URAT=4,3\r\n"
#define airplane_mode "AT+CFUN=4\r\n"
#define full_functionality "AT+CFUN=1\r\n"
#define reset "AT+CFUN=16\r\n"
#define shutdown "AT+CPWROFF\r\n"
#define sim_pin_status "AT+CPIN?\r\n"
#define sim_pin "AT+CPIN=0000\r\n"
#define auto_reg "AT+COPS=0\r\n"
#define stat "AT+URAT?\r\n"
#define check_network_registration "AT+COPS?\r\n"
#define gprs_status "AT+CGATT?\r\n"
#define deregister "AT+COPS=2\r\n"
//External PDP context activation
//#define PDP_context "AT+CGDCONT=1,\"IP\",\"lte.vodacom.za\"\r\n"
//#define QOS_profile "AT+CGEQREQ=1,3,64,64,,,0,320,\"1E4\",\"1E5\",1,,3\r\n"
//#define PDP_context_activation "AT+CGACT=1,1\r\n"
//#define show_IP "AT+CGPADDR=1\r\n"
#define socket_create "AT+USOCR=6\r\n"
#define DNS "AT+UDNSRN=0,\"echo.u-blox.com\"\r\n"
#define connect "AT+USOCO=0,\"195.34.89.241\",7\r\n"
#define greeting "AT+USORD=0,32\r\n"
#define write "AT+USOWR=0,12,\"TESTTESTTEST\"\r\n"
#define read "AT+USORD=0,4\r\n"

//Internal PDP context activation
#define GPRS_attached_stat "AT+CGATT?\r\n"
#define GPRS_connection_stat "AT+UPSND=0,8\r\n"
#define GPRS_APN "AT+UPSD=0,1,\"lte.vodacom.za\"\r\n"
#define dynamic_ip "AT+UPSD=0,7,\"0.0.0.0\"\r\n"
#define	Activate_GPRS "AT+UPSDA=0,3\r\n"
#define C_IP "AT+UPSND=0,0\r\n"

#endif /* INC_UBLOX_H_ */
