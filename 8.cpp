#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <int> st;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st.push(i);
			if(s[i] == ')'){
//				if(!st.empty()){
					int top = st.top(); st.pop();
				    if(top == 0) continue; // ( dau tien
				    else if(s[top-1] == '+') continue;
				    else if(s[top-1] == '-'){
					    for(int j = top; j <= i; j++){
					        if(s[j] == '+') s[j] = '-';
						    else if(s[j] == '-') s[j] = '+';
					    }
				    }
//				}	
			}
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i] != '(' && s[i] != ')') cout << s[i];
		}
		cout << endl;
	}
}

