#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000001], x[1000001];
void solve() {
    ll n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        x[i] = a[i];
    }
    stack<ll> b; stack<ll> res;
    for(int i = 1; i <= n; ++i) {
        if (res.empty()) {
            res.push(a[i]);
            b.push(i);
        } 
		else {
            if(a[i] >= res.top()) {
                res.push(a[i]);
                b.push(i);
            } 
			else {
                ll top = a[i];
                while(!res.empty() && res.top() > top) {
                    a[b.top()] = top;
                    res.pop();
                    b.pop();
                } 
                res.push(top);
                b.push(i);
            }
        }
    } 
    while(!b.empty()) {
        a[b.top()] = -1;
        b.pop();
    }
/*    stack<ll> kq;
    for (int i = 1; i <= n; ++i) {
        if (kq.empty()) {
            kq.push(x[i]);
            b.push(i);
        } 
		else{
            if (x[i] <= kq.top()) {
                kq.push(x[i]);
                b.push(i);
            } else {
                ll top = x[i];
                while(!kq.empty() &&kq.top() < top) {
                    x[b.top()] = a[i];
                    kq.pop();
                    b.pop();
                } 
                kq.push(top);
                b.push(i);
            }
        }
    } 
    while(!b.empty()) {
        x[b.top()] = -1;
        b.pop();
    }
    for(int i = 1; i <= n; i++) cout << x[i] << " ";*/
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
}
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }

}
