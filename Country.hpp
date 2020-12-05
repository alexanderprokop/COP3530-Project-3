#pragma once
#include <unordered_map>
#include <string>
#include <vector>

class Country {
private:
    std::unordered_map<std::string, std::vector<int>> datesMap;
    //datesMap[0] = newCases
    //datesMap[1] = cumalativeCases
    //datesMap[2] = newDeaths
    //datesMap[3] = cumalativeDeaths
    std::string countryName;

public:
    Country();
    Country(std::string _countryName);
    void insertDateData(std::string date, int newCases, int cumalativeCases, int newDeaths, int cumalativeDeaths);
    std::string getName();
    std::string getDate();
    void setName(std::string _name);
    int getNewCases(const std::string& date);
    int getCumalativeCases(const std::string& date);
    int getNewDeaths(std::string date);
    int getCumalativeDeaths(std::string date);
    std::unordered_map<std::string, std::vector<int>> GetMap();
};
