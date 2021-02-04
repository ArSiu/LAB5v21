#include <iostream>
#include "WeatherCalendar.h"

int main(){
    WeatherCalendar a(2);
    a.addDayWeather(Weather(1970,1,12,Thu,"Lviv","UA",-16,80.0,12.5,RAINY),0);
    a.addDayWeather(Weather(2020,12,3,Mon,"Istanbul","TR",-21,45.0,9.5,CLOUD),1);


    a.findMaxTempratureByDay(Mon);
    a.isLvivWeather(a.getWeatherIndex(0).getHumidity(),a.getWeatherIndex(0).getWeathertype());
    a.selectionSortByDays();
    a.printAll();

}
