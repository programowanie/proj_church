#include "Church.h"
#include <stdlib.h>
#include <fstream>
void Church::stat_random()
{
    base_money = (rand () %100+23)*92.00;
    city_size  =  rand () %4+1;
    fame_ratio = (rand () %100+50)/100.00;
}
void Church::parameters()
{
    seat_places = (rand () %69+23)*city_size*10;
    stand_places = (rand () %23+23)*city_size*10;
    total_places = seat_places + stand_places;

}

void Church::city_descriptor()
{
    if(city_size == 1 )
    {
        city_description = ("małej wsi");
    }

    if(city_size == 2 )
    {
        city_description = ("małym mieście");
    }

    if(city_size == 3 )
    {
        city_description = ("dużym mieście");
    }

    if(city_size == 4 )
    {
        city_description = ("stolicy");
    }


    if(fame_ratio < 0.75)
    {
        fame_description = ("złą");
    }

    if(fame_ratio > 1.25)
    {
        fame_description = ("dobrą");
    }
    else
    {
        fame_description = ("neutralną");
    }
}
