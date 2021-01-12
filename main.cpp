#include <iostream>
#include <random>
#include <ctime>

int main(){
  std::mt19937 generator;
  generator.seed(std::time(0));

  std::uniform_int_distribution<uint32_t> randomnumber(1000,5000);
  int random = randomnumber(generator);

  for(int i = 0; i < 10; i++){
    random = randomnumber(generator);
    std::cout<< random <<std::endl;
  }

  return 0;
}