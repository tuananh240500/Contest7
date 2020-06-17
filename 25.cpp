#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll xuli(ll n, ll m){
	if(n == 1) return 1;
	else return (xuli(n-1, m) + m - 1) % n + 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		cout << xuli(n,m+1) << endl;; 
	}
}

