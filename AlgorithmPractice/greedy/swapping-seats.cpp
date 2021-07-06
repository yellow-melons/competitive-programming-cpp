#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	/* 
		 We go through all of the permutations of ABC. Without loss of generality, assume our permutation is ABC. The other 5 cases are analogous. Then we let the first 𝑖 
		 characters of our final configuration be A. We can brute force through all possible values of 𝑖 from 0 to 𝐶𝐴. Then we know the exact state of our final configuration. 
		 The A section now forms both a suffix and a prefix of the string, but it is still the same section and we will process it that way.

		 We now simulate the swaps. For each element in the A section that is not an A, we swap it with an A in the corresponding section if we can. 
		 If we cannot, we can swap it with a random A from the other section. We do the same for the B section, and we have our answer.

		 For this solution, we have to keep track of the positions of each letter in each section. We can do this with 3 vectors for the B and C sections, for 6 vectors total.
		 */
	cout << "hello world" << endl;
	for(int i=0; i<10; i++) {
		cout << i << endl;
	}
}
