#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto n = 0;
    string surn = "";
    string name = "";
    auto r = 0;
    auto m = 0;
    auto in = 0;
    auto sum = 0;
    auto max = 0;
    cin >> n;
    vector <string> res;
    for (auto i = 0; i < n; i+=1){
      cin >> surn >> name >> r >> m >> in;
      surn +=" " + name;
      sum = r+m+in;
            if (sum > max){
                  res.clear();
                  max = sum;
            }
            if (sum == max){
                  res.push_back(surn);
            }
    }
    for (auto i : res){
      cout << i << " " << max << endl;
    }


}

