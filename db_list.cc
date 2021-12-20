
#include <bits/stdc++.h>
using namespace std;

struct db_list{

int key;
db_list* front=nullptr,*back=nullptr;
db_list(int key){
this->key=key;
}
};

void insert(db_list** head,int key){

while((*head) && (*head)->key<key){
head=&(*head)->front;
}
db_list* temp =new db_list(key);
if((*head)){
temp->back=(*head)->back;
(*head)->back=temp;
}
temp->front=(*head);
(*head)=temp;
}

void deletion(db_list** head,int key){
while((*head) && (*head)->key!=key){
head=&(*head)->front;
}
db_list* temp=(*head);
if(!temp){
cout << "couldnt find " << key << endl;
return;
}
if(temp->front){
(temp->front)->back=temp->back;
}
(*head)=temp->front;
temp->front=temp->back=nullptr;
delete temp;
}



void print(db_list* head){
if(!head){
cout << endl;
return;
}
cout << head->key << " ";
print(head->front);
}

int main(){

int d;
string s;
getline(cin,s);
stringstream ss(s);
db_list* head=nullptr;
while(ss >> d){
insert(&head,d);
}
print(head);
cin >> d;
deletion(&head,d);
print(head);
}

