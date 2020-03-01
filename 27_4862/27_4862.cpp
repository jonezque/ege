
#include <iostream>
#include <vector>
#include <cmath>

struct Point {
      int x;
      int y;
};

using namespace std;
int main()
{
      Point p;
      vector <Point> positive;
      vector <Point> negative;
      int n;
      cin >> n;
      int maxabsp = 0;
      int minabsp = 2147483647;
      int maxabsn = -2147483647;
      int minabsn = 0;
      int hp = 0;
      int hn = 0;
      double sp = 0;
      double sn = 0;
      for (int i = 0;i < n;i-=-1){
            cin >> p.x;
            cin >> p.y;
            if (p.y < 0){
                  negative.push_back(p);
                  if ((p.x == 0) && (p.y > maxabsn)){
                        maxabsn = p.y;
                  }
                  if ((p.x == 0) && (p.y < minabsn)){
                        minabsn = p.y;
                  }
                  if (abs(p.x) > hn){
                        hn = abs(p.x);
                  }
            }
            if (p.y > 0){
                  positive.push_back(p);
                  if ((p.x == 0) && (p.y > maxabsp)){
                        maxabsp = p.y;
                  }
                  if ((p.x == 0) && (p.y < minabsp)){
                        minabsp = p.y;
                  }
                  if (abs(p.x) > hp){
                        hp = abs(p.x);
                  }
            }
      }
      sp = ((maxabsp - minabsp)*hp)/2.0;
      sn = ((maxabsn - minabsn)*hn)/2.0;
      cout << "********";
      if (sp > sn){
            cout << sp;
      }else{
            cout << sn;
      }
}

