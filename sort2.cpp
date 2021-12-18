#include <bits/stdc++.h>
using namespace std;
//bubble sort 


void print(vector<int> v){
for(auto i:v){
cout << i << " ";
}
cout << endl;
}

void move(vector<int>& v,int j,int i){
int temp=v[i];
for(int k=i-1;k>=j;--k){
v[k+1]=v[k];
}
v[j]=temp;
}

void sort(vector<int>& v){
int sz=v.size();
for(int i=1;i<sz;++i){
for(int j=0;j<i;++j){
if(v[i]<=v[j]){
move(v,j,i);
break;
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
