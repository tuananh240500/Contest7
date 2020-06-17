#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll n = s.size();
		stack <char> st;
		bool check = true;
		for(int i = 0; i < n; i++){
			if(s[i] == '{' || s[i] == '[' || s[i] == '(') st.push(s[i]);
			if(s[i] == '}'){
				if(!st.empty()){
					if(st.top() == '{') st.pop();
					else{
						check = false;
						break;
					}
				}
			}
			if(s[i] == ']'){
				if(!st.empty()){
					if(st.top() == '[') st.pop();
					else{
						check = false;
						break;
					}
				}
			}
			if(s[i] == ')'){
				if(!st.empty()){
					if(st.top() == '(') st.pop();
					else{
						check = false;
						break;
					}
				}
			}
			
		}
		if(!st.empty()) cout << "NO\n";
		else{
			if(check = false) cout << "NO\n";
		    else cout << "YES\n";
		}
	}
}

