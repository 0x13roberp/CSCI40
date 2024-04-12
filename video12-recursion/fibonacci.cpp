#include <iostream>

// This is a bad implementation of fibonacci because its an exponential order algorithm, and if the value gets really high it will stack overflow because we will ran out of numbers.
int fibonacci(int x){
  if(x <= 0) return 0; // Base case.
  if(x == 1) return 1; // Base case.

  // Inductive step.
  return fibonacci(x-1) + fibonacci(x-2);
}

int main(){
  std::cout << fibonacci(-1) << std::endl;
}
