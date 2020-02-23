#include "functions.h"



void initialize_array()
{

    int i = 0;
    int Catalog[100] = 0;
    int day[1440] = 0;
    //Logic_Level_Event day[1440];

    //

   //  Events person = (Events*)malloc(sizeof(Events));

   
    for (; i < 100; i++)
    {
        Logic_Level_Event* ptr = (Logic_Level_Event*)malloc(sizeof(Logic_Level_Event));
       // Logic_Level_Event->na

        Catalog[i] = ptr;
        //100 pointers
        ptr->d_script[0] = 'cars';

        strncpy(ptr->d_script[0], "cars", 4);

        ptr->t_total_Time_End_time[0]= 34;
        ptr->event_num = 5;

        if (ptr == 0)
        {
            printf("ERROR: Out of memory\n");
            return 1;
        }
    }

    for (i = 0; i < 1440; i++)
    {
        for(int i2 =0; i2 < 100; i2++)
        {
            if (Catalog[i2]->)
                day[i] =
        }

    }


    for (i = 0; i < 100; i++)
    {
        free(Catalog[i]);
    }

    return 0;
}



 //   free(Logic_Level_Event);

    //person.catalog[i].name = 



  //  person.catalog[i].name =
    //for (int i = 0; i < 100;i++)
    //{
    //    person.catalog[i].name[0] = '\0';
    //    person.catalog[i].t_total_Time_End_time[0] = 0;
    //    person.catalog[i].priority = 0;
    //    person.catalog[i].d_script[0] = 0;
    //    person.catalog[i].occur[0] = 0;
    //    person.catalog[i].weekly_or_once = 0;
    //}
   //int year[12][31]; { {day[0]; } };
   //
   //year[0][0](day[0].event_num);






//for (int i = 0; i < 100; i++)
//{
//
//    for (int i2 = 0; i2 < 50; i2++)
//    {
//        size = person.catalog[i].name[i2] = '\0';
//    }
//    for (int i3 = 0; i3 < 100; i3++)
//    {
//        person.catalog[i].t_total_Time_End_time[i3] = 0;
//    }
//
//    person.catalog[i].priority = 0;
//
//    for (int i4 = 0; i4 < 100; i4++)
//    {
//        person.catalog[i].d_script[i4] = 0;
//    }
//    for (int i5 = 0; i5 < 7; i5++)
//    {
//        person.catalog[i].occur[i5] = 0;
//    }
//    person.catalog[i].weekly_or_once = 0;
//}
























void display_menu()
{

    int option = 0;
  


    //Mandatory
    do   
    {
        printf("1. Enter the information for a mandaratory time period(class, Sleep, Food).\n");
	    printf("2. Enter the information for a work time period(Homework). \n");
        printf("3. Enter the information for a free time period(Clubs/Activities).\n");
	    printf("4. Exit\n");
	    scanf("%d", &option);

	

    } while (option != 0);


    //printf("Press Enter to play the game");
    //while (enter != '\r' && enter != '\n') { enter = getchar(); }

        system("cls");

        return;
}






int enter_stuff()
{
    int apple = 0;
    int military_standard=0;

    printf("do you want to use a 24 hour system? press type 1 for yes.\nOr enter 0 for or a 12 hour based system");
    scanf("%d", &military_standard);//effects whole program

    
    //5:00
    //500
   // 14:00


    return(apple);
}

//everything is upppercase check

