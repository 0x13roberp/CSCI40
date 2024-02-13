#include <iostream>

int main(){
  int x = 0;
  int y = 0;

  std::cout << "give me one number: ";
  std::cin >> x;
  std::cout << "give me a second number: ";
  std::cin >> y;

  if(x+y > 20 && x+y < 100){
    std::cout << "(x + y) is higher than 20 and less than 100\n";
  }
  else if((x%2 == 0) || (y%2 == 0)){
    std::cout << "one of the numbers is even\n";
  }
  else if(x*y != 0){
    std::cout << "none of the numbers is zero\n";
  }
  return 0;
}
