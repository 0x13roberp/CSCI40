#include <iostream>
#include <unordered_map>
#include <string>

int main(){
  // The key is of type string and the value is of type int.
  // You use the key to SEARCH, INSERT AND DELETE for the values.
  std::unordered_map<std::string,int> months;
  months["Jones"] = 1;
  months["GSP"] = 2;
  months["Mighty"] = 3;
  months["Anderson"] = 4;
  months["Aldo"] = 5;
  months["Cejudo"] = 6;
  months["Khabib"] = 7;
  months["Usman"] = 8;
  months["Adesanya"] = 9;
  months["Stipe"] = 10;
  months["Volkanovski"] = 11;
  months["Connor"] = 12;
  months["Usman"]++; // This is how you increment the value in 1
  months.insert({"Gaethje", 13}); // Insert takes a pair as a parameter
  months.erase("Connor"); // Erase only takes a key

  std::string mes;
  std::cout << "Enter the name of the fighter and ill tell you its rank: ";
  std::cin >> mes; 
  
  // WARNING! 
  // If you do this, and mes is not in the hashmap, then it inserts it!
  
  // RULE FOR HASHMAPS: IF YOU USE [] to read from the hashmap, use .contains or .count first!
  if(months.count(mes))
    std::cout << months[mes] << std::endl;
  else 
    std::cout << mes << " Not found!\n";

  // p is a pair<string, int>, p.first holds the key, p.second holds the value.
  for(auto p : months){
    std::cout << p.first << " is the number " << p.second << " of the world\n";
    std::cout << std::endl;
  }
  return 0;
}
