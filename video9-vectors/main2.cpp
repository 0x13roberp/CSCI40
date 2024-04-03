#include <iostream>
#include <vector>
#include "/home/rober/libraries/read.h"
#include <algorithm>

// Learning points:
// #1 - Vectors can be variable size. arrays cannot, sorta.
// #2 - Vectors of size 0 are actually really useful.
// Arrays of size 0 are pointless and probably illegal
// Vectors are growable arrays.
int main(){
  std::vector<double> vec; // initialize as a vector of size 0.
  while(true){
    double x = read("Please enter a tax receipt (0 to quit): ");
     if(!x or !std::cin) break; // mean the same as if x == 0....?
     if(x < 0.01 or x > 10'000'000){
       std::cout << "Invalid amount try again!\n";
       continue;
     }

     vec.push_back(x); // adds to the vector. at the end.
  }

  // LAB TIME:
  // #1: Add up all the numbers in vec and print it.
  double sum = 0;
  for(double x : vec) sum += x;
  std::cout << "Total sum: " << sum << std::endl;
  // #2: Product all the numers in vec and print it.
  double prod = 1;
  for(double x : vec) prod *= x;
  std::cout << "Total product: " << prod << std::endl;
  // #3: Sort all the elements in the vector.
  std::sort(vec.begin(), vec.end());
  // #4: Print the vector.
  std::cout << "Values in the vector: \n";
  for(int i = 0; i < vec.size(); ++i){
    std::cout << vec.at(i) << std::endl;
  }
  std::cout << std::endl;
  // #5: Print the minimum and the maximum and the average.
  // WE GOT THE FUNCTION WAY AND THE INDEX WAY. BECAUSE ITS ALREADY SORTED.
  std::cout << "Minimum value: " << *std::min_element(vec.begin(), vec.end()) << std::endl; // we need the * because its a pointer, so we need to derefence it.
  std::cout << "Minimum value: " << vec.at(0) << std::endl;

  std::cout << "Maximum value: " << *std::max_element(vec.begin(), vec.end()) << std::endl;
  std::cout << "Maximum value: " << vec.at(vec.size()-1) << std::endl;
  std::cout << "Average value: " << sum / vec.size() << std::endl;

  return 0;
}
