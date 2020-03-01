
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student{
	  int id;
	  string name;
	  string lastname;
	  friend ostream& operator<<(ostream& os, const Student& dt);

};
struct Course{
	  int id;
	  string team;
	  vector <Student> classroom;
};
ostream& operator<<(ostream& os, const Student& dt)
{
    os << dt.name << '/' << dt.lastname << '/' << dt.id;
    return os;
}
bool operator<(const Student& a,const Student& b){
	  if (a.name == b.name){
			return a.lastname < b.lastname;
	  }else {
			return a.name < b.name;
	  }
}

int main()
{
	  int n = 3;
	  vector <Course> c = {
			{1,"11Á",{
						{1,"Artem","Brilev"},
						{2,"Ilya","Glebov"},
						{3,"Anna","Glebova"}
				  }
			},{2,"11À",{
						{6,"Egor","LeBron"},
						{4,"Sergey","LeBron"},
						{5,"Ivan","LeBron"},
				  }
			}

	  };
	stable_sort(c[1].classroom.begin(),c[1].classroom.end());
	cout << c[1].classroom[0] <<  c[1].classroom[1] << c[1].classroom[2] <<endl;
}

