#include "JsonService.h"
#include "XmlService.h"

int main() {
    JsonService js;
    Weather w1 = js.getWeather("weather.json");

    XmlService xs;
    Weather w2 = xs.getWeather("weather.xml");

    return 0;
}