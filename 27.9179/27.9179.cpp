
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    auto n = 0;
    cin >> n;
    vector <int> v;
    auto minSr = 10001.0;
    for (auto i = 0; i < 9; i++){
      auto a = 0;
      cin >> a;
      v.push_back(a);
    }
    for (auto i = 9; i < n;i++){
            auto a = 0;
            cin >> a;
            if((v[0] + a)/2.0 < minSr){
                  minSr = (v[0] + a)/2.0;
            }
            if(v[0]< v[1]){
                  v[1] = v[0];
            }
            for(auto j = 1 ; j < 8;j++ ){
                  v[j] = v[j + 1];
            }
            v[8] = a;
    }
    cout << minSr;
}