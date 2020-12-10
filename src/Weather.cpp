#include <iostream>
#include "Weather.h"

//constructor & destructor
Weather::Weather() {}
Weather::Weather(int year,int month,int Date,weekDay day, string city, string country, int temp, double humidity, double windSpeed,type wtype) :
year(year),month(month),Date(Date),day(day), city(city), country(country), temp(temp), humidity(humidity), wind_speed(windSpeed),wtype(wtype) {
}
Weather::~Weather() {}

//getters & setters
weekDay Weather::getDay(){
    return day;
}
void Weather::setDay(weekDay day) {
    Weather::day = day;
}
type Weather::getWeathertype() {
    return Weather::wtype;
}
string Weather::getCity(){
    return city;
}
void Weather::setCity(string city){
    Weather::city = city;
}
string Weather::getCountry(){
    return country;
}
void Weather::setCountry(string country){
    Weather::country = country;
}
int Weather::getTemp(){
    return temp;
}
void Weather::setTemp(int temp){
    Weather::temp = temp;
}
double Weather::getHumidity(){
    return humidity;
}
void Weather::setHumidity(double humidity){
    Weather::humidity = humidity;
}
double Weather::getWindSpeed(){
    return wind_speed;
}
void Weather::setWindSpeed(double windSpeed){
    wind_speed = windSpeed;
}
string Weather::getTypeName(){//get type of weather in str from Enum type
    switch (wtype) {
        case 0: return "SUNNY";
        case 1: return "CLOUD";
        case 2: return "RAINY";
        case 3: return "FOGGY";
    }
    return "noun";
}
int Weather::getDate() {
    return Date;
}

// methods
void Weather::show_stats(){//print in console
    string l;
    int Max = 50;
    int Y = (l = to_string(year)).length();
    int M = (l = to_string(month)).length();
    int D = getDayName().length();
    int DA = (l = to_string(Date)).length();
    int TOD = getDayName().length();
    int C = city.length();
    int CO = country.length();
    int T = (l = to_string(temp)).length();
    int H = (l = to_string(humidity)).length() + 1;
    int W = (l = to_string(wind_speed)).length() + 1;


    write_hash(Max);
    std::cout <<"| year: " + to_string(year);
    write_space(Max,Y,10);
    std::cout <<"| month: " + to_string(month);
    write_space(Max,M,11);
    std::cout <<"| day: " + getDayName();
    write_space(Max,D,9);
    std::cout <<"| Date: " << getDate();
    write_space(Max,DA,10);
    std::cout <<"| Type of day: " + getTypeName();
    write_space(Max,D,19);
    std::cout <<"| city: " << city;
    write_space(Max,C,10);
    std::cout <<"| country: " << country;
    write_space(Max,CO,13);
    std::cout <<"| temp: "<< temp;
    write_space(Max,T,10);
    std::cout << "| humidity: " << humidity;
    write_space(Max,H,6);
    std::cout <<"| wind_speed: "<< wind_speed;
    write_space(Max,W,10);
    write_hash(Max);
    std::cout<<""<<std::endl;
}
void Weather::write_space(int Max,int A,int L){//for print space
    int t = A+L;
    if(t>0) {
        for (int i = t; i < Max; i++)
            std::cout << " ";
        std::cout << " |" << std::endl;
    }
}
void Weather::write_hash(int Max){//for print dash
    for(int i = 0;i <abs(Max) ;i++)
        std::cout <<"#";
    std::cout <<""<< std::endl;
}
string Weather::getDayName(){//get weekday in str from Enum type
    switch (day) {
        case 0: return "Mon";
        case 1: return "Thu";
        case 2: return "Wed";
        case 3: return "Thur";
        case 4: return "Fri";
        case 5: return "Sat";
        case 6: return "Sun";
    }
    return "noun";
}
