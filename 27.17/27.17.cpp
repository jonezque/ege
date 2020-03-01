
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
      vector <int> categories{0,0,0,0};
      auto n = 0;
      cin >> n;
      string company = "";
      string shop = "";
      string name = "";
      auto price = 0;
      auto maxA = 0;
      auto maxB = 0;
      auto maxC = 0;
      auto maxD = 0;
      for (auto i = 0; i < n; i++){
            cin >> company >> shop >> name >> price;
            if (name == "A"){
                    if (price == maxA){
                        categories[0]++;
                  }
                  if (price > maxA){
                        categories[0] = 0;
                        categories[0]++;
                        maxA = price;
                  }
            }
            if (name == "B"){
                  if (price == maxB){
                        categories[1]++;
                  }
                  if (price > maxB){
                        categories[1] = 0;
                        categories[1]++;
                        maxB = price;
                  }
            }
            if (name == "C"){
                  if (price == maxC){
                        categories[2]++;
                  }
                  if (price > maxC){
                        categories[2] = 0;
                        categories[2]++;
                        maxC = price;
                  }
            }
            if (name == "D"){
                  if (price == maxD){
                        categories[3]++;
                  }
                  if (price > maxD){
                        categories[3] = 0;
                        categories[3]++;
                        maxD = price;
                  }
            }
      }
      for (auto i : categories){
            cout << i << " ";
      }
}
