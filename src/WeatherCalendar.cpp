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

void WeatherCalendar::addDayWeather(Weather weather,unsigned int index){
    if(index < len){
        arrayOfWeatherDays[index] = weather;
    }
}

Weather WeatherCalendar::getWeatherIndex(unsigned int index){
    if(index < len){
        return arrayOfWeatherDays[index];
    }
    return Weather();
}

void WeatherCalendar::findMaxTempratureByDay(weekDay day){
    bool hasDay;
    selectionSortByTemperature();
    int maxTemp = arrayOfWeatherDays[len - 1].getTemp();
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


void WeatherCalendar::selectionSortByTemperature(){
    int tempValueForSort;
    Weather temp;

    for (int i = len - 1 ; i > 0 ; i--){
        tempValueForSort = 0;
        for (int j = 1; j <= i; j++){
            if (arrayOfWeatherDays[j].getTemp() < arrayOfWeatherDays[tempValueForSort].getTemp()){
                tempValueForSort = j;
            }
        }
        temp = arrayOfWeatherDays[tempValueForSort];
        arrayOfWeatherDays[tempValueForSort] = arrayOfWeatherDays[i];
        arrayOfWeatherDays[i] = temp;
    }
}


void WeatherCalendar::selectionSortByDays(){
    int tempValueForSort;
    Weather temp;

    for (int i = len - 1; i > 0 ; i--){
        tempValueForSort = 0;
        for (int j = 1; j <= i ; j++){
            if (arrayOfWeatherDays[j].getDay() > arrayOfWeatherDays[tempValueForSort].getDay()){
                tempValueForSort = j;
            }
        }
        temp = arrayOfWeatherDays[tempValueForSort];
        arrayOfWeatherDays[tempValueForSort] = arrayOfWeatherDays[i];
        arrayOfWeatherDays[i] = temp;
    }
}
void WeatherCalendar::printAll(){
    for(int i = 0;i < len;i++){
        arrayOfWeatherDays[i].showStats();
    }
}
