#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
	  string sentence;
	  char c;
	  map <char, int> table;
	  while ((c = getchar()) != '#'){
			sentence += c;
	  }
	  for (auto i : sentence){
			if ((i >= 65) && (i < 91)){
				  table[i]++;
			}
			if ((i >= 97) && (i < 123)){
				  table[i-32]++;
			}
	  }
	  auto max = 0;
	  for (auto pair : table){
			if (pair.second > max){
				  max = pair.second;
			}
	  }
	  for (auto pair : table){
			if (pair.second == max){
				  cout << pair.first << ' ';
			}
	  }
	  cout << endl << max;

}