#include "Weather.h"

class WeatherCalendar {
public:
    WeatherCalendar();
    WeatherCalendar(int len);
    ~WeatherCalendar();

    void findMaxTemprature(weekDay day);

    void isLvivWeather(double humidity, type Wtype);

    void addDayWeather(Weather weather,unsigned int a);
    Weather getWeatherIndex(int index);
    void sortByDays();


private:
    Weather* array;
    int len;

protected:

};


