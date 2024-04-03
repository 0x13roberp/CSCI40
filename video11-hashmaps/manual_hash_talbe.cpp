#include <ios>
#include <iostream>
#include <climits>
#include <vector>

// This is a manual hashtable O(1) algorithm
bool is_in(std::vector<bool> &vec, int x){
  if(x < 0 || x > vec.size()) return false;
  return vec.at(x);
}

int main(){
  std::vector<bool> vec (INT_MAX); 

  while(1){
    int number = 0;
    std::cout << "Please enter a number to add in the manual hashtable: ";
    std::cin >> number;
    if(!std::cin){
      std::cout << "Enter a valid value!\n";
      return 1;
      }
    if(number < 0) break;
    vec.at(number) = true;
    }
  
  int number = 0;
  std::cout << "Please enter a number to search in the hashtable: ";
  std::cin >> number;
  if(!std::cin){
    std::cout << "Enter a valid value!\n";
    return 1;
    }

  std::cout << std::boolalpha << is_in(vec, number) << std::endl;
}
