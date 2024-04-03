#include <iostream>
#include <vector>

// pidra papel o tijera.
int main(){
  // Option -1: Use 2D arrays.
  // char arr[3][3];

  // Option 1: Use a 1D vector and pretend its 2D.
  const int ROWS = 3;
  const int COLS = 3;

  /*
  std::vector<char> vec(9); // 9 becuse its 3x3 grid.
  int row = 0;
  int col = 0;
  std::cout << "Please enter the row to put an X on: ";
  std::cin >> row;
  std::cout << "\nPlease enter the col to put an X on: ";
  std::cin >> col;
  vec.at(row*COLS+col) = 'X'; // algebraic expression to calculate the index.
  */ 

  // Option 2: Easier (little harder to declare, but easier to use) 2D "vector."
  std::vector<std::vector<char>> vec(ROWS, std::vector<char>(COLS));
  int row = 0;
  int col = 0;
  std::cout << "Please enter the row to put an X on: ";
  std::cin >> row;
  std::cout << "\nPlease enter the col to put an X on: ";
  std::cin >> col;
  
  vec.at(row).at(col) = 'X'; // it has bounds checking.
  // vec2[row[col]] = 'X'; // no bounds check, unsafe.

  // How to print it?
  // 2D data structures requires doubly nested loops.
  // Option 1: Trad for loop 
  for(int i = 0; i < ROWS; ++i){
    for(int j = 0; j < COLS; ++j){
      if(vec.at(i).at(j) == 0) std::cout << ".";
      std::cout << vec.at(i).at(j) << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "*-------------------------------------------------*\n";

  auto x = 5; // this is literally the same as typing int x = 5.
  /*
   
  // Option 2: Ranged for loop 
  for(const auto &row : vec2){ // auto means "deduce the type from the right hand side of the ="
    for(char col : row) {
      if(col == 0) std::cout << ".";
      std::cout << col << " ";
    }
    std::cout << std::endl;
  }

  */

  return 0;
}
