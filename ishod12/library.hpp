#pragma once
#include <string>

class Library {
  public:
  //default const
  Library();

  //additional const
  Library(std::string libName, std::string libCity);

  //copy const
  Library(const Library &L);

  //getters and setters
  std::string getStringLibName();
  void setLibName(std::string libName);
  void getLibName();
  
  std::string getStringLibCity();
  void setLibCity(std::string libCity);
  void getLibCity();

  //info()
  void info();
  
  private:
    std::string libName;
    std::string libCity;
};