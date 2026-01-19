//************************ Temparature Monitoring System ***********************
// Copyright (c) 2026 Trenser Technology Solutions (P) Ltd
// All Rights Reserved
//******************************************************************************
//
// File     : temperature_sensor.c
// Summary  : Generate simulation values for Temperature sensor
// Note     : None
// Author   : Mimi C.S
// Date     : 15/01/2026
//
//******************************************************************************

//***************************** Include Files **********************************
#include "temperature_sensor.h"

//***************************** Local Types ************************************

//***************************** Local Constants ********************************
#define TEMPERATURE_LOWERBOUND   (-20)
#define TEMPERATURE_UPPERBOUND   (100)
#define RAND_RANGE               (141)

//***************************** Local Variables ********************************

//***************************** Local Functions ********************************

//***************************** getTemperature *********************************
//Purpose   : Generates a simulated Temperature reading and validates it against
//            bounds.
//Inputs    : None
//Outputs   : Generate Temperature simulated values
//Return    : The generated temperature value (-20 to 120).
//Notes     : Simulated via rand(); depends on TemperatureLowerBound and
//            TemperatureUpperBound
//******************************************************************************
int8_t getTemperature(void)
{
    int8_t cTemperature = 0;

    cTemperature = (TEMPERATURE_LOWERBOUND + rand() % RAND_RANGE);

    return cTemperature;
}