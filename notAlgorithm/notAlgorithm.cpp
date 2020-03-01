// notAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void f(vector <int> v,int n,int &sum){
	  if (n > 0){
			sum += v[n-1];

			f(v,n - 1,sum);
	  }
}
int main()
{
    vector <int> v = {1,2,3,4,5};
	auto n = v.size();
	auto sum = 0;
	f(v,n,sum);
	cout << sum;
}

