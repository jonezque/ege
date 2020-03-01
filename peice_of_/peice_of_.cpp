
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	  vector <int> v;
	  auto n = 0;
	  cin >> n;

	  for (auto i = 0; i < n*n; i++){
			v.push_back(0);
	  }

	  for (auto i = 0; i < n; i++){
			for (auto j = 0; j < n; j++){
				  if(i + j + 1== n || i == j) {
						if (i < n/2 + 1)
							  v[i*n+j] = i+1;
						else
							  v[i*n+j] = n - i;
				  }
				  if (j == n/2) {
						v[i*n+j] = (n/2 +1)*abs(n/2 > i ? n/2 -i +1: n/2 -1 - i);
				  }
				  if (i == n/2) {
						v[i*n+j] = (n/2 +1)*abs(n/2 > j ? n/2 -j +1: n/2 -1 - j);
				  }
			}

	  }

	  for (auto i = 0; i < n; i++){
			for (auto j = 0; j < n; j++){
				  cout << v[i*n +j] << ' ';
			}
			cout << endl;
	  }
}