#include <iostream>
#include <vector>
#include <string>
#include <cmath>

//You're a square!
bool is_square(int n)
{
    for (int i = 0; i < 10000; ++i) {
        if (n == i * i) return true;
    }
    return false;
}

//Sum of two lowest positive integers
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long first = numbers[0], sec = numbers[1];
    for (int i = 2; i < numbers.size(); ++i) {
        if (first > sec) {
            if (numbers[i] < first) first = numbers[i];
            else if (numbers[i] < sec) sec = numbers[i];
        }
        else {
            if (numbers[i] < sec) sec = numbers[i];
            else if (numbers[i] < first) first = numbers[i];
        }
    }
    return first + sec;
}

//Shortest Word
int find_short(std::string str)
{
    std::vector <std::string> strvec;
    std::string tmpstring = "";
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') tmpstring += str[i];
        else {
            strvec.push_back(tmpstring);
            tmpstring = "";
        }
    }
    strvec.push_back(tmpstring);
    int ans = strvec[0].size();
    for (int i = 1; i < strvec.size(); ++i) {
        if (strvec[i].size() < ans) ans = strvec[i].size();
    }
    return ans;
}

//Are the numbers in order?
bool isAscOrder(std::vector<int> arr)
{
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) return false;
    }
    return true;
}

//Anagram Detection
bool isAnagram(std::string test, std::string original) {
    if (test.size() != original.size()) return false;
    std::vector <char> bookvi;
    for (int i = 0; i < test.size(); ++i) {
        if ((int)test[i] < 97) test[i] += 32;
        bookvi.push_back(test[i]);
    }
    for (int i = 0; i < original.size(); ++i) {
        if ((int)original[i] < 97) original[i] += 32;
    }

    for (int i = 0; i < original.size(); ++i) {
        for (int j = 0; j < bookvi.size(); ++j) {
            if (original[i] == bookvi[j]) {
                bookvi[j] = '0';
                j = bookvi.size();
            }
        }
    }
    for (int i = 0; i < bookvi.size(); ++i) {
        if (bookvi[i] != '0') return false;
    }
    return true;
}

//Isograms
bool is_isogram(std::string str) {
    std::vector <char> bookvi;
    for (int i = 0; i < str.size(); ++i) {
        if ((int)str[i] < 97) str[i] += 32;
        bookvi.push_back(str[i]);
    }
    for (int i = 0; i < bookvi.size(); ++i) {
        for (int j = i + 1; j < bookvi.size(); ++j) {
            if (bookvi[i] == bookvi[j]) return 0;
        }
    }
    return 1;
}

//Complementary DNA
std::string DNAStrand(const std::string& dna)
{
    std::string ourdna = "";
    for (int i = 0; i < dna.size(); ++i) {
        switch (dna[i]) {
        case 'A':
            ourdna += 'T';
            break;
        case 'T':
            ourdna += 'A';
            break;
        case 'G':
            ourdna += 'C';
            break;
        case 'C':
            ourdna += 'G';
            break;
        }
    }
    return ourdna;
}

//Exes and Ohs
bool XO(const std::string& str)
{
    int cnto = 0;
    int cntx = 0;
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] == 'o') || (str[i] == 'O')) ++cnto;
        if ((str[i] == 'x') || (str[i] == 'X')) ++cntx;
    }
    return (cnto == cntx);
}

//Get the Middle Character
std::string get_middle(std::string input)
{
    std::string ourstr = "";

    if (input.size() % 2 == 0) {
        ourstr += input[input.size() / 2 - 1];
        ourstr += input[input.size() / 2];
    }
    else {
        ourstr += input[input.size() / 2];
    }
    return ourstr;
    // return the middle character(s)
}

//Reverse words
std::string reverse_words(std::string str)
{
    std::vector <std::string> strvec;
    std::string tmpstring = "";
    std::string ans = "";
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') tmpstring += str[i];
        else {
            strvec.push_back(tmpstring);
            tmpstring = "";
        }
    }
    strvec.push_back(tmpstring);
    for (int i = 0; i < strvec.size(); ++i) {
        ans += std::string(strvec[i].rbegin(), strvec[i].rend());
        ans += " ";
    }
    ans.erase(ans.end() - 1);
    return ans;
}

int main()
{
    return 0;
}