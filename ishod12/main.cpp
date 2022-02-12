#include <iostream>
#include "user.hpp"
#include "library.hpp"
#include "book.hpp"

int main() {
  Library pkc("Lipa","Pakrac");
  Book bTolHobbit("Hobbit", "Tolkien", 350, &pkc);
  Book b2("test", "test1", 600, &pkc);
  User u1({"Dino", "Ciciliot"}, 350, false, &pkc, &bTolHobbit);
  User u2({"danny", "danniel"}, 550, false, &pkc, &b2);

  pkc.info();
  bTolHobbit.info();
  u1.info();
  u1.bookBuy();
  u2.info();
  u2.bookBuy();
  u2.setMember(true);
  u2.bookBuy();
}