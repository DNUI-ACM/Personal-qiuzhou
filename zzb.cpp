#include <iostream>

int isLeapYear(int year)
{
    return year%400==0||(year%100!=0&&year%4==0);
}

class date
{
private:
    int date_year;
    const size_t date_month1[12]={31,29,31,30,31,30,31,31,30,31,30,31}
    const size_t date_month2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    size_t year,month,day;
    viod panduan(){
        if(isLeapYear(N)&&Y==2&&R<30&&R>0){
            if(this->day>day_month1[month]){
                this->day-=day_month1[month];
                if(this->month==12){
                    this->year++;
                    this->month=1;
                }
            }
        }
        else{
            if(this->day>day_month2[month]){
                this->day>_month2[month];
                if(this->month==12){
                    this->year++;
                    this->month=1;
                }
            }
        }
    }
public:
    date(){
        :year=1980
        ,month=1
        ,day=1
        d_from_start=0;
        d_from_year_start=0;
    }
    Date(const date &o){
    this->d_from_start=o.d_from_start;
    this->d_from_year_start=o.d_from_year_start;
    this->year=o.year;
    this->month=o.month;
    this->day=o.day;
    }
