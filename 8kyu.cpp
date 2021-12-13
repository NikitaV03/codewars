#include <iostream>
#include <vector>
#include <string>
#include <cmath>

//Twice as old
int twice_as_old(int dad, int son) {
    return (dad - 2 * son >= 0) ? dad - 2 * son : -dad + 2 * son;
}

//Convert boolean values to strings 'Yes' or 'No'.
std::string bool_to_word(bool value)
{
    return (value == true) ? "Yes" : "No";
}

//Opposite number
int opposite(int number)
{
    return -number;
}

//Convert a Number to a String!
std::string number_to_string(int num) {
    return std::to_string(num);
}

//Remove String Spaces
std::string no_space(std::string x)
{
    std::string ans = "";
    for (int i = 0; i < x.size(); ++i) {
        if (x[i] != ' ') ans += x[i];
    }
    return ans;
}

//Reversed Strings
std::string reverseString(std::string str)
{
    std::string ourstring = "";
    for (int i = str.size() - 1; i >= 0; --i) {
        ourstring += str[i];
    }
    return ourstring;
}

//Even or Odd
std::string even_or_odd(int number)
{
    return (number % 2 == 0) ? "Even" : "Odd";
}

//Century From Year
int centuryFromYear(int year)
{
    return (year - 1) / 100 + 1;
}

//Basic Mathematical Operations
int basicOp(char op, int val1, int val2) {
    switch (op) {
    case '+':
        return val1 + val2;
    case '-':
        return val1 - val2;
    case '*':
        return val1 * val2;
    case '/':
        return val1 / val2;
    }
}

//Grasshopper - Summation
int summation(int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

int main()
{
    return 0;
}