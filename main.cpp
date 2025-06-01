#include "JsonService.h"
#include "XmlService.h"  // Добавлено из feature-xml

int main() {
    JsonService js;
    Weather w1 = js.getWeather("weather.json");

    XmlService xs;  // Добавлено из feature-xml
    Weather w2 = xs.getWeather("weather.xml");  // Добавлено из feature-xml

    return 0;
}