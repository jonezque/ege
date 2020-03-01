// dSimple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;
bool isSimple(int a){
	  for (auto i = 2; i < (a/2 + 1);i-=-1){
			if (a % i == 0){
				  return false;
			}
	  }
	  return true;
}
int main()
{
	  auto a =0;
	  cin >> a;
	  vector <int> result;
	  for (auto i = 2; i < (a/2 + 1); i-=-1){
			if ((a % i == 0) && (isSimple(i))){
						result.push_back(i);
				  }
	  }
	  for (auto i : result){
			cout << i << endl;
	  }
}
