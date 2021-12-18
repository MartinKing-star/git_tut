
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v){
for(auto i:v)
cout << i << " ";
cout << endl;
}

void sort(vector<int>& v){
int sz=v.size();
for(int i=0;i<sz;++i){
for(int j=i+1;j<sz;++j){
if(v[i]>v[j]){
swap(v[i],v[j]);
}
}
}
}

int main(){
vector<int> v;
string s;
getline(cin,s);
stringstream ss(s);
int d;
while(ss >> d){
v.push_back(d);
}
print(v);
sort(v);
print(v);
}
