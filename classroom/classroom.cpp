

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;
class Student {
public:
      string school;
      string lastn;
};
int main()
{
      auto n = 0;
      cin >> n;
      string lastn;
      string school;
      int score;
      map <int, Student> result;
      for (auto i = 0; i < n; i++ ){
            cin >> school >> lastn >> score;
            Student s;
            s.lastn = lastn;
            s.school = school;
            result[score] = s;
      }
      for (auto i = result.rbegin();i != result.rend();i++){
            if (i->second.school== "gm2"){
                  cout << i->second.lastn << " " << i->first;
                  break;
            }
      }

}