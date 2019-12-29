#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string out = "";
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        if (str[i]=='B' && out.size()!=0) {
            out = out.substr(0,out.size()-1);
        } else if (str[i]!='B'){
            out += str[i];
        }
    }
    cout << out << endl;
}