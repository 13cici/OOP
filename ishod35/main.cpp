#include <iostream>
#include <string.h>

#include "exception.hpp"
#include "exceptionType.hpp"
#include "exceptionGenre.hpp"
#include <ctime>

class Book{
  public:
    static void bookInfo(){
      std::cout << "\nBook!" << std::endl;
    }

    virtual int getBookLenght() = 0;

    virtual std::string theBookType(){
      return ("\nbookType");
    }

    Book(){
      bookInfo();
    }

    Book(std::string name, std::string author, std::string type, std::string genre, int bookYear){
      name = name;
      author = author;
      type = type;
      setGenre(genre);
      bookYear = bookYear;
      bookInfo();
    }

    //
    std::string getName(){
      return name;
    }
    //
    std::string getAuthor(){
      return author;
    }
    void setAuthor(std::string author){
      author = author;
    }
    // 'Magazine', 'Novel', 'Poetry', 'Info'
    std::string getType(){
      return type;
    }
    void setType(std::string type){
      if(type != "Magazine" || type != "Novel" || type != "Poetry" || type != "Info"){
        //throw ExceptionType();
      } else {
        type = type;
      }
    }
    // 'Comedy', 'Drama', 'Adventure', 'Tragedy'
    std::string getGenre(){
      return genre;
    }
    void setGenre(std::string genre){
      if(genre != "Comedy" || genre != "Drama" || genre != "Adventure" || genre != "Tragedy"){
        //throw ExceptionGenre();
      } else {
        genre = genre;
      }
    }
    //
    void setBookYear(int bookYear){
      this->bookYear = bookYear;
    }
    int getBookYear(){
      return bookYear;
    }

    virtual ~Book(){
      std::cout << "\nThe book is removed!" << std::endl;
    }
  
  protected:
    void setName(std::string name){
      name = name;
    }

  protected:
    std::string name;
    std::string author;
    std::string type;
    std::string genre;
    int bookYear;
};

class Magazine: public Book{
  public:
    Magazine(){
      type = "Magazine";
    }

    Magazine(std::string nameM, std::string authorM, std::string type, std::string genreM, int bookYearM, std::string personOfMonthM){
      name = nameM;
      author = authorM;
      type = "Magazine";
      setGenre(genreM);
      bookYear = bookYearM;
      personOfMonth = personOfMonthM;
      setEdition();
    }
    //
    int getMonth(){
      return 1 + ltm->tm_mon;
    }

    int getDay(){
      return ltm->tm_mday;
    }
    //
    void setPersonOfMonth(std::string personOfMonth){
      if(getMonth() <= 6){
        std::cout << "\nThe person of the month is set for the first half of the year!" << std::endl;
      } else {
        std::cout << "\nThe person of the month is set for the second half of the year!" << std::endl;
      }
      personOfMonth = personOfMonth;
    }
    std::string getPersonOfMonth(){
      return personOfMonth;
    }
    //
    void setEdition(){
      edition = getDay();
      std::cout << "\nEdition set to: " << getDay() << std::endl;
    }
    int getEdition(){
      return edition;
    }

    int getBookLenght() override{
      int res;
      if(edition < 15){
        res = 1;
      } else {
        res = 2;
      }
      switch(res){
        case 1:
          std::cout << "\nThe book is short!" << std::endl;
          break;
        case 2:
          std::cout << "\nThe book is long!" << std::endl;
          break;
      }
      return res;
    }

    virtual std::string theBookType() override{
      return ("Magazine");
    }

    void info(){
      std::cout << "\nBook name: " << getName() << "\nBook author: " << getAuthor() << "\nBook type: " << theBookType() << "\nBook genre: " << getGenre() << "\nBook year: " << getBookYear() << "\nPerson of month: " << getPersonOfMonth() << "\nEdition: " << getEdition() << std::endl; 
    }

    virtual ~Magazine(){}

    using Book::setName;

  private:
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::string personOfMonth;
    int edition;
};

class Novel: public Book{
  public:
    Novel(){
      type = "Novel";
    }

    Novel(std::string nameN, std::string authorN, std::string type, std::string genreN, int bookYearN, std::string mainN){
      name = nameN;
      author = authorN;
      type = "Novel";
      genre = genreN;
      bookYear = bookYearN;
      main = mainN;
      setEdition();
    }

    int getDay(){
      return ltm->tm_mday;
    }
    //
    void setMain(std::string main){
      main = main;
    }
    std::string getMain(){
      return main;
    }
    //
    void setEdition(){
      edition = getDay();
      std::cout << "\nEdition set to: " << getDay() << std::endl;
    }
    int getEdition(){
      return edition;
    }
    //
    int getBookLenght() override{
      int res;
      if(edition < 15){
        res = 1;
      } else {
        res = 2;
      }
      switch(res){
        case 1:
          std::cout << "\nThe book is short!" << std::endl;
          break;
        case 2:
          std::cout << "\nThe book is long!" << std::endl;
          break;
      }
      return res;
    }

    virtual std::string theBookType() override{
      return ("Novel");
    }

    void info(){
      std::cout << "\nBook name: " << getName() << "\nBook author: " << getAuthor() << "\nBook type: " << theBookType() << "\nBook genre: " << getGenre() << "\nBook year: " << getBookYear() << "\nThe book's main character: " << getMain() << "\nEdition: " << getEdition() << std::endl; 
    }

    virtual ~Novel(){}

    using Book::setName;

  private:
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::string main;
    int edition;
};



int main() {


  /*Magazine Love;
  Love.setName("Thinking");
  Love.setAuthor("Dino");
  Love.setGenre("Adventure");
  Love.setBookYear(2020);
  Love.setPersonOfMonth("Majstor Sime");*/
  Magazine Love("Thinking","Cici","", "prp", 2020, "Kik");
  Love.getBookLenght();
  Love.getEdition();
  Love.info();
} 