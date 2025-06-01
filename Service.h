#pragma once
#include "Weather.h"

class Service {
public:
    virtual Weather getWeather(std::string s) = 0;  // Чисто виртуальный метод
    virtual ~Service() {}
};