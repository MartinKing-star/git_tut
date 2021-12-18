#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll  fib(ll a){
vector<ll> v(a+1,1);
for(ll i=2;i<=a;++i){
v[i]=(v[i-1]+v[i-2]);
}
return v[a];
}

int main(){
ll a;
cin >> a;
cout << "Fib of " << a << " " << fib(a) << endl;
}

