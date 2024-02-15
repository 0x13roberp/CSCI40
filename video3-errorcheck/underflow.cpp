#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){
  srand(time(0));

  // short sword of speed. baldurs gate 1 bug.
  // when the charges was 1. and you recieved a hit, it could be 0 or overflow the value.
  unsigned short charges = 4; // 0 to 65535.
  int charges_to_drain = rand() % 4 + 1;

  // underflow.
  charges -= charges_to_drain;
  long long value = charges * 1000;
  
  std::cout << value << std::endl;

  // overflow.
  unsigned short rob = 65535;
  std::cout << "maximum value possible: " << rob << std::endl;
  rob++;
  std::cout << "maximum value possible plus one: " << rob << std::endl;
  return 0;
}
