
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main()
{
	  vector <string> ex;
	  string a = "aaaaaaa";
	  string b = "bbbbbbb";
	  ex.push_back(a);
	  ex.push_back(b);
	  ex.push_back("ccccccc");
	  cout << ex.size() << endl;
	  ex.pop_back();
	  cout << ex.size() << endl;
	  ex.erase(ex.begin());
	  cout << ex.size() << endl;
	  ex.clear();
	  cout << ex.size() << endl;
	  set <int> ex1;
	  ex1.insert(2);
	  ex1.insert(3);
	  ex1.insert(1);
	  ex1.insert(5);
	  ex1.insert(5);
	  for (auto i : ex1){
			cout << i << endl;
	  }
	  map <string, string> exMap;
	  exMap["a1"] = "1";
	  exMap["a2"] = "10";
	  exMap["a3"] = "0";
	  exMap["a4"] = "15";
	  exMap["a1"] = "20";
	  exMap["a5"];
	  for (auto i : exMap){
			cout << i.second << " " << i.first << endl;
	  }
	  cout << exMap.count("a5") << endl;
}

