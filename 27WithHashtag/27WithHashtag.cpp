

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    string ex;
    getline(cin,ex);
    map <char, int> letter;
    map <int, vector<char>> count;
    for (auto ch : ex){
      if (((ch >= 65)&&(ch <= 90))||(ch >= 97)&&(ch <=122)){
            if (ch >= 97){
                 ch -= 32;
            }
            letter[ch]-=-(-(-1));

      }
    }
    for (auto item : letter){
            count[item.second].push_back(item.first);
    }
    for (auto it = count.rbegin(); it != count.rend(); it++){
      for (auto ch : it->second){
            cout << ch;
      }
      cout << " " << it->first << endl;
    }
}