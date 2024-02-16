#include <iostream>

// Rule of thumb for loops
// for loops: i use them when i know how many times the loop will run. this could either be fixed, or in a variable.
// while loops: i use when i don't know how many times this is going to run.

int main(){
  int target = 50;

  while(true){
    int guess = 0;
    
    std::cout << "tell me the secret number: ";
    std::cin >> guess;

    if(guess < target){
      if(!std::cin){
        std::cout << "invalid data type! :c" << std::endl;
        return 1;
      }
      std::cout << "lower!\n";
      }
    else if(guess > target){
        std::cout << "higher!\n";
      }
    else{
      std::cout << "you nailed it!\n";
      break;
    }
  }

  std::cout << "this is outside the loop\n";

  return 0;
}
