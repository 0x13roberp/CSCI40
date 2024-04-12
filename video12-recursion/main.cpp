#include <iostream>
#include <vector>

int entry; // Global variable. The global variables lives in the BSS Segment

// Every recursive solution needs two things:
// 1- A base case to stop the infinite loop.
// 2- An inductive step to always move toward the best case.
void foo(int x){
  if(x <= 0) return; // Base case.
  std::cout << "Hello World!\n";

  foo(x-1); // Inductive step.
}

int main(){
  // The Stack Segmentation has only 8MB of space.
  // The Heap Segmentation has unlimited.
  
  // This integer is 4 bytes of the Stack Memory. A double is 8 bytes of the Stack Memory.
  int x= 42; // Variable on the stack. Its much higher place than the BSS Segment
  std::cout << sizeof(x) << std::endl;
  double y = 3.14;
  std::cout << sizeof(y) << std::endl;

  std::cout << &x << std::endl; // Print the address on the Stack Segment. its on the top of the RAM. thats why its in 0x7FFF.... 

  // This is other pro for vecs:
  // Integer arrays are stored in the stack, so we have a defined amount of size that the arrays must respect.
  int arr[1000]{}; // On the Stack.
  // Vectors are in the Heap Segment, so its could has more data than an array.
  std::vector<int> vectorr(1000); // On the Heap.

  std::vector<int> vec = {13,21,33}; // The Heap Segment its where the vectors and hashmaps lives. its slightly above the BSS Segment.
  std::cout << vec.data() << std::endl;

  std::cout << &entry << std::endl; // Print the address on the BSS Segment.
  int *ptr = 0;
  std::cout << *ptr << std::endl; // You will get a Segmentation Fault because our program cant go into the bottom of the ram address. the OS will block it. that place in RAM is called NULL Segment.
  foo(4);
  return 0;
}
