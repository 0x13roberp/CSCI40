#include <iostream>

// creates a function that retuns a float number, and the parameter of the func it's also a float number.
// the variable x only lives in this function.
float f(float x){
  return x*5 - 10;
}

// and then we call it from the main function.
int main(){
  float result = f(9.9);
  std::cout << result << std::endl;
  return 0;
}
