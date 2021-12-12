#include <string>

std::string remove_parentheses(const std::string &str)
{
  int count = 0;
  int place = 0;
  int endplace = 0;
  std::string newstr = str;
  for (int i = 0; i < int(newstr.length()); ++i){
    if (newstr[i] == '('){
      if (count == 0) place = i;
      count += 1;
    }
    else if (newstr[i] == ')'){
      count -=1;
      if (count == 0) endplace = i;
    }
    if (endplace!=0){
      newstr = (newstr.substr(0,place) + newstr.substr(endplace+1));
      place=0;
      endplace=0;
      i = 0;
    }
  }
  return newstr; // your code here
}