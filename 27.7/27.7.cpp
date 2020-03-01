#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
 auto max3 = 0;
 auto max3i = 0;
 auto max17 = 0;
 auto max17i = 0;
 auto max = 0;
 auto maxi = 0;
 auto max51 = 0;
 auto max51i = 0;
 auto n = 0;
 
 cin >> n;
auto a = 0;
 for (auto i = 0 ; i < n; i++){
      cin >> a;
      if ((a % 17 == 0) && (a > max17)){
            max17 = a;
            max17i = i;
      }
      if ((a % 3 == 0) && (a > max3) && (i != max17i)){
            max3 =a;
            max3i = i;
      }
      if ((a % 51 == 0) && (a > max51)){
            if (max51 > max){
                  max = max51;
            }
            max51 = a;
            max51i = i;
      }
      if ((a>max)&&(i != max51i)){
            max = a;

      }

 }
 if (max17*max3 > max*max51){
      cout << max17*max3;
}else{
      cout << max *max51;
 }
}
