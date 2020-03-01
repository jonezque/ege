// sort_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    vector <int> vec;
    auto n = 0;
    cin >> n;
    for (auto i = 0; i < n; i++){
      auto a = 0;
      cin >> a;
      vec.push_back(a);
    }
    //for (auto i = 0; i < n; i++){
    //  for (auto j = 0; j < n-1; j++){
    //        if (vec[j] > vec[j+1]){
    //              auto t = vec[j];
    //              vec[j] = vec [j+1];
    //              vec[j+1] = t;
    //        }
    //  }
    //}
    sort(vec.begin(),vec.end());
    for (auto i : vec){
      cout << i << " ";
    }
}


