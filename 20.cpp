#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n+1], x[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack<ll> st;
		for(int i = n-1; i >= 0; i--)
		{
			while(!st.empty() && a[i] >= st.top()) 
			    st.pop();
			if(st.empty()) x[i] = -1;
			else x[i] = st.top();
			st.push(a[i]);
		}
		for(int i = 0; i < n; i++) cout << x[i] << " ";
		cout << endl;
	}
}
