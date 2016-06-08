#include "Bills_randoms.h"
#include <stdlib.h>

void Bills_randoms::bill_calculation()
{
    bill = rand () %1200 + 7000;
}

void Bills_randoms::draw()
{
    draw_number = rand () %55;
}
void Bills_randoms::random_incident_calculation()
{
    if(draw_number == 12 || draw_number == 23 || draw_number == 45)
    {
        random_incident = rand () %4000 + 4000;
    }

    if(draw_number == 2 || draw_number == 8 || draw_number == 32)
    {
        random_incident = (rand () %20 + 7)*1000;
    }

    if(draw_number == 27 || draw_number == 50 || draw_number == 36 || draw_number == 7 || draw_number == 8)
    {
        random_incident = rand () %6000 + 4000;
    }
    else
    {
        random_incident = 0;
    }
}
