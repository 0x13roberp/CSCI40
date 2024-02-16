#include <iostream>

  // Learning points:
  // #1 doubly nested for loop
  // #2 while loops
  // #3 break
  // #4 continue
  
  // Lab time
  // #1: Print ":) :P :D" to the screen 10 times
  // #2: print all even numbers between 0 and 100
  // #3: print the following:
  // .
  // ..
  // ...
  // ....
  // ..... to 10

int main(){
  for(int i = 0; i < 10; i++){
    std::cout << ":) :P :D" << std::endl;
  }  

  for(int i = 0; i < 101; i++){
    if(i % 2 == 0){
      std::cout << i << std::endl;
    }
  }

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < i; j++){
      std::cout << ".";
    }
    std::cout << std::endl;
  }
  return 0;
}
