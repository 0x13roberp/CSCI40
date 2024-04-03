#include <iostream>
#include <unordered_set>

// Hashtables are O(1)
// Cannot have a duplicated value in a set.
int main(){
  std::unordered_set<int> nums = {10, 20, -30, 13, 24, 23, 0, 1};
  
  while(1){
    int number = 0;
    std::cout << "(0 to quit) - Please enter a number to add to the hashtable: ";
    std::cin >> number;
    if(number == 0) break;
    if(!number){
      std::cout << "Enter a valid number!\n";
      return 1;
    }
    nums.insert(number); // this is how we add the number. like push back with vectors.
  }

  while(1){
    int number = 0;
    std::cout << "(0 to quit) - Please enter a number to delete to the hashtable: ";
    std::cin >> number;
    if(number == 0) break;
    if(!number){
      std::cout << "Enter a valid number!\n";
      break;
    }
    nums.erase(number); // this is how we delete the number.
  }

  while(1){
    int number = 0;
    std::cout << "(0 to quit) - Please enter a number to search into the hashtable: ";
    std::cin >> number;
    if(number == 0) break;
    if(!number){
      std::cout << "Enter a valid number\n";
      break;
    }
    // contains is C++20 function, so neovim will yell
    // std::cout << std::boolalpha << nums.contains(number) << std::endl;
    std::cout << std::boolalpha << (bool) nums.count(number) << std::endl; // search for a value in the hashtable, it tells if the number is in or not.
    // we casted it to bool becuase count returns a integer.
  }

  return 0;
}
