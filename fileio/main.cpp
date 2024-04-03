#include <iostream>
#include <numeric>
#include <vector>
#include <fstream>

// if we change the values in temp.txt, we dont need to recompile this file.
int main(){
  std::ifstream ins("temp.txt"); // Learning point #1: How to you open a file for reading.
  int x = 0, y = 0;
  ins >> x >> y;
  std::cout << x + y << std::endl;

  // Sharp edge warning: It  will erase your file!!!
  std::ofstream outs("temp2.txt"); // Learning point #2: How to open a file for writing.
  outs << x + y << std::endl;

  std::vector<int> vec;
  // Learning point #3: How do we know then we are done reading from a file?
  while(true){
    int x = 0;
    ins >> x;
    if(ins.eof()){ // If we only want to check for the end of file.
      break; 
    }
    if(!ins){ // An error occured, either a string into the int, or we hit the end of the file.
      exit(1);
    }
    vec.push_back(x);
  }
  std::cout << accumulate(vec.begin(), vec.end(), 0) << std::endl;
  return 0;
}
