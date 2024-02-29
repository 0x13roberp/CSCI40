#include <iostream>
#include <cmath>
#include <string>


// create the following functions:
// f1: f(x) = 5 - 3*x
// f2: f(x) = sin(x) / 2+3
// f3: f(x, y) = (x+y) / 2
// f4: f(x) = pow(2,x) - 1
// f5: f(s) = returns if s is a palindrome, false if not.

float f1(float x){
  return (5 - 3*x);
}

float f2(float x){
  return (sin(x) / (3+2));
}

float f3(float x, float y){
  return ((x+y) / 2);
}

float f4(float x){
  return (pow(2, x) - 1);
}

bool is_palindrome(std::string s){
  return s == std::string(s.rbegin(), s.rend());
}

int main(){
  float first = f1(5);
  std::cout << first << std::endl << std::endl;

  float second = f2(10);
  std::cout << second << std::endl << std::endl;

  float third = f3(45, 35);
  std::cout << third << std::endl << std::endl;

  float fourth = f4(15);
  std::cout << fourth << std::endl << std::endl;
  
  
  std::string number = "12121";
  bool fifth = is_palindrome(number);
  std::cout << std::boolalpha << is_palindrome(number) << std::endl << std::endl;

  return 0;
}
