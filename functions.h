#pragma once

//#ifndef _INCL_GUARD
//#define _INCL_GUARD
//#endif

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> 
#include <stdlib.h> 
#include <time.h>
#include <string.h>		//	puts	?

// do this to the week 
//at a least month
//

//problem to watch for event starts in one day ends in next.		example sleep
//sechdual name

typedef struct logic_level
{
	int event_num;
	char name[50];// name of event
	int t_total_Time_End_time[3];//time total	start time,	 end time,			1440	 in minutes for a 24 hour time period
	int priority;
	char d_script[100];
	int occur[7];// what is  day a week
	int weekly_or_once;

} Logic_Level_Event;


typedef struct display_level
{
	char name[50];// name of event

	int t_total_Time_End_time[3];//time total	start time,	 end time,				// am pm 24

	int military_vs_standard;
	int am_vs_pm;
	char time_zone;//both int and char?

	int priority;
	


} Display_level;


/*typedef struct events
{
	Logic_Level_Event catalog[100];
}Events;*/									//list all the events the put them in a schedual



//functions start


void display_menu();

int enter_stuff();






//these last 3

int enter_event(void);
int am_to_pm(int num_hours, char am_pm[]);
void T_totaL_calculate(int T_total_Time_End_time[]);






