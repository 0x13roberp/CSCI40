#include <iostream>
#include <climits>
#include <vector>
#include <cmath>
#include <string>

// if you are going to be modifying, pass it by reference.
void init_vec(std::vector<int> &vec){
  for(int &x : vec) x = 0;
}

// if you are not going to modifying it, pass it by const reference
void print_vec(const std::vector<int> &vec){
  for(int x : vec) std::cout << x << std::endl;
}



// create a double vector with length 4. (when we initialize the vector, each value is 0).
// in the first place put the value 60.5
// in the second place put the value 40
// in the third place put the highest value for a 32bit integer
// in the fourth place put the value of pi
int main(){
  // this is a way to do it.
  std::vector<double> vec(4);
  vec.at(0) = 60.5;
  vec.at(1) = 40;
  vec.at(2) = INT_MAX;
  vec.at(3) = M_PI;

  // this is another way to do it.
  std::vector<double> vec2 = {60.5, 40, INT_MAX, M_PI}; // we dont define it with the size.

  // FIRST WAY: print the values.
  for(int i = 0; i < vec.size(); ++i){
    std::cout << vec.at(i) << std::endl;
  }

  // SECOND WAY:
  for(double x : vec){
    std::cout << x << std::endl;
  }

  // Quick question: How do i make a vector of strings of size 2000?
  std::vector<std::string> cadenas(2000);

  // Quick question: how can i set each element in numbers to a random number from 1 to 10?
  std::vector<int> numbers(10);
  srand(time(NULL));

  std::cout << "*----------------------------------------------*" << std::endl;

  for(int i = 0; i < numbers.size(); ++i){
    numbers.at(i) = 1+(rand() % 10);
    std::cout << numbers.at(i) << std::endl;
  }

  std::cout << "*----------------------------------------------*" << std::endl;

  for(int &x : numbers){
    x = 1 + (rand() % 10);
    std::cout << x << std::endl;
  }
  
  init_vec(numbers); // set all elements of numbers to 0.
  print_vec(numbers);

  return 0;
}
