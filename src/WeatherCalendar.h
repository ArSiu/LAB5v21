#include "Weather.h"

class WeatherCalendar {
  public:
    WeatherCalendar();
    WeatherCalendar(int len);
    ~WeatherCalendar();
    void addDayWeather(Weather weather,unsigned int index);
    Weather getWeatherIndex(unsigned int index);

    void findMaxTempratureByDay(weekDay day);
    void isLvivWeather(double humidity, type wtype);
    void selectionSortByDays();
    void selectionSortByTemperature();
    void printAll();

  private:
    Weather* arrayOfWeatherDays;
    int len;
};
