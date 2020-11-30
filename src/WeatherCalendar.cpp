#include <iostream>
#include "WeatherCalendar.h"

WeatherCalendar::WeatherCalendar(){}
WeatherCalendar::WeatherCalendar(int len){
    this->len=len;
    array = new Weather[len];
}
WeatherCalendar::~WeatherCalendar(){
    delete []array;
}

void WeatherCalendar::findMaxTemprature(weekDay day){
    bool hasDay;
    int maxTemp = 0;
    for(int i = 0;i < len;i++){
        if(array[i].getDay() == day){
            hasDay = true;
            if(maxTemp < array[i].getTemp()){
                maxTemp = array[i].getTemp();
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
        std::cout << "In lviv was bad weather" << std::endl << std::endl;
    }else{
        std::cout << "In lviv was good weather" << std::endl << std::endl;
    }
}

void WeatherCalendar::addDayWeather(Weather weather,unsigned int a){
    if(a < len){
        array[a] = weather;
    }

}
Weather WeatherCalendar::getWeatherIndex(int index){
    return array[index];
}




void WeatherCalendar::sortByDays(){
    int i, j, first;
    Weather temp;

    for (i= len - 1; i > 0; i--){
        first = 0;
        for (j=1; j<=i; j++){
            if (array[j].getDay() < array[first].getDay()){
                first = j;
            }
        }
        temp = array[first];
        array[first] = array[i];
        array[i] = temp;
    }
    for(i = 0;i<len;i++){
        array[i].show_stats();
    }

}



