#include <iostream>

int main(){
  // for loops:
  // 1- print the numbers from 1 to 10.
  for(int i = 0; i < 10; ++i)
    std::cout << i << std::endl;
  // 2- print the sum of the numbers from 1 to 10
  int sum = 0;
  for(int i = 0; i < 10; ++i){
    sum += i; 
  }
  std::cout << "sum: " << sum << std::endl;
  // while loops:
  // 3- add up all the numbers typed in by the user and print the sum. quit when they enter 0
  int input_sum = 0;
  while(true){
    int inputs = 0;
    std::cout << "enter 0 to quit!\n";
    std::cin >> inputs;
    input_sum += inputs;

    if(!std::cin){
      std::cout << "INVALID INPUT!\n";
    }
    
    if(inputs == 0) break;

    std::cout << "total sum: " << input_sum << std::endl;
  }
  // 4- as with #3 but print the average number (use decimal average, not integer average)
  int input_sum_average = 0;
  float num_of_inputs = 0;
  while(1){
    int inputs = 0;
    std::cout << "enter 0 to quit!\n";
    std::cin >> inputs;
    num_of_inputs += 1;
    input_sum_average += inputs;

    if(!std::cin){
      std::cout << "INVALID INPUT\n";
    }

    if(inputs == 0) break;

    std::cout << "total sum: " << input_sum_average << " average: " << input_sum_average/num_of_inputs << std::endl;
  }
}
