
#include <iostream>
#include <vector>
using namespace std;
int example1(vector <int> v){
	  auto min1 = v[0];
	  auto min2 = v[1];
	  for (auto i = 2; i < v.size(); i++){
			if (v[i] < min1) {
				  if (min2 > min1) {
						min2 = min1;
				  }
				  min1 = v[i];
			}
	  }

	  return min1 + min2;
}

int main()
{
	  vector <int> a;
	  auto n = 0;
	  cin >> n;
	  for (auto i = 0; i < n; i++){
			int  b;
			cin >> b;
			a.push_back(b);
	  }

	  auto result = example1(a);
	  cout << result;
}