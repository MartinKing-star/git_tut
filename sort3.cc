
#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>& v){

int sz=v.size();
for(int i=0;i<sz;++i){
int min_idx=i;
for(int j=i+1;j<sz;++j){
min_idx=(v[j]<v[min_idx])?j:min_idx;
}
swap(v[i],v[min_idx]);
}
}

void print(vector<int>& v){
for(auto &i:v){
cout << i << " ";
}
cout << endl;
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

