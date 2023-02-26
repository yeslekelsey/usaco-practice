#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N; cin >> N;
	vector<long long> t;
	long long charge, tuition;
	for(long long i = 0; i < N; i++) {
		long long c; cin >> c;
		t.push_back(c);
	}
	sort(t.begin(), t.end());
	
	for(long long i = 0; i < t.size()-1; i++) {
		if(t[i]*(t.size() - i) < t[i + 1]*(t.size() - (i + 1))) {
			charge = t[i + 1];
			tuition = charge *(t.size() - (i + 1));
		}
	}
	cout << tuition << " " << charge;
	return 0;
}

/*
link to problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=1251
this is from the december 2022 contest
*/
