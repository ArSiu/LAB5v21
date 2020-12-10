#include <iostream>
#include "WeatherCalendar.h"

WeatherCalendar::WeatherCalendar(){}
WeatherCalendar::WeatherCalendar(int len){
    this->len=len;
    arrayOfWeatherDays = new Weather[len];
}
WeatherCalendar::~WeatherCalendar(){
    delete []arrayOfWeatherDays;
}

void WeatherCalendar::printAll(){
    for(int i = 0;i < len;i++){
        arrayOfWeatherDays[i].show_stats();
    }
}
void WeatherCalendar::findMaxTempratureByDay(weekDay day){
    bool hasDay;
    int maxTemp = 0;
    for(int i = 0;i < len;i++){
        if(arrayOfWeatherDays[i].getDay() == day){
            hasDay = true;
            if(maxTemp < arrayOfWeatherDays[i].getTemp()){
                maxTemp = arrayOfWeatherDays[i].getTemp();
            }
        }
    }
    if(hasDay){
        std::cout << "Max temp from past days " << maxTemp << std::endl << std::endl;
    } else{
        std::cout << "Not enough data"<< std::endl << std::endl;
    }
}


void WeatherCalendar::isLvivWeather(double humidity, type wtype){
    if(humidity>=80 && wtype == type::RAINY ){
        std::cout << "In lviv was bad weather" << std::endl;
    }else{
        std::cout << "In lviv was good weather" << std::endl;
    }
}

void WeatherCalendar::addDayWeather(Weather weather,unsigned int Index){
    if(Index < len){
        arrayOfWeatherDays[Index] = weather;
    }
}
Weather WeatherCalendar::getWeatherIndex(unsigned int Index){
    if(Index < len){
        return arrayOfWeatherDays[Index];
    }
    return Weather();
}
void WeatherCalendar::SelectionSortByTemperature(){
    int i, j, First;
    Weather temp;

    for (i = len - 1; i > 0; i--){
        First = 0;
        for (j=1; j<=i; j++){
            if (arrayOfWeatherDays[j].getTemp() < arrayOfWeatherDays[First].getTemp()){
                First = j;
            }
        }
        temp = arrayOfWeatherDays[First];
        arrayOfWeatherDays[First] = arrayOfWeatherDays[i];
        arrayOfWeatherDays[i] = temp;
    }

}


void WeatherCalendar::SelectionSortByDays(){
    int i, j, First;
    Weather temp;

    for (i = len - 1; i > 0; i--){
        First = 0;
        for (j=1; j<=i; j++){
            if (arrayOfWeatherDays[j].getDay() < arrayOfWeatherDays[First].getDay()){
                First = j;
            }
        }
        temp = arrayOfWeatherDays[First];
        arrayOfWeatherDays[First] = arrayOfWeatherDays[i];
        arrayOfWeatherDays[i] = temp;
    }

}
