#include <bits/stdc++.h>
using namespace std;

int main() {
	int M, N, K; cin >> M >> N >> K;
	string signal;
	
	for(int i = 0; i < M; i++) { //loop through M times
		string n; cin >> n; //input each symbol
		vector<char> m(n.begin(), n.end()); // convert n to char array
		// go through each element in  string n and add it into m K times
		for (int l = 0; l < K; l++) {
			for (char x : m) {
				for (int k = 0; k < K; k++) {
					signal += x; //add each char into signal K times
				}
			}
			signal += "\n"; // add line break after every signal
		}
	}
	cout << signal;
}
/* 
link to problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=665
this is from the december 2016 contest
*/
