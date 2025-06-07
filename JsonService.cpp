#include "JsonService.h"
#include <fstream>
#include <nlohmann/json.hpp>

Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin) throw std::exception("Ошибка открытия файла");

    nlohmann::json j;
    fin >> j;

    return Weather(
        j["name"],
        j["coord"]["lon"],
        j["coord"]["lat"],
        j["main"]["temp"],
        j["weather"][0]["description"],
        j["wind"]["speed"],
        j["clouds"]["all"]
    );
}
