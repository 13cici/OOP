#pragma once
#include <string>
#include "library.hpp"

class Book{
  public:
  //default const
  Book();

  //additional const
  Book(std::string bookName, std::string bookAuthor, double bookCost);

  Book(std::string bookName, std::string bookAuthor, double bookCost, Library *library);

  //copy const
  Book(const Book &B);
  Book(Library *Library);

  //getters and setters
  std::string getStringBookName();
  void setBookName(std::string BookName);
  void getBookName();
  
  std::string getStringBookAuthor();
  void setBookAuthor(std::string BookAuthor);
  void getBookAuthor();

  double getBookCostReturn();
  void setBookCost(double BookCost);
  void getBookCost();

  //info()
  void info();
  
  private:
    std::string bookName;
    std::string bookAuthor;
    double bookCost;
    Library* library;
};