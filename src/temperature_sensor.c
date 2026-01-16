//**************************** Temparature Monitoring System ************************************** 
//  Copyright (c) 2026 Trenser 
//  All Rights Reserved 
//************************************************************************************************* 
// 
// File    : temperature_sensor.c
// Summary : Generate simulation values for Temperature sensor
// Note    : 
// Author  : Mimi C.S
// Date    : 15/01/2026
// 
//*************************************************************************************************
//******************************* Include Files *************************************************** 
#include <stdlib.h>
#include <stdint.h>
#include "../include/temperature_sensor.h"

#define TEMPERATURE_LOWERBOUND -20
#define TEMPERATURE_UPPERBOUND 100

//******************************.get_temperature.****************************************** 
//Purpose : Generates a simulated Temperature reading and validates it against bounds.
//Inputs  : pReadStatus - Pointer to a boolean to store the success/failure status.
//Return  : The generated temperature value (-20 to 120).
//Notes   : Simulated via rand(); depends on TemperatureLowerBound and TemperatureUpperBound 
//****************************************************************************************** 
int8_t get_temperature()
{
    int8_t cTemperature = 0;
    cTemperature = (TEMPERATURE_LOWERBOUND + rand() % 141); /* Genereate random values from 0 to 120 */
    return cTemperature;
}