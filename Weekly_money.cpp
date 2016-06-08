#include "Weekly_money.h"
#include <stdlib.h>
#include <iostream>

void Weekly_money::week_ratio_calculation()
{
    if(week_number == 51 || week_number == 52 || week_number == 1 || week_number == 12 || week_number == 13 || week_number == 21 || week_number == 33 || week_number == 44) //numery tygodni ze œwiêtami
    {
        week_ratio = (rand () %10+165)/100.00 ;
    }
    else
    {
        week_ratio = (rand () %20 + 87)/100.00;
    }
}

void Weekly_money::people_arrived_ratio_calculation()
{
    people_arrived_ratio = ((rand () %100 +40)*week_ratio)/100.00;
}
void Weekly_money::people_that_paid_ratio()
{
    hundred_ratio = (rand () %2)/100.00;
    fifty_ratio = (rand () %5)/100.00;
    twenty_ratio = (rand () %8+3)/100.00;
    ten_ratio = (rand () %10+5)/100.00;
    five_ratio = (rand () %15+8)/100.00;
    two_ratio = (rand () %20+15)/100.00;
    one_ratio = 1 - (hundred_ratio + fifty_ratio + twenty_ratio + ten_ratio + five_ratio + two_ratio + one_ratio);
}

void Weekly_money::income_calculate()
{
    income = (rand () %3+1)*350+ (rand () %4)*123;
}
