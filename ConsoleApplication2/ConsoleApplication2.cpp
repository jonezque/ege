#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string p(string a, string b);
string toString(int a) {
      stringstream ss;
      ss << a;
      string sa = ss.str();
      ss.str("");
      return sa;
}

int toInt(string a) {
      stringstream ss;
      ss << a;
      int sa;
      ss >> sa;
      ss.str("");
      return sa;
}

string addZero(int c) {
      string r;
      for(auto i = 0; i < c; i++){
            r += "0";
      }
      return r;
}

string f(string a, string b) {
      string result;
      string add;
      auto shift = 0;
      for(auto ita = a.rbegin(); ita != a.rend(); ita++) {
            string c;
            for(auto itb = b.rbegin(); itb != b.rend(); itb++) {
                  int x = *itb - 48;
                  int y = *ita - 48;
                  auto ad = add.size() ? toInt(add) : 0;
                  auto asd = x * y + ad;
                  auto str = toString(asd);
                  auto last = str.size() == 1 ? str[0]  - 48 : str[1]  - 48;
                  c = toString(last) + c;
                  add = str.size() == 2 ? toString(str[0] - 48) : "";

            }
            if (shift) {
                  auto d = c + addZero(shift);
                  result = p(d, result);
            } else {
                  result = c;
            }
            shift++;
      }

      return add != "0" ? result : add + result;
}

string p(string a, string b) {
      string result;
      string add;
      auto shift = 0;
      int max = a.size() > b.size() ? a.size() : b.size();
      int ai = a.size() - 1;
      int bi = b.size() - 1;
      for(auto i = max + 1 ; i >= 0 ; i--) {
            auto as = ai >=0 ? a[ai--] - 48 : 0;
            auto bs = bi >= 0 ? b[bi--] - 48 : 0;
            auto ad = add.size() ? toInt(add) : 0;
            auto c = as + bs + ad;
            auto str = toString(c);
            auto last = str.size() == 1 ? str[0]  - 48 : str[1]  - 48;
            add = str.size() == 2 ? toString(str[0] - 48) : "";
            result = (i == 0 && toString(last) == "0") ? result:toString(last) + result;
      }

      return result;
}

int main()
{
    cout << f("5", "100000000") << endl;
    int e =  5 * 100000000;
    cout << e << endl;
}


