
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;
void Print (vector <int> vec){
	  for(auto i : vec){
			cout << i <<endl;
	  }
	  cout << "******" << endl;
}
void Print (set <int> xxl){
	  for(auto i : xxl){
			cout << i <<endl;
	  }
	  cout << "******" << endl;
}
void Print (unordered_set <int> xxs){
	  for(auto i : xxs){
			cout << i <<endl;
	  }
	  cout << "******" << endl;
}
int main()
{
	  vector <int> vec;
	  auto a = 0;
	  while (cin >> a){
			vec.push_back(a);
	  }
	  Print(vec);
	  set<int> xxl (vec.begin(), vec.end());
	  Print(xxl);
	  unordered_set<int> xxs (vec.begin(), vec.end());
	  Print(xxs);
 }

