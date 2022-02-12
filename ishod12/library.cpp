#include <iostream>
#include "library.hpp"


//default const
Library::Library(){
  libName = "libName missing!";
  libCity = "libCity not stated";
}

//additional const
Library::Library(std::string libNameC, std::string libCityC){
  setLibName(libNameC);
  setLibCity(libCityC);
}

//copy const
Library::Library(const Library &L){}

//getters and setters
std::string Library::getStringLibName(){
  return libName;
}
void Library::setLibName(std::string libName){
  this->libName = libName;
}
void Library::getLibName(){
  std::cout << libName << std::endl;
}
  
std::string Library::getStringLibCity(){
  return libCity;
}
void Library::setLibCity(std::string libCity){
  this->libCity = libCity;
}
void Library::getLibCity(){
  std::cout << libCity << std::endl;
}

//info()
void Library::info(){
  std::cout << "\nLibrary name: " << libName
  << "\nLibrary city: " << libCity << std::endl;
}
