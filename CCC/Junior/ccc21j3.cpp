#include <iostream>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	string s;
	cin >> s;
	string direction;
	while(s!="99999") {
		if((s[0]-'0')+(s[1]-'0')) {
			direction=((s[0]-'0')+(s[1]-'0'))%2==1?"left":"right";
		}
		cout << direction << " " << s[2] << s[3] << s[4] << endl;
		cin >> s;
	}
}

