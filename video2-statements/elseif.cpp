#include <iostream>

int main(){
  int years = 0;
  
  std::cout << "how many years are you been programming? ";
  std::cin >> years;

  if(years >= 8){
    std::cout << "plenty experience, you can be senior!\n";
  }
  else if(years > 4 && years < 8){
    std::cout << "you got experience enough to be a mid programmer!\n";
  }
  else{
    std::cout << "you got a few years, you are still junior!\n";
  }
  return 0;
}
