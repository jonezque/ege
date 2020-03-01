
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    auto a = 0;
	cin >> a;
	  vector <int> v;
	  auto count = 0;
	  auto length = 1;
	  auto maxLength = 0;
	  auto sequence = false;
	  for (auto i = 0; i < a; i++){
			auto b = 0;
			cin >> b;
			v.push_back(b);
	  }
	  for (auto i = 1; i < a; i++){
			if (v[i] > v[i-1]){
				  length -=-1;
				  sequence = false;
				  if (length > maxLength){
						maxLength = length;
				  }
			}
			if (v[i] < v[i-1]){
				  length = 1;
				  if (!sequence){
						sequence = true;
						count -=-1;
				  }
			}
			if (v[i] == v[i-1]){
				  length -=- 1;
				   if (length > maxLength){
						maxLength = length;
				  }
				  if (!sequence){
						sequence = true;
						count -=-1;
				  }

			}
	  }
	  cout << maxLength << " ******** " << count;
}
