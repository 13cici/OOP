class Exception {
  public:
    Exception();
    Exception(std::string errorText);
    std::string getErrorText();
  private:
    std::string errorText;
};




/*
class Exception{
  public:
    virtual void showError();
};

class errorType : public Exception{
  public:
    virtual void showError() override {
      std::cout << "\nThere was an error selecting the type of the book! \nThe book types avaliable are: 'Magazine', 'Novel', 'Poetry', 'Info'" << std::endl;
    }
}; 


class errorGenre : public exception{
  public:
    virtual const char* showError() const throw() {
       return "\nThere was an error selecting the genre of the book! \nThe book genres avaliable are: 'Comedy', 'Drama', 'Adventure', 'Tragedy'";
    }
}; */