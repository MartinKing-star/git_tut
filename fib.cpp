#include <bits/stdc++.h>
using namespace std;

int  fib(int a){
vector<int> v(a+1,0);
for(int i=2;i<=a;++i){
v[i]=(v[i-1]+v[i-2]);
}
return v[a];
}

int main(){
int a;
cin >> a;
cout << "Fib of " << a << fib(a) << endl;
}

