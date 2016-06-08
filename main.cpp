#include "Church.h"
#include "Weekly_money.h"
#include "Bills_randoms.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <unistd.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int people_arrived;
    int year = 2016;

    Church chrum;
    Weekly_money week;
    Bills_randoms debet;

    chrum.stat_random();
    chrum.parameters();
    chrum.city_descriptor();


    cout<<"Początkowa pula pieniędzy w twoim kościele wynosi " <<chrum.base_money<<" zł.\nTwój kościół znajduje się w "<<chrum.city_description<<", ma "<<chrum.fame_description<<" reputację.\nW kościele znajduje się "
    <<chrum.seat_places<<" miejsc siedzących oraz "<<chrum.stand_places<<" miejsc stojących.";

    chrum.money = chrum.base_money;
    week.week_number = 0;
    while(1)
    {
        int weeks_to_simulate;
        int symulation_type;
        cout<<"\n\nPodaj ile tygodni chcesz zasymulować (podaj 0, aby zakończyć program): ";
        cin>> weeks_to_simulate;

        if(weeks_to_simulate == 0)
        {
            break;
        }

        for(int i = 1; i<=weeks_to_simulate; i++)
        {
        	 

             week.week_number++;

             week.week_ratio_calculation();
             week.people_arrived_ratio_calculation();
             week.people_that_paid_ratio();
             week.income_calculate();
             debet.draw();
             debet.random_incident_calculation();
             people_arrived = chrum.total_places*week.people_arrived_ratio;


              chrum.money = chrum.money + (( (people_arrived*week.hundred_ratio)*100 + (people_arrived*week.fifty_ratio)*50 + (people_arrived*week.twenty_ratio)*20 + (people_arrived*week.ten_ratio)*10 + (people_arrived*week.five_ratio)*5 + (people_arrived*week.two_ratio)*2 + (people_arrived*week.one_ratio))*0.19*chrum.fame_ratio*week.week_ratio + week.income - debet.random_incident)*1.00;
            
              	sleep(1);
        cout<<"\n\nTydzień numer "<< week.week_number <<" roku "<<year<<"\n";
        cout<<"Przychód w tym tygodniu wyniósł: "<<( (people_arrived*week.hundred_ratio)*100 + (people_arrived*week.fifty_ratio)*50 + (people_arrived*week.twenty_ratio)*20 + (people_arrived*week.ten_ratio)*10 + (people_arrived*week.five_ratio)*5 + (people_arrived*week.two_ratio)*2 + (people_arrived*week.one_ratio))*0.19*chrum.fame_ratio*week.week_ratio + week.income - debet.random_incident<<" zł."<<"\nObecny stan konta wynosi "<<chrum.money<<" zł.";

        if(week.week_number % 4 == 0)
             {
                 debet.bill_calculation();
                 chrum.money = chrum.money - debet.bill;
                 cout<<"\nOpłaty w tym miesiącu wyniosły "<<debet.bill<<" zł.";
             }

        if(week.week_number == 52)
        {
            year = year + 1;
            week.week_number = 0;
        }
        if(debet.random_incident > 0)
        {
            cout<<"\nNieoczekiwane wydatki: "<<debet.random_incident<<" zł.";
        }

        }
    }
    return 0;
}
