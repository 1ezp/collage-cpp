#include <iostream>

using namespace std;

class Date{

    int m_day;
    int m_month;
    int m_year;

    public:
    int getMonth(){return m_month;}
    void setMonth(int month){m_month = month;};
    
    int getDay(){return m_day;}
    void setDay(int day){m_day = day;};
    
    int getYear(){return m_year;}
    void setYear(int year){m_year = year;};

};

int main(){
    Date e;
    e.setMonth(1);
    e.setDay(1);
    e.setYear(2021);


    return 0;
}
