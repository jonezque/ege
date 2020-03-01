
#include <iostream>
#include <unordered_map>
using namespace std;

class A {
public:
	  A() {
	  cout << "cons" << endl;
	  }
	  A(const A& o) {
	  cout << "copy" << endl;
	  }
	  ~A() {
	  cout << "destr" << endl;}
};
int main()
{
	  A a;
	  auto b = a;


}

