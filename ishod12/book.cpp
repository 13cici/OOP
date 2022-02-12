#include <iostream>
#include "book.hpp"

#define memberAmount 50

//default const
Book::Book() : library(nullptr){
  bookName = "bookName not stated";
  bookAuthor = "bookAuthor not stated";
  bookCost = 0;
}

//additional const
Book::Book(std::string bookNameC, std::string bookAuthorC, double bookCostC){
  setBookName(bookNameC);
  setBookAuthor(bookAuthorC);
  setBookCost(bookCostC);
}

Book::Book(std::string bookNameC, std::string bookAuthorC, double bookCostC, Library *library){
  setBookName(bookNameC);
  setBookAuthor(bookAuthorC);
  setBookCost(bookCostC);
  this->library = library;
}

//getters and setters
std::string Book::getStringBookName(){
  return bookName;
}
void Book::setBookName(std::string bookName){
  this->bookName = bookName;
}
void Book::getBookName(){
  std::cout << bookName << std::endl;
}
  
std::string Book::getStringBookAuthor(){
  return bookName;
}
void Book::setBookAuthor(std::string bookAuthor){
  this->bookAuthor = bookAuthor;
}
void Book::getBookAuthor(){
  std::cout << bookAuthor << std::endl;
}

double Book::getBookCostReturn(){
  return bookCost;
}
void Book::setBookCost(double bookCost){
  this->bookCost = bookCost;
}
void Book::getBookCost(){
  std::cout << bookCost << std::endl;
}

//info()
void Book::info(){
  std::cout << "\nBook name: " << bookName << "\nBook author: " << bookAuthor << "\nBook cost: " << bookCost << "kn" << std::endl;
}