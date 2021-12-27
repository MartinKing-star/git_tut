
#include <bits/stdc++.h>
using namespace std;

struct link_list{
int data;
link_list* next=nullptr;
link_list(int key){
this->data=key;
}
};
void insert(link_list** head,int key){
while((*head) && (*head)->data < key){
head=&(*head)->next;
}
link_list* temp=new link_list(key);
temp->next=(*head);
(*head)=temp;
}
void deletion(link_list** head,int key){
while((*head)&&(*head)->data!=key){
head=&(*head)->next;
}
if(!(*head)){
cout << "couldnt find key " << key << endl;
return;
}
link_list* temp=(*head);
(*head)=(*head)->next;
delete temp;
}
void print(link_list* head){
if(!(head)){
cout << endl;
return;
};
cout << (head)->data << " ";
print((head)->next);
}

int main(){
string s;
link_list* head=nullptr;
getline(cin,s);
stringstream ss(s);
int d;
while(ss >> d){
insert(&head,d);
}
print(head);
cin >> d;
deletion(&head,d);
print(head);
}

