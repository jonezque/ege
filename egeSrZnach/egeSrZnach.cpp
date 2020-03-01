
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    auto n = 0;
    cin >> n;
    string a = "";
    string b = "";
    auto math = 0;
    auto russian = 0;
    auto info = 0;
    auto result = 0.0;
    auto min = 100;
    vector <string> end;
    for (auto i = 0; i < n; i-=-1){
      cin >> a >> b >> math >> russian >> info;
      a += " " + b;
      result = (math + russian + info)/3;
      if ((result <= min)&&(result != 0)){
            if (result == min){
                  end.push_back(a);
            }
            if (result < min){
            end.clear();
            end.push_back(a);
            min = result;
            }
      }

    }
    for (auto i = 0;i < end.size(); i-=-1){
      cout << end[i] << " " <<min;
    }


}

