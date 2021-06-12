#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	int n;
	cin >> n;
	vector<ll> powerOfTen(19, 1);
	for(int i=1; i<19; i++) {
		powerOfTen[i]=powerOfTen[i-1]*10;
	}
	while(n--){
		ll index;
		cin >> index;
		ll digitsSoFar=0;
		ll digitsBeforeActualBlock=0;
		int numberOfDigits;
		for(int i=1; i<=18; i++){
			digitsSoFar+=(powerOfTen[i]-powerOfTen[i-1])*i;
			if(digitsSoFar>=index){
				numberOfDigits=i;
				break;
			}
			digitsBeforeActualBlock += (powerOfTen[i]-powerOfTen[i-1])*i;
		}
		ll smallestValue=powerOfTen[numberOfDigits-1];
		ll largestValue=powerOfTen[numberOfDigits]-1;
		ll bestValue=0;
		ll startingPositionOfBestValue;
		while(smallestValue<=largestValue){
			ll actualValue=(smallestValue+largestValue)/2;
			ll actualStartingPos=
				digitsBeforeActualBlock+1+
				(actualValue-powerOfTen[numberOfDigits-1])*numberOfDigits;
			if(actualStartingPos<=index){
				if(actualValue>bestValue){
					bestValue=actualValue;
					startingPositionOfBestValue=actualStartingPos;
				}
				smallestValue=actualValue+1;
			} else {
				largestValue=actualValue-1;
			}
		}
		string number=to_string(bestValue);
		cout << number[index-startingPositionOfBestValue] << endl;
	}
}
