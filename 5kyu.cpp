#include <vector>
#include <string>

//Pick peaks
struct PeakData {
    std::vector<int> pos, peaks;
};

PeakData pick_peaks(const std::vector<int>& v) {
    PeakData result;
    result.pos = {};
    result.peaks = {};
    int yes = 0;
    int rememberi = 0;
    int chislo = 0;
    if (v.size() > 1) {
        for (unsigned long i = 1; i < v.size() - 1; ++i) {
            if (v.at(i - 1) < v.at(i)) yes = 1;
            if (yes) {
                if (v.at(i) > v.at(i + 1)) {
                    rememberi = i;
                    chislo = v.at(i);
                    yes = 0;
                }
            }
            while (rememberi != 0) {
                if (v.at(rememberi) == v.at(rememberi - 1)) {
                    rememberi--;
                }
                else {
                    result.pos.push_back(rememberi);
                    result.peaks.push_back(chislo);
                    rememberi = 0;
                }
            }
        }
    }
    return result;
}

//int32 to IPv4
std::string uint32_to_ip(uint32_t ip)
{
    std::string myip;
    size_t firstp = ip % 256;
    ip /= 256;
    size_t secondp = ip % 256;
    ip /= 256;
    size_t thirdp = ip % 256;
    ip /= 256;
    size_t fourthp = ip % 256;
    myip += std::to_string(fourthp);
    myip.push_back('.');
    myip += std::to_string(thirdp);
    myip.push_back('.');
    myip += std::to_string(secondp);
    myip.push_back('.');
    myip += std::to_string(firstp);
    return myip;
}

//Simple Pig Latin
std::string pig_it(std::string str)
{
    std::vector <std::string> strvec;
    std::string tmpstring = "";
    std::string ans = "";
    std::string actualstr = "";
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] < 65) && (str[i] != 32)) {
            strvec.push_back("");
            strvec[strvec.size() - 1] = str[i];
        }
        else if (str[i] != ' ') tmpstring += str[i];
        else if (tmpstring.size() > 0) {
            actualstr = "";
            for (int j = 1; j < tmpstring.size(); ++j) {
                actualstr.push_back(tmpstring[j]);
            }
            actualstr.push_back(tmpstring[0]);
            actualstr += "ay";
            strvec.push_back(actualstr);
            tmpstring = "";
        }
    }
    if (tmpstring.size() > 0) {
        actualstr = "";
        for (int j = 1; j < tmpstring.size(); ++j) {
            actualstr.push_back(tmpstring[j]);
        }
        actualstr.push_back(tmpstring[0]);
        actualstr += "ay";
        strvec.push_back(actualstr);
    }
    for (int i = 0; i < strvec.size(); ++i) {
        ans += strvec[i];
        ans += " ";
    }
    ans.erase(ans.end() - 1);
    return ans;
}

//Rot13
std::string rot13(std::string msg)
{
    std::string newstr = "";
    for (int i = 0; i < msg.size(); ++i) {
        if ((msg[i] >= 65) && (msg[i] <= 77)) {
            newstr += msg[i] + 13;
        }
        else if ((msg[i] >= 78) && (msg[i] <= 90)) {
            newstr += 65 + ((msg[i] + 13) % 91);
        }
        else if ((msg[i] >= 97) && (msg[i] <= 109)) {
            newstr += msg[i] + 13;
        }
        else if ((msg[i] >= 110) && (msg[i] <= 122)) {
            newstr += 97 + ((msg[i] + 13) % 123);
        }
        else newstr += msg[i];
        //65 90 97 122
    }
    return newstr;
}

//Maximum subarray sum
int maxSequence(const std::vector<int>& arr) {
    int sum;
    if (arr.size() > 0) {
        sum = arr[0];
        for (int i = 1; i <= arr.size(); ++i) {
            for (int j = 0; j < arr.size() - i + 1; ++j) {
                int nowsum = 0;
                for (int k = 0; k < i; ++k) {
                    nowsum += arr[j + k];
                    if (nowsum > sum) sum = nowsum;
                }
            }
        }
    }
    else sum = 0;
    return (sum > 0) ? sum : 0;
}

int main()
{
    return 0;
}