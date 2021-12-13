#include <string>
#include <cstring>
int countValleys(const std::string& s){
  std::string str = s;
  int vhod = 0;
  int vihod = 0;
  int lvl = 0;
  for (int i = 0;i<str.length();++i){
    vhod = vihod;
    if (str[i] == 'U') vihod+=1;
    if (str[i] =='D') vihod-=1;
    if ((vhod == -1)&&(vihod==0)){
      lvl++;
    }
  }
  return lvl;
}