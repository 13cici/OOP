#pragma once
#include "person.hpp"
#include "library.hpp"
#include "book.hpp"

class User{
  public:
  //default const
  User();

  //additional const
  User(Person newData, double newCurrency, bool newMember);

  User(Person newData, double newCurrency, bool newMember, Library *library, Book *book);

  User(Library *library);

  //copy const
  User(const User &U);

  //getters and setters
  void setData(Person data);
  void getData();

  void setCurrency(double currency);
  void getCurrency();

  void setMember(bool member);
  void getMember();

  //methods
  void userBecomeMember();
  void bookBuy();
  void userCurrencyState();

  //info()
  void info();
  
  private:
    Person data;
    double currency;
    bool member;
    Library *library;
    Book *book;
};