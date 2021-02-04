#include <iostream>
#include "Weather.h"

//constructor & destructor
Weather::Weather() {}

Weather::Weather(int year,int month,int date,weekDay day, string city, string country, int temp, double humidity, double windSpeed,type wtype) :
year(year),month(month),date(date),day(day), city(city), country(country), temp(temp), humidity(humidity), wind_speed(windSpeed),wtype(wtype) {}

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

int Weather::getDate() {
    return date;
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


// methods
void Weather::showStats(){//print in console
    const int maxLengthOfFieldTable = 50;//max symbols in console table
    string yearField = "| year: " + to_string(year);
    string mouthField = "| month: " + to_string(month);
    string dayField = "| day: " + getDayName();
    string dateField = "| date: " + to_string(getDate());
    string weatherTypeField = "| Type of day: " + getTypeName();
    string cityField = "| city: " + city;
    string countryField = "| country: " + country;
    string tempField = "| temp: "+ to_string(temp);
    string humidityField = "| humidity: " + to_string(humidity);
    string windSpeedField = "| wind_speed: "+ to_string(wind_speed);

    writeHash(maxLengthOfFieldTable);
    std::cout << yearField;
    writeSpace(maxLengthOfFieldTable,yearField.length());
    std::cout << mouthField;
    writeSpace(maxLengthOfFieldTable,mouthField.length());
    std::cout << dayField;
    writeSpace(maxLengthOfFieldTable,dayField.length());
    std::cout << dateField;
    writeSpace(maxLengthOfFieldTable,dateField.length());
    std::cout << weatherTypeField;
    writeSpace(maxLengthOfFieldTable,weatherTypeField.length());
    std::cout << cityField;
    writeSpace(maxLengthOfFieldTable,cityField.length());
    std::cout << countryField;
    writeSpace(maxLengthOfFieldTable,countryField.length());
    std::cout << tempField;
    writeSpace(maxLengthOfFieldTable,tempField.length());
    std::cout << humidityField;
    writeSpace(maxLengthOfFieldTable,humidityField.length());
    std::cout << windSpeedField;
    writeSpace(maxLengthOfFieldTable,windSpeedField.length());
    writeHash(maxLengthOfFieldTable);
    cout<<""<<endl;
}
void Weather::writeSpace(int maxLengthOfFieldTable,int fieldLength){//for print space
    if(fieldLength > 0) {
        for (int i = fieldLength; i < maxLengthOfFieldTable; i++)
            cout << " ";
        cout << " |" << endl;
    }
}
void Weather::writeHash(int maxLengthOfFieldTable){//for print dash
    for(int i = 0;i < abs(maxLengthOfFieldTable) ;i++)
        cout <<"#";
    cout <<""<< endl;
}
