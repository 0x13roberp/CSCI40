#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

int main(){
  std::string bio = "was a Hungarian and American mathematician, physicist, computer scientist, engineer and polymath. He had perhaps the widest coverage of any mathematician of his time,[9] integrating pure and applied sciences and making major contributions to many fields, including mathematics, physics, economics, computing, and statistics. He was a pioneer in building the mathematical framework of quantum physics, in the development of functional analysis, and in game theory, introducing or codifying concepts including cellular automata, the universal constructor and the digital computer. His analysis of the structure of self-replication preceded the discovery of the structure of DNA During World War, von Neumann worked on the Manhattan Project. He developed the mathematical models behind the explosive lenses used in the implosion-type nuclear weapon. Before and after the war, he consulted many organizations including the Office of Scientific Research and Development, the Army's Ballistic Research Laboratory, the Armed Forces Special Weapons Project and the Oak Ridge National Laboratory. At the peak of his influence in the 1950s, he chaired a number of Defense Department committees including the Strategic Missile Evaluation Committee and the ICBM Scientific Advisory Committee. He was also a member of the influential Atomic Energy Commission in charge of all atomic energy development in the country. He played a key role alongside Bernard Schriever and Trevor Gardner in the design and development of the United States first ICBM programs. At that time he was considered the nations foremost expert on nuclear weaponry and the leading defense scientist at the U.S. Department of Defense Von Neumanns contributions intellectual ability drew praise from colleagues in physics, mathematics. Accolades he received range from the Medal of Freedom to a crater on the Moon named in his honor";

  std::unordered_map<std::string, int> histogram;

  // Tokenizar la bio
  std::istringstream iss(bio);
  std::string word;

  // Extraction operation. esta extrayendo las palabras de bio y agregandolas al string word. despues esta incrementando en 1 cada palabra.
  while(iss >> word){
    histogram[word]++;
  }

  for(const auto &p : histogram){
    std::cout << "the word: " << p.first << " repeat: " << p.second << " times!";
    std::cout << std::endl;
  }

  return 0;
}
