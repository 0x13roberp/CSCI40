#include <iostream>
#include <vector>

// 1- input a number
// 2- output ALL factors of that number
// 3- print if it is prime or not

int main(){
  int x, y = 0;
  bool isprime = true;
  
  std::cout << "enter a number: \n";
  std::cin >> x;
  std::cout << "enter another number: \n";
  std::cin >> y;

  for(x; x > y; --x){
    if(x % y == 0){
      std::cout << x << " it is a factor\n";
    }
    else{
      std::cout << x << " it is not a factor\n";
    }
  }
  return 0;
}
