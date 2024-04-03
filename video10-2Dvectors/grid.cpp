#include <ctime>
#include <iostream>
#include <vector>

char random_letter(){
  return 'A' + rand() % 26;
}

void print_vec(const std::vector<std::vector<char>> &vec){
  for(const auto &row : vec){
    for(char col : row){
      std::cout << col << " ";
    }
    std::cout << std::endl;
  }
}

int main(){
  srand(time(0));
  const int ROWS = 10;
  const int COLS = 20;

  std::vector<std::vector<char>> vec(ROWS,std::vector<char>(COLS));

  for(auto &row : vec){
    for(char &col : row){
      col = random_letter();
    }
  }
  print_vec(vec);
  return 0;
}
