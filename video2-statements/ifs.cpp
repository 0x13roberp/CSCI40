#include <iostream>

int main(){
  int age = 0;
  std::cout << "tell me your age: ";
  std::cin >> age;

  if(age > 18){
    std::cout << "you can vote!" << std::endl;
  }  
  return 0;
}
