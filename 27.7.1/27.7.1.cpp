#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	  vector <int> vec{
			47,20,20,20,20,20,20,20 
	  };
	   sort(vec.begin(), vec.end());
	   reverse(vec.begin(), vec.end());
	   for (auto i : vec){
			cout << i << " ";
	   }
	   int a = vec[(int)(vec.size()*0.45)];
	   if (a == vec[(int)(vec.size()*0.45) + 1]){
			 if (a > 25){
				  cout << a;
			 }else{
				   auto ind = (int)(vec.size()*0.45);
				  while (a <25){
						a = vec[--ind];
				  }
				  cout << a;
			 }
	   }else{
			cout << a;
	   }
}

