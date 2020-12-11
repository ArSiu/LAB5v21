#include <iostream>
#include "WeatherCalendar.h"

int main(){
    WeatherCalendar a(2);
    a.addDayWeather(Weather(1970,1,12,Mon,"Lviv","UA",-16,80.0,12.5,RAINY),0);
    a.addDayWeather(Weather(2020,12,3,Mon,"Istanbul","TR",-21,45.0,9.5,CLOUD),1);

    a.findMaxTempratureByDay(Mon);
    a.printAll();

}
