class RGBToHex
{
  public:
  static std::string dectohex(int a){
    if (a<0) a = 0;
    if (a>255) a = 255;
    std::stringstream ss;
    ss<< std::hex << a; // int decimal_value
    std::string res ( ss.str() );
    std::transform(res.begin(), res.end(),res.begin(), ::toupper);
    return ((int)res.length()>1) ? res : "0"+res;
  }
  static std::string rgb(int r,int g, int b){
    std::string newstr = dectohex(r) + dectohex(g) + dectohex(b);
    return newstr;
  }
};