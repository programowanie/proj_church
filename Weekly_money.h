
using namespace std;

class Weekly_money
{
    public:

    int week_number;
    double people_arrived_ratio;
    double week_ratio;
    int income; //chrzty, pogrzeby
    double hundred_ratio, fifty_ratio, twenty_ratio, ten_ratio , five_ratio, two_ratio, one_ratio;
    int people_that_paid;

    void week_ratio_calculation();
    void people_arrived_ratio_calculation();
    void people_that_paid_ratio();
    void income_calculate();
};
