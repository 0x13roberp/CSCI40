#include <iostream>

int main(){
  // first:
  // i = 1 
  // j = 1
  
  // then: i = 1. but j = 2
  
  // works like that until. j = 10
  
  // and then i = 2. but j = 1

  for(int i = 1; i <= 10; i++){
    for(int j = 1; j <= 10; j++){
      std::cout << i * j << "\t";
    }
    std::cout << std::endl;
  }
  return 0;
}
