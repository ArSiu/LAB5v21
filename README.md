# Run
```
g++ main.cpp Weather.cpp WeatherCalendar.cpp -o Calendar
.\Calendar
```
# Wanna Use Code In Your Own
### Edit main.cpp find fields where we put data and change it.
```
a.addDayWeather(Weather(1970,1,12,Mon,"Lviv","UA",3,80.0,12.5,RAINY),0);
```
# Some info
### This is the code of lab work for learning C++ here is the task.
### Create a class Weather (day, city, country, temperature, humidity, wind speed). Add a enum type: SOLAR, CLOUDY, RAINY, FOGY. Add a WeatherCalendar class that contains Weather objects. Find the findMaxTempratureByDay(weekDay day) - find the maximum temperature for a certain day, if such a day does not exist, to display: "Not enough data". Add a forecasting method isLvivWeather (humidity, type): if humidity> 80% and type = “RAINY” to display: “In lviv was bad weather”, otherwise: “In lviv was good weather”.Sort weather day records.
