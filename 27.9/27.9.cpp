

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{

string message = "";
string key = "";
getline(cin, message);
cin >> key;
string procesed;
for (auto i = 0; i < message.size();i++){
	  if ((message[i] >= 65) && (message[i] <= 90)){
			procesed += message[i];
	  }
	  if ((message[i] >= 97) && (message[i] <= 122)){
			procesed += (message[i] -32);
	  }
 }
string procesedKey;
while (procesedKey.size() < procesed.size()){
	  procesedKey += key;
}
string result;
for (auto i = 0; i < procesed.size();i++){
	  char letter= (procesed[i]-65+procesedKey[i]-65) % 26 + 65;
	  result += letter;
}
cout << result;
}

