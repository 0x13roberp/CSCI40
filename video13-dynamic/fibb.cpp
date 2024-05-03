#include <cassert>
#include <iostream>
#include <vector>

using u64 = unsigned long long; // type alias

// Global varibles 
const int SIZE = 100;

// Dynamic programming.
// If you ever repeat yourself a computation, then write it down.
// from O(2^n) to O(n)

// Static varibles are global variables that can only be accessed within the function theyre declared in
u64 fib(u64 x){
  assert(x < SIZE); // if x is greater than 46, kill the program
  static std::vector<u64> vec(SIZE); // We use static bc we dont want to have the vector as a global vector. and if we dont use static and we define the vector in this function. it will reset the vector every time the function is called. 
  if(x <= 1) return 1;
  if(vec.at(x) != 0) return vec.at(x);
  vec.at(x) = fib(x-1) + fib(x-2);
  return vec.at(x);
}

int main(){
  for(u64 i = 0; i < SIZE; i++){
    std::cout << i << ": " << fib(i) << std::endl;
  }

  return 0;
}
