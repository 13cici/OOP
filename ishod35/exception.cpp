#include <iostream>
#include <string>

#include "exception.hpp"
#include "exceptionType.hpp"
#include "exceptionGenre.hpp"

Exception::Exception() : errorText("Error!") {}

Exception::Exception(std::string errorText) : errorText(errorText){}

std::string Exception::getErrorText(){
  return errorText;
}

ExceptionType::ExceptionType() : Exception("\nThere was an error selecting the type of the book! \nThe book types avaliable are: 'Magazine', 'Novel', 'Poetry', 'Info'"){}

ExceptionGenre::ExceptionGenre() : Exception("\nThere was an error selecting the genre of the book! \nThe book genres avaliable are: 'Comedy', 'Drama', 'Adventure', 'Tragedy'"){}
