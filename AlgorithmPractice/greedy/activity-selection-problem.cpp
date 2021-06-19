#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

struct activity {
	int start, end;
};

// how to sort an object by a specific parameter
bool activityCompare(activity a1, activity a2) {
	return(a1.end<a2.end);
}

void maxActivities(int start[], int end[], int n) {
	vector<activity> agenda;
	for(int i=0; i<n; i++) {
		activity temp;
		temp.start=start[i];
		temp.end=end[i];
		agenda.push_back(temp);
	}
	sort(agenda.begin(), agenda.end(), activityCompare);
	int endtime=-1;
	for(auto i:agenda) {
		if(i.start>endtime) {
			cout << i.start << " " << i.end << endl;
			endtime=i.start;
		}
	}
}

int main() {
	int s[] =  {1, 3, 0, 5, 8, 5};
	int f[] =  {2, 4, 6, 7, 9, 9};
	int n = sizeof(s)/sizeof(s[0]);
	maxActivities(s, f, n);
}
