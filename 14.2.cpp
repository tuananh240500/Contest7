#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void HauTo_TienTo(string s){
	stack<string> st;
	string res = "";
	for(int i = 0; i < s.size(); i++){
		if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z'))
			st.push(string(1,s[i]));
		else{
			string first = st.top(); st.pop();
			string second = st.top(); st.pop();
			res = s[i] + second + first;
			st.push(res);
		}
	}
	cout << st.top();
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		HauTo_TienTo(s);
		cout << endl;
	}
}

