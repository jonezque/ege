

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	  vector <int> a = {
			4,
			22,
			15,
			3,
			9,
			11
	  };
	  auto min = 1001;
	  auto min3 = 1001;
	  vector <int> b = {
			14,
			20,
			21,
			17,
			16,
			18
	  };
	  for (auto i = 0; i < b.size();i++){
			auto pr  = a[0]*b[i];
			if ((pr < min)&&(pr % 3 == 0)){
				  min = pr;
			}
			if ((a[0]%3==0)&&(a[0]<min3)){
				  min3 = a[0];
			}
			if (a[1] > a[0]){
				  a[1] = a[0];
			}
			for (auto j = 0; j < 5; j++){
				  a[j] = a[j+1];
			}
			a[5]= b[i];
			pr = min3 * b[i];
			if (pr < min){
				  min = pr;
			}
	  }
	  cout << min;
}


