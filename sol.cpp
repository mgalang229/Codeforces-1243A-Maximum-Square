#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		sort(a, a+n);
		int cnt=1;
		for(int i=n-1; i>=0; --i) {
			if(a[i]<cnt)
				break;
			else
				cnt++;
		}
		if(cnt==1)
			cout << 1;
		else
			cout << cnt-1;
		cout << "\n";
	}
}
