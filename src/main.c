//****************************Temperature Monitoring System ************************************** 
//  Copyright (c) 2026 Trenser 
//  All Rights Reserved 
//************************************************************************************************ 
// 
// File    : main.c 
// Summary : Main.c file reading temperature and displaying it.
// Note    : 
// Author  : Mimi C.S
// Date    : 15/01/2026
// 
//*************************************************************************************************
//******************************* Include Files *************************************************** 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdint.h>
#include "../include/temperature_sensor.h"


#define MINIMUM_THRESHOLD -10
#define MAXIMUM_THRESHOLD 70
#define INTERVAL_TIME 1

//******************************.get_temperature.****************************************** 
//Purpose : Generates a simulated Temperature reading and validates it against bounds.
//Inputs  : pReadStatus - Pointer to a boolean to store the success/failure status.
//Return  : The generated temperature value (-20 to 120).
//Notes   : Simulated via rand(); depends on TemperatureLowerBound and TemperatureUpperBound 
//******************************************************************************************
void display(int cTemperature)
{
     printf("Temperature value: %d\n",cTemperature);
     if((cTemperature < MINIMUM_THRESHOLD))
     {
        printf("Temperature violated lower threshold\n");
     }
     else if(cTemperature > MAXIMUM_THRESHOLD)
     {
        printf("Temperature violated upper threshold\n");
     }
}

int main()
{
    srand((unsigned int)time(NULL));
    int8_t cTemperature = 0;
    while(1)
    {
        cTemperature = getTemperature();
        display(cTemperature);
        sleep(INTERVAL_TIME);
    }
    return 0;
}

