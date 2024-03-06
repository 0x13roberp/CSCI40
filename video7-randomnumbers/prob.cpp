#include <iostream>
#include <cmath>

// write these functions:
// 1. d10() returns a number from 1 to d10
// 2. Xd6(int x) that rolls X d6's and adds them together and return the result
// 3. advantage() that rolls 2d20 and picks the higher result.
// 4. uniform(int min, int max) - returns a random number between min and max (min <= x <= max)

int d10(){
  return rand() % 10 + 1;
}

int Xd6(int x){
  int count = 0;
  
  for(int i = 1; i <= x; i++){
    int roll = rand() % 6 + 1;
    count += roll;
    std::cout << "Roll number: " << i << "\t Roll value: " << roll << std::endl;
  }

  return count;
}

int advantage(){
  int higher = 0;

  for(int i = 0; i < 10; ++i){
    int actual = rand() % 20 + 2;
    std::cout << "Actual number: " << actual << std::endl;

    if(actual > higher) higher = actual;
  }
  
  std::cout << "\nHigher value: ";
  return higher;
}

int uniform(int min, int max){
  if(min > max){
    std::cerr << "MIN VALUE MUEST BE LOWER THAN MAX VALUE!\n";
    return 1;
  }

  int x = rand() % (max - min + 1) + min;

  return x;
}

int main(){
  srand(time(NULL));
  std::cout << d10() << std::endl << std::endl;

  std::cout << Xd6(15) << std::endl << std::endl;

  std::cout << advantage() << std::endl;
  
  std::cout << uniform(10, 20) << std::endl;

  return 0;
}
