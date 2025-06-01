#pragma once
#include <string>

class Weather {
public:
    std::string city;        // Название города
    double lon;              // Долгота
    double lat;              // Широта
    double temperature;      // Температура
    std::string weather;     // Описание погоды
    double windSpeed;        // Скорость ветра
    int clouds;              // Облачность

    Weather(std::string c, double lo, double la, double t, std::string w, double ws, int cl)
        : city(c), lon(lo), lat(la), temperature(t), weather(w), windSpeed(ws), clouds(cl) {
    }
};