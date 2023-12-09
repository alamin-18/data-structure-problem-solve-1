#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
// class Node2{
//     public:
//         int val;
//         Node2* next;
//         Node2(int val){
//             this->val=val;
//             this->next=NULL;
//         }
// };
void insert_teil(Node* &head,Node* &tail,int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head =newNode;
            tail = newNode;
            return;
        }
        tail->next=newNode;
        tail =newNode;

}
// void insert_teil_n2(Node2*&head,Node2*&tail,int val){
//         Node *newNode = new Node(val);
//         if(head == NULL){
//             head =newNode;
//             tail = newNode;
//             return;
//         }
//         tail->next=newNode;
//         tail =newNode;

// }
bool cmp(Node* headN1,Node *headN2){
    Node *temp1=headN1;
    Node *temp2=headN2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val != temp2->val){
            return false;
        }
        temp1= temp1->next;
        temp2= temp2->next;
        
    }
    return temp1==NULL && temp2 ==NULL;
}
int link_list_size(Node *head){
    Node * temp=head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp=temp->next;
    }
    return size;
}
void print_link_list(Node *head){
    Node *tmp=head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    
   
    Node *headN1 =NULL;
    Node *tailN1 =NULL;
    Node *headN2 =NULL;
    Node *tailN2 =NULL;
    int n1;
    int n2;
    while(true){
       cin>>n1;
       if(n1== -1) break;
        insert_teil(headN1,tailN1,n1);
    }
    while(true){
       cin>>n2;
       if(n2== -1) break;
        // insert_teil(headN1,tailN1,n1);
        insert_teil(headN2,tailN2,n2);
    }
    
    // int link_list_n1=link_list_size(headN1);
    // int link_list_n2=link_list_size(headN2);
    // print_link_list(headN1);
    // print_link_list(headN2);
    bool val =cmp(headN1,headN2);
    if(val==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
//     if(link_list_n1 == link_list_n2){
//         Node *temp1=headN1;
//         Node *temp2=headN2;
//         while(temp1 != NULL && temp2 != NULL){
//             if(temp1->val != temp2->val){
//                 cout<<"NO"<<endl;
//                 temp1=temp1->next;
//                 temp2=temp2->next;
//             }
            
//         }
//     }
//    else{
//     cout<<"NO"<<endl;
//    }
//    cout<<link_list_n1<<" "<<link_list_n2<<endl;
    return 0;
}