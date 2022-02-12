#include <iostream>

template <typename T>
T function1(T f1){
  return f1;
}

template <typename T, typename U>
T function2(T f1, U f2){
  return f1 + f2;
}

//
template <typename T>
class Fclass{
  private:
    T *pa;
    int size;
  public:
    Fclass(T a[], int s);
    void info();
};

template <typename T>
  Fclass<T>::Fclass(T a[], int s){
  pa = new T[s];
  size = s;
  for(int i = 0; i < size; i++){
    pa[i] = a[i];
  } 
}

template <typename T>
void Fclass<T>::info(){
  for(int i = 0; i < size; i++){
    std::cout << *(pa + i) << std::endl;
  } 
}


int main() {
  float f1 = 1.5;
  int f2 = 2;
  std::cout << function1(f1) << std::endl;
  std::cout << function1(f2) << std::endl;
  std::cout << function2(f1, f2) << std::endl;
  std::cout << std::endl;
  int a[5] = {1,2,3,4,5};
  Fclass<int> p(a, 5);
  p.info();

} 