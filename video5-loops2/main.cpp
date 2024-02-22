#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#include <cctype>

// Learning path
// #1- Strings - words, "0 or more characters"
// #2- CCType functions, toupper, tolower, isalpha, isdigit
// #3- Range-based for loop (foreach loop)

int main(){
  // with string type, cin only shows until the first space
  std::string band;

  std::cout << "THIS INPUT USER WILL BE USING GETLINE\n";
  std::cout << "tell me your favorite band and your fav number: ";
  std::getline(std::cin, band);
  std::cout << "you say: " << band;
  std::cout << "\n\n\n";

  std::string band2;

  std::cout << "THIS INPUT USER WILL BE USING CIN\n";
  std::cout << "enter the same information: ";
  std::cin >> band2;
  std::cout << "you say: " << band2 << std::endl;

  // print a character between every letter of the string 
  // option 1: regular for loop 
  for(int i = 0; i < band2.size(); ++i){
    std::cout << band2.at(i) << " :P ";
  }
  std::cout << std::endl;

  // option 2: range-based for loop 
  for(char c: band2){
    std::cout << c << " :D ";
  }
  std::cout << std::endl;

  for(int i = 0; i < band2.size(); ++i){
    // toupper returns a integer, thats why we need to cast the variable.
    band2[i] = toupper(band2[i]); 
  }
  std::cout << "to upper band2 : " << band2 << std::endl;

  // this is oher way to do the same, but with reference. the ampersand means that change the k value of the string itself. like a inplace=true
  for(char &k: band){
    k = toupper(k);
  }
  std::cout << "to upper band: " << band << std::endl;
  
  // isalpha tells you if a character is a letter, and isdigit tells you if a character is a number.
  int alphas = 0; // count the total of characters
  int digits = 0; // count the total of numbers

  for(char j: band)
    if(isalpha(j)) ++alphas;

    else if(isdigit(j)) ++digits;
  
  std::cout << "total letters in band: " << alphas << std::endl << "total numbers in band: " << digits << std::endl;

  return 0;
}
