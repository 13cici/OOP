#include <iostream>
#include "person.hpp"
#include "user.hpp"

#define memberAmount 50

//default const
User::User(){
  data.name = "n";
  data.surname = "s";
  currency = 0;
  member = false;
}

//additional const
User::User(Person newData, double newCurrency, bool newMember){
  setData(newData);
  setCurrency(newCurrency);
  setMember(newMember);
}

User::User(Person newData, double newCurrency, bool newMember, Library *library, Book *book){
  setData(newData);
  setCurrency(newCurrency);
  setMember(newMember);
  this->library = library;
  this->book = book;
}

User::User(Library *library){
  this->library = library;
}

//copy const
User::User(const User &U){
  if(U.library == nullptr){
    library = nullptr;
  } else {
    library = new Library();
  }
}

//getters and setters
void User::setData(Person data){
  this->data = data;
}
void User::getData(){
  std::cout << "\nName: " << data.name << "\nSurname: " << data.surname << std::endl << std::endl;
}

void User::setCurrency(double currency){
  if(currency < 0){
    std::cout << "\nError: the currency needs to be greater than 0" << std::endl;
  } else {
    this->currency = currency;
  }
}
void User::getCurrency(){
  std::cout << "Currency: " << currency << "kn" <<std::endl;
}

void User::setMember(bool member){
  this->member = member;
}
void User::getMember(){
  std::cout << "Membership status: " << member << std::endl;
}

//methods
void User::userBecomeMember(){
  if(member == false) {
    setMember(true);
  } else {
    std::cout << "\nThe user is already a member" << std::endl;
  }
}

void User::bookBuy(){
  if(member == true){
    if(currency >= (book->getBookCostReturn() - memberAmount)){
      double newValue = currency - (book->getBookCostReturn() - memberAmount);
      if ((newValue - memberAmount) >= 0){
        newValue = newValue - memberAmount;
        setCurrency(newValue);
        std::cout << "\nUser bought the book: " << book->getStringBookName() << "\nThe new amount of currency is: " << newValue << "kn" <<std::endl;
      } else {
        newValue = 0;
        setCurrency(newValue);
        std::cout << "\nUser bought the book: " << book->getStringBookName() << "\nThe new amount of currency is: " << newValue << "kn" <<std::endl;
      }
    } else {
      std::cout << "\nThe user does not have the required currency" << std::endl;
    }
  } else {
    if(currency >= book->getBookCostReturn()){
      double newValue = currency - book->getBookCostReturn();
      if ((newValue - memberAmount) >= 0){
        newValue = newValue - memberAmount;
        setCurrency(newValue);
        std::cout << "\nUser bought the book: " << book->getStringBookName() << "\nThe new amount of currency is: " << newValue << "kn" <<std::endl;
      } else {
        newValue = 0;
        setCurrency(newValue);
        std::cout << "\nUser bought the book: " << book->getStringBookName() << "\nThe new amount of currency is: " << newValue << "kn" << std::endl;
        
      }
    } else {
      std::cout << "\nThe user does not have the required currency" << std::endl;
    }
  }
}

void User::userCurrencyState(){
  getCurrency();
}

//info()
void User::info(){
  std::cout << "\nName: " << data.name << "\nSurname: " << data.surname << "\nCurrency: " << currency << "kn" << std::endl;
}