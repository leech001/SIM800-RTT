/*
* Sim800_RTT.h
        *
        *  Created on: Jul 14, 2020
*      Author: Bulanov Konstantin
*
*  Contact information
*  -------------------
*
* e-mail   :  leech001@gmail.com
*
*
*/

#ifndef MBF401_SIM800_RTT_H
#define MBF401_SIM800_RTT_H

#include <main.h>

// === CONFIG ===
#define UART_SIM800 &huart1
#define FREERTOS    1
#define CMD_DELAY   1500
// ==============

void Sim800_RxCallBack(void);

int SIM800_SendCommand(char *command, char *reply, uint16_t delay);

int SIM800_Init(void);

int RTT_SendData(char *proto, char *imei, float lat, float lon, uint8_t speed, uint8_t alt, uint16_t azimuth,
                 uint8_t charge, char *date, char *time, int UTC, uint8_t sat_count, uint8_t gsm_rate, char gps_type,
                 uint8_t sos);

int RTT_Connect(char *apn, char *apn_user, char *apn_pass, char *host, uint16_t port);

#endif //MBF401_SIM800_RTT_H

