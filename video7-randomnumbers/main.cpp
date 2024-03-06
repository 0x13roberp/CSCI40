#include <iostream>
#include <cmath>

// Learning point: #1 - rand makes a "random" number between 0 and some large number.
// #2 - computers are terrible at random numbers - rand is deterministic.

// funcion de dado.
int dado(){
  return rand() % 6 + 1;
}

// funcion de 10 hasta 20. return rand() % ?? + ??
int d10to20(){
  return rand() % 11 + 10;
}

int main(){
  srand(42); // seeds the random number generator.

  // some people do this:
  srand(time(NULL)); // but stills not random, because it changes at a second.

  int x = rand() % 13 + 1;
  std::cout << x << std::endl;

  int y = rand() % 13 + 1;
  std::cout << y << std::endl;
  return 0;
}
