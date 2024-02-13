#include <iostream>

int main(){
  int power = 0;
  
  std::cout << "what's your power level?";
  std::cin >> power;
  if(power >= 100){
    std::cout << "you can fight the final boss!\n";
  }
  else{
    std::cout << "you don't have yet the power to fight the boss!\n";
  }
  return 0;
}
