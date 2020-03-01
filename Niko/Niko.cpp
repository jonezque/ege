// Niko.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define N 5
int main()
{
	  int a[N];
	  int i, k, j;
	  int min = 10000;
	  for (i = 0; i < N; i++) {
			cin >> a[i];
			if (a[i] % 4 != 0 && a[i] < min) {
				  min = a[i];
			}
	  }
	  for (i = 0; i < N; i++) {
			if (a[i] % 4 != 0) {
				  a[i] = min;
			}
	  }
	  for (i = 0; i < N; i++) {
			cout << a[i] << '\r';
	  }
}