//function takes ind time and makes it standard     add after time to it?      gets the logic amount of time
int enter_event()//put struct here        24 is 0 12 is 1             //ends up checking if valid input
{
    int stand24_12;
    int i = 0;
    int minutes_start = 0;
    int temp = 0;
    int enter = 0;
    int check3 = 0;
    int check4 = 0;
    int days = 0;

    int length = 0;
    int hold = 0;
    int num_of_num = 0;
    int num_of_let = 0;
    int num_hours = 0;
    int num_minutes = 0;

    char minutes[5] = "";
    char hours[5] = "";
    char am_pm[2] = "";

    char name[50] = "";
    char time_start[10] = "";

    int logic_time = 0;

    //may make each one of these a function

    printf("enter 1 for 12 hour and 0 for 24 hour, %d", days);
    scanf("%d", &stand24_12);

   

    printf("Enter name of event\n");
    scanf("%s", &name[0]);

    printf("Event called:  %s\n", name);

   
    printf("When does this event start?\n");
    while (getchar() != '\n');

    scanf("%[^\n]%*c", time_start);


    puts(time_start);

    //sizeof();
    length = strnlen(time_start, 10);


    printf("\n\n%d\n\n", length);

    for (i = 0; i < 10; i++)
    {
        if (time_start[i] >= '0' && time_start[i] <= '9')        num_of_num++;    //finds num of numbers in string
        if (time_start[i] >= 'A' && time_start[i] <= 'p')        num_of_let++;   //finds num of letters in string        fix?
        if (num_of_num == 2) minutes_start = i;

        if (num_of_num == 3 && check3 == 0)
        {
            minutes_start = i;
            check3 = 1;
        }
        if (num_of_num == 4 && check4 == 0)
        {
            minutes_start = i;
            check4 = 1;
        }
    }

    if (minutes_start != 0)
    {
        strncpy(&minutes, &time_start[minutes_start-1], 2);       //gets 
      //  puts(time_start);

        printf("\n");
        puts(minutes);
        puts(time_start);

     //   temp = (minutes[0] - '0');           // min 10 05 55  00

        num_minutes = (minutes[0] - '0') * 10 + (minutes[1] - '0');
    }
    else printf("No numbers for minutes entered on the hour is assumed");


    if (num_of_num == 0);
    else if (num_of_num == 1 || num_of_num == 3) 
    {
        strncpy(&hours, &time_start, 1);
     
        num_hours = (hours[0] - '0');
    }                                                                  // has  one number
    else if (num_of_num == 2 || num_of_num == 4) 
    {
        strncpy(&hours, &time_start, 2);
        
        num_hours = ((hours[1] - '0')+10* (hours[0] - '0')); // by num_hours is there input
    }                                                                 // has 2 digits in hours
    else printf("problem on hours");

    //0 through 24
    

    puts(hours);

    if (stand24_12 == 0)// this is 0 24
    {

    }
    else if (stand24_12 == 1)// this is 12/12
    {            
         if (num_of_let > 0)             //  no letters entered part
         {
             strncpy(&am_pm, &time_start[length - num_of_let], 1);
             num_hours = am_to_pm(num_hours, am_pm);
         }
         else
         {
             printf("Since am/pm wasn't specified a automatic desiction has been made\n");
             printf("(auto_logic(12, 1-5 is pm, 6-11 is am)\n");
             printf("This can be changed later\n");

             printf("Press Enter to continue,\n(you may need to press twice)\n ");
             while (enter != '\r' && enter != '\n') { enter = getchar(); }

             num_hours = am_to_pm(num_hours, am_pm);              
         }     
    }
    else printf("no clue if 24 hour or 12 hour");

    // right here hours ard in 0-24 form

    logic_time = num_hours * 60 + num_minutes;



    printf("");
   // scanf("", &);


    printf("");
   // scanf("", &);




    int days = 0;
    int epoch1970_2020 = 1577865600;

    printf("%d", epoch1970_2020);
  

    time_t seconds;
    time(&seconds);

    days = (seconds - epoch1970_2020) / (360 * 24);			//update yearly using epoch

    printf("number of days since newyears %d", days);

    days= days - 31;

    printf("num of days so far in feb %d", days);










    return(logic_time);//struct
}


int end_time()
{

}





//changes 12 hour to 24 hour system
int am_to_pm(int num_hours, char am_pm[])//converts 12 hours to 0-24 hours
{
    if (am_pm[0] >= 'A' && am_pm[0] <= 'p')
    {
        if (am_pm[0] == 'A' || am_pm[0] == 'a');
        else num_hours += 12;
    }
    else
    {
        if (num_hours <= 5 || num_hours == 12)  //pm   //12, 1 - 5 is pm, 6 - 11 is am
        {
            num_hours += 12;
        }
        else if (num_hours >= 6 && num_hours != 12); //am
        else printf("problem");
    }
    return(num_hours);
}


// for logic level
void T_totaL_calculate(int T_total_Time_End_time[])
{
    int temp = 0;

    temp = T_total_Time_End_time[2] - T_total_Time_End_time[1];

    if (temp < 0)   printf("start time is after end time");

    T_total_Time_End_time[0] = temp;
    return;
}
