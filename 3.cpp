#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stack <char> st;
		int n = s.size();
		for(int i = 0; i < n; i++)
		{
			if(s[i] == ' ')
			{
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << " ";
			}
			else st.push(s[i]);
		}
		while(!st.empty())
		{
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	return 0;
}

