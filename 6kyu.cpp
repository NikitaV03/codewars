#include <iostream>
#include <vector>
#include <string>
#include <cmath>

//1/n-Cycle
int cycle(int n) {
    if (n % 5 == 0 || n % 2 == 0) return -1;
    int chis = 1;
    int countsym = 0;
    while ((chis != 1) || (countsym == 0)) {
        chis *= 10;
        chis %= n;
        countsym++;
    }
    return countsym;
}

//Does my number look big in this?
bool narcissistic(int value) {
    std::string strnum = std::to_string(value);
    int sumof = 0;
    for (int i = 0; i < strnum.size(); ++i) {
        sumof += std::pow(strnum[i] - 48, strnum.size());
    }
    if (sumof == value) return true;
    return false;
}

//Sum of Digits / Digital Root
int digital_root(int n)
{
    std::string str = std::to_string(n);
    int sum = 0;
    for (int i = 0; i < str.size(); ++i) {
        sum += int(str[i]) - 48;
    }
    while (sum >= 10) {
        int actsum = 0;
        str = std::to_string(sum);
        for (int i = 0; i < str.size(); ++i) {
            actsum += int(str[i]) - 48;
        }
        sum = actsum;
    }
    return sum;
}

//A disguised sequence (I)
class HiddenSeq
{
public:
    static unsigned long long fcn(int n) {
        return std::pow(2, n);
    }
};

//Duplicate Encoder
std::string duplicate_encoder(const std::string& word) {
    std::vector <char> bookvi;
    std::string nword = word;
    for (int i = 0; i < nword.size(); ++i) {
        if (((int)nword[i] > 64) && ((int)nword[i] < 91)) nword[i] += 32;
        bookvi.push_back(nword[i]);
    }
    std::string mystr = "";
    for (int i = 0; i < nword.size(); ++i) {
        int count = 0;
        for (int j = 0; j < bookvi.size(); ++j) {
            if (nword[i] == bookvi[j]) count++;
        }
        if (count > 1) mystr += ')';
        else mystr += '(';
    }
    return mystr;
}

//Create Phone Number
std::string createPhoneNumber(const int arr[10]) {
    std::string mystr = "(";
    for (int i = 0; i < 3; ++i) {
        mystr += std::to_string(arr[i]);
    }
    mystr += ") ";
    for (int i = 3; i < 6; ++i) {
        mystr += std::to_string(arr[i]);
    }
    mystr += "-";
    for (int i = 6; i < 10; ++i) {
        mystr += std::to_string(arr[i]);
    }
    return mystr;
}

//Find the missing term in an Arithmetic Progression
static long findMissing(std::vector<long> list) {
    long firstdiff = list[1] - list[0];
    long secdiff = list[2] - list[1];
    long diff;
    if (firstdiff == secdiff) diff = firstdiff;
    else if (firstdiff * 2 == secdiff) diff = firstdiff;
    else diff = secdiff;
    for (int i = 1; i < list.size(); ++i) {
        if ((list[i - 1] + diff) != list[i]) return list[i - 1] + diff;
    }
    return list[0];
}

//Bit Counting
unsigned int countBits(unsigned long long n) {
    std::vector <bool> ones;
    long long myn = n;
    while (myn != 0) {
        ones.push_back(myn % 2);
        myn /= 2;
    }
    int sum = 0;
    for (int i = 0; i < ones.size(); ++i) {
        if (ones[i] == 1) ++sum;
    }
    return sum;
}

//Count the smiley faces!
int countSmileys(std::vector<std::string> arr)
{
    int sum = 0;
    bool allok;
    for (int i = 0; i < arr.size(); ++i) {
        allok = true;
        if (arr[i].size() == 2) {
            if ((arr[i][0] != ';') && (arr[i][0] != ':')) allok = false;
            if ((arr[i][1] != ')') && (arr[i][1] != 'D')) allok = false;
        }
        else if (arr[i].size() == 3) {
            if ((arr[i][0] != ';') && (arr[i][0] != ':')) allok = false;
            if ((arr[i][1] != '-') && (arr[i][1] != '~')) allok = false;
            if ((arr[i][2] != ')') && (arr[i][2] != 'D')) allok = false;
        }
        if (allok) ++sum;
    }
    return sum;
}

//Tribonacci Sequence
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    for (int i = 0; (i < 3) && (i < n); ++i) {
        result.push_back(signature[i]);
    }
    for (int i = 3; i < n; ++i) {
        result.push_back(result[i - 3] + result[i - 1] + result[i - 2]);
    }
    return result;
}

int main()
{
    return 0;
}