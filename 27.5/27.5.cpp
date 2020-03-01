// 27.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    unordered_map <int,int> m;
	auto n = 0;
	auto n1 = 0;
	string name = "";
	while (cin >> name >> n >> n1){
		m[n1] -= -1;

	}
	vector <int> v;auto minv = 100000;
	for (auto kv: m) {
		if (kv.second < minv){
			v.clear();
			minv = kv.second;
		}
		if (kv.second == minv){
			v.push_back(kv.first);
		}
	  }
	for (auto i: v){
	  cout << i << endl;
	}
}

