#include <string>
using namespace std;
class Church
{
public:
    double base_money;
    double money;
    int city_size;
    int seat_places, stand_places, total_places;
    double fame_ratio;
    string city_description;
    string fame_description;

    void stat_random();

    void parameters();
    void city_descriptor();


};
