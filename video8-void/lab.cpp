#include <iostream>
#include <string>
#include <ctime>

// Lab Time: Mocking Spongebob - you randomly uppercase and lowercase each letter.
void spongebob_rand(std::string &name){
  for(char &c : name){
    if(rand() % 2){
      c = toupper(c);
    }
    else{
      c = tolower(c);
    }
  }
}

// Lab Time: Make an add function that outputs the result into the first parameter.
// Your code should set outval1 equal to x + y, and outval2 equal to x * y.
void add(int &outval1, int &outval2, int x, int y){
  outval1 = x + y;
  outval2 = x * y;
}


int main(){
  srand(time(0));

  std::string name = "spongebob";
  spongebob_rand(name);
  std::cout << name << std::endl;

  std::cout << "*----------------------------------*" << std::endl;
  int outval1, outval2;
  int x = 15, y = 20;

  add(outval1, outval2, x, y);

  std::cout << "result 1: " << outval1 << std::endl;
  std::cout << "result 2: " << outval2 << std::endl;

  return 0;
}
