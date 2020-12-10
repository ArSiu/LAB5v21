#include "Weather.h"

class WeatherCalendar {
public:
    WeatherCalendar();
    WeatherCalendar(int len);
    ~WeatherCalendar();
    void addDayWeather(Weather weather,unsigned int Index);
    Weather getWeatherIndex(unsigned int Index);

    void findMaxTempratureByDay(weekDay day);
    void isLvivWeather(double humidity, type Wtype);
    void SelectionSortByDays();
    void SelectionSortByTemperature();
    void printAll();

private:
    Weather* arrayOfWeatherDays;
    int len;
};
