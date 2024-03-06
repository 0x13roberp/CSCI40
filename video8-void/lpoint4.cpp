#include <iostream>
#include <string>

// Call by Value: ints, floats, doubles, chars... all primitives pass by value by default.
// Call by Const Reference: strings, vectors and other large things.
// Call by Reference: is used ONLY when you are wanting to modify the variable.(without the const at the beginning).
bool search_in_string(const std::string &str, char ch){
  for(char c : str)
    if(c == ch) return true;
  return false;
}

// This is call by reference. its modifying cadena in place, its not creating a copy.
void uppercase(std::string &cadena){
  for(char &c : cadena){
    c = toupper(c);
  }
}

int main(){
  // what we are doing here is that we have the value of the text allocated in an address of the ram, and if we define the function above without the &
  // we are telling to copy all the text and create another address in the function scope with the same value that we passed here.
  // in a few words we are duplicating the data. that with few data its ok, but if we have the entire wikipedia it would be pretty expensive.
  // that is why we want to pass str as reference. we need to add the const at the beginning.
  // call by const reference means that we are passing the string but we are not actually copy it.
  // instead of copying the whole text in the address, we are passing the address of where the text is. in this case we are passing the address of str.
  // we are passing a pointer to where the text is.
  std::cout << std::boolalpha << search_in_string("I recently got admitted into a MS in AI where I will do their HPC & Robotics track. My school is making a heavy push for integrating AI all over and we have a good partnership with Nvidia. I am about to finish my bachelor's degree in CS and I have a few jobs lined up and I am in the interview process for research", 'z') << std::endl;

  std::cout << "*-----------------------------*" << std::endl;
  std::string cadena = "hello world";
  uppercase(cadena);
  std::cout << cadena << std::endl;

  return 0;
}
