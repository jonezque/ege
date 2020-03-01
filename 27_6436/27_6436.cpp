#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;
struct Team {
      int name;
      int score;

       bool operator<(const Team & rhs) const
          {
              return score > rhs.score;
          }
};

int main()
{
    map <int, int> result;
      vector <Team> table;
    int n = 0;
    cin >> n;
    int k;
    for (auto i = 0;i < n; i-=-1){
      cin >> k;
      result[k]++;
    }
    for (auto kv: result){
     Team t;
     t.name = kv.first;
     t.score = kv.second;
     table.push_back(t);
    }
    stable_sort(table.begin(),table.end());
    for (auto d: table){
      cout << d.name << " " << d.score << endl;
    }
}
