#include "typeDay.h"
#include<cctype>
#include <cstdlib>
#include<conio.h>

//set the current day function

void typeDay::setday1()
{
                 string day,DAY;
                 int len,thisDay;
                 cout<<"What day is today?"<<endl;
                 cin>>day;
                 len=day.length();
                 cout<<endl;
                 for(int i =0;i<=2;i++)
                        {
                            day[i]=toupper(day[i]);
                            DAY=DAY+day[i];
                           
                        }
                 
                 if(DAY=="SUN")
                               typeDay::today=1;
                 else if(DAY=="MON")
                      typeDay::today=2;
                 else if(DAY=="TUE")
                      typeDay::today=3;
                 else if(DAY=="WED")
                      typeDay::today=4;
                 else if(DAY=="THU")
                      typeDay::today=5;
                 else if(DAY=="FRI")
                      typeDay::today=6;
                 else if(DAY=="SAT")
                      typeDay::today=7;
                 else
                     {cout<<"Invalid data. Goodbye. \nPress any key to continue.";
                     _getch();
                     exit(0);}
                     
                 thisDay = typeDay::today;
                 typeDay::changeday(thisDay);
                     
}//end of func

void typeDay::changeday(int x)
{
     int change,date,answer;
     date = x;
     if(date == 7)
          date = 0;
     else if(date < 0)
          date = date + 7;
     else if(date > 7)
         date=(date+7)%7;
     else
         date=date;
     
     cout<<"\nPlease make a selection:\n1) View the current day.\n2) View the previous day.\n3) View the next day.\n4) View a day by adding a certain number of days.\nAny other number will Exit.\n\n"<<endl;
     cin>>answer;
     if (answer==1)
            change=date;
     else if(answer==2)
          change=date-1;
     else if(answer==3)
          change=date+1;
     else if(answer==4)
     {
          cout<<"\n\nHow many days would you like to change the day by?\n\n";
          cin>>change;
          if(change<-6)
                  change=change%7;
          if(date+change>7)
                  change=(date+change)%7;
          else
              change=date+change;
              }//end choice 4
     else
          {cout<<"Goodbye.\nPress any key to continue.";
          _getch();
          exit(0);}
     typeDay::Newday=change;
     typeDay::printday(change);
}//end of func

void typeDay::printday(int y)
{
     
     cout<<"\n\nThe day is now ";
     
     daySwitch(y);
     typeDay::changeday(y);
     
}//end of func

void typeDay::daySwitch(int num)
{
     int day;
     switch(num)
     {
                  case 1:
                       cout<<"Sunday";
                       day = 1;
                       break;
                  case 2:
                       cout<<"Monday";
                       day = 2;
                       break;
                  case 3:
                       cout<<"Tuesday";
                       day = 3;
                       break;
                  case 4:
                       cout<<"Wednesday";
                       day = 4;
                       break;
                  case 5:
                       cout<<"Thursday";
                       day = 5;
                       break;
                  case 6:
                       cout<<"Friday";
                       day = 6;
                       break;
                  case 7:
                       cout<<"Saturday";
                       day = 7;
                       break;
                  case -6:
                       cout<<"Sunday";
                       day = 1;
                       break;
                  case -5:
                       cout<<"Monday";
                       day = 2;
                       break;
                  case -4:
                       cout<<"Tuesday";
                       day = 3;
                       break;
                  case -3:
                       cout<<"Wednesday";
                       day = 4;
                       break;
                  case -2:
                       cout<<"Thursday";
                       day = 5;
                       break;
                  case -1:
                       cout<<"Friday";
                       day = 6;
                       break;
                  case 0:
                       cout<<"Saturday";
                       day = 7;
                       break;
     }//end switch
     typeDay::today = day;
     
}//end func





