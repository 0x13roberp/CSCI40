#include <iostream>

// if the number is odd. then goes to the line above. that means that it doesnt print the "i" in the line below. it only will print even numbers.

int main(){
  for(int i = 0; i < 100; i++){ // WOW
    if(i % 2 == 1) continue; // goes to WOW
    std::cout << i << std::endl;
  }

  float sum = 0;
  int count = 0;

  while(true){
    int temp = 0;

    std::cout << "(0 to quit) please enter a temperature for the water between 0 and 100: ";
    std::cin >> temp;
    if(!std::cin){
      std::cout << "BAD INPUT!!\n";
      return 1;
    }
    
    if(temp == 0){
      break;
    }
    if(temp < 0){
      std::cout << "that's hielo!!\n";
      continue; // goes to the beggining again
    }
    if(temp > 100){
      std::cout << "that's vapor!!\n";
      continue;
    }
    
    count ++;
    sum += temp;
  }
  if(count == 0){
    std::cout << "no given data!" << std::endl;
    return 1;
  }

  std::cout <<"average temperature: " << sum/count << std::endl;

  return 0;
}
