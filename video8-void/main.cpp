#include <iostream>
#include "/home/rober/libraries/read.h"

// Learning point #1: A pure function has no "side effect", in other words, it only modifies variables in its scope.
// a pure function its like a function in algebra.

// Learning point #2: A void function can be considered a saved block of code that is rerun every time you call the function.
// it doesnt returns a value.

// Learning point #3: Call by values vs Call by reference

// PURE 
int f(int x){
  int y = x*3;
  x *= 2;

  return x + y;
}

// Procedure or Subroutine
void ReadXY(){
  int x = read();
  int y = read();

  if(x < y) ; // turn on the radiator.
  else if(x == y) return; // turn off the radiator.
  else ; // turn on the heat.
  std::cout << "hi\n";
}

// DRY principle: dont repeat yourself.
int main(){
  // cannot cout the function.
  // std::cout << ReadXY();

  std::cout << f(10) << std::endl; // with this function, you can.
  
  // 1- name of the variable: bob 
  // 2- type of the variable: integer
  // 3- value of the variable: 10 
  // 4- address of the variable: ??? 

  // 8 4 2 1
  // 1 0 1 0
  int bob = 0b1010;
  int rob = 21 << 1; // tomamos el valor binario de 21 y lo movemos hacia la izq un lugar. 10101 = 21 | 101010 = 42

  std::cout << bob << std::endl; // this must return 10. above we have 1 in 8 & 2.    8+2 = 10
  std::cout << rob << std::endl;

  std::cout << "*---------------------------------*" << std::endl;
  std::cout << &bob << std::endl; // print the address of the variable.

  std::cout << "*---------------------------------*" << std::endl;
  std::cout << *&bob << std::endl; // print the value that its in that address. 

  std::cout << "*---------------------------------*" << std::endl;
  std::cout << &bob << std::endl; // 0x7ffce050c4f0
  std::cout << &rob << std::endl; // 0x7ffce050c4f4

  *(&bob+1) = 666; // we change the value of rob indirectly by modifying the value at the address of bob + 1 int(4bytes), which in this case is the address of rob.
  
  std::cout << bob << std::endl;
  std::cout << rob << std::endl;

  std::cout << "*---------------------------------*" << std::endl;
  std::cout << f(bob) << std::endl; // this is call by value. because we are creating a new variable(x) [only its created in the function f, its not created in the main function], but we are not changing the value of bob, we are just using its value.
 

  return 0; 
}
