#include <iostream>
#include <string> // work with strings

  // learning points
  // 1- the compilation process
  // 2- how to output to the screen using cout 
  // 3- variables
  // 4- algebra
  // 5- input
 
int main(){
  // int, doubles and strings
  // a "type" is what sort of data the variable holds
  // an int holds whole numbers from -2.1B to + 2.1B
  // a double holds scientific notation
  // a string holds text
  
  // type(int) variable_name(x) = initializer(22)
  // it also is given a RAM address
  int x = 22;
  int y = 13;
  std::cout << x << std::endl;
  std::cout << x + y << std::endl;

  double pi = 3.1416;
  double lr = -0.0001;
  std::cout << pi*lr << std::endl;

  std::string band = "spliknot";
  std::cout << band << std::endl;

  unsigned positive = 400; // holds numbers from 0 to 4B
  
  // algebra: + - * / % 
  std::cout << y << " divides into " << x << " " << x/y << " times" << std::endl;
  std::cout << "with " << x%y << " left over" << std::endl;

  // input
  int age;
  
  std::cout << "tell me your age: "; std::cin >> age;

  // lab time: ask the user for their first name and last name, then print them out backwards
  std::string first_name;
  std::string last_name;

  std::cout << "tell me your first name: "; std::cin >> first_name;
  std::cout << "tell me your last name: "; std::cin >> last_name;

  std::cout << "you are " << first_name << " " << last_name << std::endl;
  return 0;
}
