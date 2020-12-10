#include <string>
#include <ostream>

using namespace std;
enum weekDay{Mon,Thu,Wed,Thur,Fri,Sat,Sun};
enum type{SUNNY,CLOUD, RAINY, FOGGY};

class Weather {

public:
    Weather();
    Weather(int year,int month,int Date,weekDay day, string city, string country, int temp, double humidity, double windSpeed,type wtype);
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

    void show_stats();

    string getDayName();
    string getTypeName();

    int getDate();

private:
    int year;
    int month;
    int Date;
    type wtype;
    weekDay day;
    string city;
    string country;
    int temp;
    double humidity;
    double wind_speed;

    void write_space(int Max,int A,int L);
    void write_hash(int Max);

};
