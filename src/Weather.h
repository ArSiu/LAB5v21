#include <string>
#include <ostream>

using namespace std;
enum weekDay{Mon,Thu,Wed,Thur,Fri,Sat,Sun};
enum type{SUNNY,CLOUD, RAINY, FOGGY};

class Weather {

 public:
    Weather();
    Weather(int year,int month,int date,weekDay day, string city, string country, int temp, double humidity, double windSpeed,type wtype);
    ~Weather();

    weekDay getDay();
    void setDay(weekDay day);

    type getWeathertype();

    string getCity();
    void setCity(string city);

    string getCountry();
    void setCountry(string country);

    int getTemp();
    void setTemp(int temp);

    double getHumidity();
    void setHumidity(double humidity);

    double getWindSpeed();
    void setWindSpeed(double windSpeed);

    int getDate();

    string getDayName();
    string getTypeName();

    void showStats();

  private:
    int year;
    int month;
    int date;
    type wtype;
    weekDay day;
    string city;
    string country;
    int temp;
    double humidity;
    double wind_speed;

    void writeSpace(int maxLengthOfFieldTable,int fieldLength);
    void writeHash(int maxLengthOfFieldTable);
};
