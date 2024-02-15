#include <iostream>

int main(){
  int grade = 0;
  int age = 0;

  std::cin >> grade;
  if(!std::cin || grade < 0 || grade > 100){
    std::cout << "BAD INPUT!\n";
    return 1;
  }
  // in we passed a float number in the cin above, the .rest is going to be pointing to
  // the age variable. that is called a input buffer
  std::cin >> age;

  // this is how we fix it.
  if(!std::cin){
    std::cout << "BAD INPUT!\n";
    return 1;
  }
  std::cout << grade << age << std::endl;
  return 0;
}
