#include <iostream>
#include <vector>

// LAB TIME:
// 1- Make a vector of doubles of size 6.
// 2- cin into the vector 6 times, once for each element.
// 3- Print the vector out.
// 4- Print the min value, max value, and the average value in the vector.

// 3
void print_vector(const std::vector<double> &vec){
  for(const double &x : vec) std::cout << x << " ";
}

// 4
void vector_stats(const std::vector<double> &vec, double &avg, double &min, double &max){
  double sum = 0.0;
  min = 0.0;
  max = 0.0;

  for(const double &x : vec){
    sum += x;
    if(x < min) min = x;
    if(x > max) max = x;
  }

  avg = sum / vec.size();
}

int main(){
  // 1
  std::vector<double> vec(6);

  // 2
  for(int i = 0; i < vec.size(); ++i){
    double value = 0.0;
    std::cin >> vec.at(i);
    
    if(!std::cin) return 1;
  }

  double avg, min, max = 0.0;

  std::cout << "values of the vector made: {";
  print_vector(vec);
  std::cout << "}\n";

  vector_stats(vec, avg, min, max);
  std::cout << "min value: " << min << std::endl;
  std::cout << "max value: " << max << std::endl;
  std::cout << "average value: " << avg << std::endl;
  return 0;
}
