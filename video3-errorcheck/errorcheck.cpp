#include <iostream>

// Learning points:
// #1 how to see if an error occured on input:
//    if(std::cin) {....}
// #2 Vetting input

int main(){
  // floats and doubles are never the same as inputs.
  // ex: if i input 0.0001 in console, that == 0.0001 will not be true
  float f = 0;
  std::cin >> f;
  if(f == 0.0001){
    std::cout << "YAY!" << std::endl;
  }

  if(!std::cin){
    std::cout << "ERROR!\n";
    return 1;
  }
  std::cout << f << std::endl;

  // make a variable of type int named grade; always initialize int variables in 0.
  int grade = 0;

  // ask the user to input a grade from 0 to 100
  std::cout << "input a grade from 0 to 100" << std::endl;
  std::cin >> grade;

  // Vet the input
  if(!std::cin or grade < 0 || grade > 100){
    std::cout << "BAD INPUT!" << std::endl;
    return 1;
  }
  std::cout << grade << std::endl;

  // if the user typed in:
  // 90 to 100: print A
  if(grade >= 90 && grade <= 100){
    std::cout << "A" << std::endl;
  }
  // 80 to 89: print B
  if(grade >= 80 && grade <= 89){
    std::cout << "B" << std::endl;
  }
  // 70 to 79: print C
  if(grade >= 70 && grade <= 79){
    std::cout << "C" << std::endl;
  }
  // 60 to 69: print D
  if(grade >= 60 and grade <= 69){
    std::cout << "D" << std::endl;
  }
  // 0 to 59: print F
  if(grade >= 0 and grade <= 59){
    std::cout << "F" << std::endl;
  }
  return 0;
}
