#include <iostream>
#include <cmath>

// what is a function? its a saved algorithm.

int main(){
  // trig functions.
  float x = cos(0);
  x = sin(x);
  x = tan(x);
  x = atan(x);
  x = acosh(x);
  std::cout << x << std::endl; 

  // abs.
  float y = abs(-15.0);
  std::cout << y << std::endl;

  // pow and exponents and logs.
  float z = pow(2,3); // 2**3.
  std::cout << z << std::endl;
  z = log(10); // natural logarithm.
  std::cout << z << std::endl;
  z = log2(10);
  z = log10(10);

  // rounding functions.
  int z2 = 5.5;
  z2 = round(z2);
  z2 = ceil(z2);
  z2 = floor(z2);
  std::cout << z2 << std::endl;

  // bessel functions;
  double j = cyl_bessel_kl(5.3, 2);
  std::cout << j << std::endl;
}
