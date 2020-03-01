

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	  vector <vector<int>> v;
	  auto n = 0;
	  cin >> n;
	  for (auto i = 0;i<n; i++){
			vector<int> a;
			int b,c;
			cin >> b >> c;
			a.push_back(b);
			a.push_back(c);
			v.push_back(a);
	  }
	  auto sum = 0;
	  auto min = 10000;
	  auto diff = 0;
	  for (auto i = 0; i < n; i++){
			diff = abs(v[i][0]-v[i][1]);
			if ((diff < min) && (diff % 4 != 0)){
				  min = diff;
			}
			if (v[i][0] > v[i][1]){
				  sum += v[i][0];
			}else{
				  sum += v[i][1];
			}
	  }
	  if (sum % 4 == 0){
			sum -= min;
	  }
	  cout << sum;
}


