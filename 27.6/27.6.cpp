
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	  vector <int> v;
	  auto n = 0;
	  while(cin >>n ){
			v.push_back(n);
	  }
	  std::stable_sort(v.begin(),v.end());
	  reverse(v.begin(),v.end());
	  auto cut = (v.size()*45) / 100;
	  auto min = v[cut-1];
	  auto b = cut;
	  while ((min == v[cut]) && (v[cut]>25)){
			cut++;
	  }
	  cout << v[cut - 1];
}