#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* h = NULL;
Node* addDate(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void push(Node** head_ref,Node* new_node){
    // if(*head_ref == NULL)
    //     h = new_node;
     new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
Node* reverse(Node* head,Node* pre){
     if (head == NULL)
        return pre;
    Node* temp = head->next ;
    head->next = pre;
    pre = head;
    reverse(temp,pre);
}
void print(Node* h){
    while(h != NULL){
        cout<< (h->data)<< endl;
    h = h->next;
    }
}
int main(){
    cout<<"Enter:::";
Node* head = NULL;
push(&head,addDate(2));
push(&head, addDate(3));
push(&head, addDate(4));
push(&head, addDate(5));
push(&head, addDate(6));
push(&head, addDate(7));
push(&head, addDate(8));
print(head);
cout<<"reverse:";
head = reverse(head,NULL);
print(head);
}