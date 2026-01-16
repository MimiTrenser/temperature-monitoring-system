//*********************** Temperature Monitoring System ***********************
//  Copyright (c) 2026 Trenser Technology Solutions (P) Ltd 
//  All Rights Reserved 
//****************************************************************************** 
// 
// File    : main.c 
// Summary : Main.c file reading temperature and displaying it.
// Note    : None
// Author  : Mimi C.S
// Date    : 15/01/2026
// 
//******************************************************************************

//***************************** Include Files ********************************** 
#include "temperature_sensor.h"

#define MINIMUM_THRESHOLD    (-10)
#define MAXIMUM_THRESHOLD    (70)
#define INTERVAL_TIME        (1)

//***************************** Local Types ************************************ 
 
//***************************** Local Constants ******************************** 
 
//***************************** Local Variables ******************************** 
 
//***************************** Local Functions ********************************

//***************************** display **************************************** 
//Purpose : Dispalys temperature values.If temperature values are beyond 
//          lower/upper threshold log alert.
//Inputs  : Simulated Temperature values from rand()
//Notes   : None 
//******************************************************************************
void display(int8_t cTemperature)
{
     printf("Temperature value: %d\n", cTemperature);

     if((cTemperature < MINIMUM_THRESHOLD))
     {
        printf("Temperature violated lower threshold\n");
     }
     else if(cTemperature > MAXIMUM_THRESHOLD)
     {
        printf("Temperature violated upper threshold\n");
     }
     else
     {
        /* Nothing to do */
     }

}

//****************************** main ****************************************** 
//Purpose : Read temperature values and displays them.
//Notes   : temperature are simulated via rand();
//******************************************************************************
int main()
{
    int8_t cTemperature = 0;
    srand((unsigned int)time(NULL));

    while(1)
    {
        cTemperature = getTemperature();
        display(cTemperature);
        sleep(INTERVAL_TIME);
    }
    
    return 0;
}

