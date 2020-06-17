#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string XoaNgoac(string s){
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			int top = st.top(); st.pop();
//			if(top == 0) continue;
//			else{
				if(s[top-1] == '+') continue;
				else if(s[top-1] == '-'){
					for(int j = top; j <= i; j++){
						if(s[j] == '+') s[j] = '-';
						else if(s[j] == '-') s[j] = '+';
					}
				}
//			}
		}
	}
	string s1 = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] != '(' && s[i] != ')'){
				s1 += s[i];
			}
		}
	return s1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		s1 = XoaNgoac(s1);
		s2 = XoaNgoac(s2);
		if(s1 == s2) cout << "YES\n";
		else cout << "NO\n";
	}
}

