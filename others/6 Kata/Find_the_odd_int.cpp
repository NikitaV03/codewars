#include <vector>

int findOdd(const std::vector<int>& numbers){
  for (int i = 0;i < int(numbers.size());++i){
    int counter = 0;
    int numofi = numbers[i];
    for (int j = 0; j < int(numbers.size());++j){
      if (numbers[j] == numofi){
        counter+=1;
      }
    }
    if (counter % 2 == 1){
      return numofi;
    }
  }
  return 0;
}