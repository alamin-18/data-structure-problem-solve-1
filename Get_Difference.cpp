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
// void print_link_list(Node *head){
//     Node *tmp=head;
//     while(tmp != NULL){
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }
int find_min(Node*head){
    Node *temp=head;
    int min=INT_MIN;
    while(temp !=NULL){
        if(temp->val >min){
            min=temp->val;
        }
        temp=temp->next; 
}
 return min;
}
int find_max(Node*head){
    Node *temp=head;
    int max = INT_MAX;
    while(temp !=NULL){
        if(temp->val <max){
            max=temp->val;
        }
        temp=temp->next;
    }
return max;
}
int main()
{
    Node *head =NULL;
    Node *tail =NULL;
    int val;
    while(true){
       cin>>val;
       if(val== -1) break;
        insert_teil(head,tail,val);
    }
    // int max=INT_MAX;
    // int min =INT_MIN;
    // for(Node *i=head;i->next !=NULL;i=i->next){
    //     // for(Node *j=i->next;j !=NULL;j=j->next){
    //     //     if(diff > i->val - j->val){
    //     //         diff =i->val - j->val;
    //     //     }
    //     // }
    //     if(i->val < max){
    //         max=i->val;
    //     }
    // }
    // for(Node *i=head;i->next !=NULL;i=i->next){
    //     if(i->val >min){
    //         min=i->val;
    //     }
    // }
    int max=find_max(head);
    int min =find_min(head);
    int diff =min-max;
//    print_link_list(head);
    cout<<diff<<endl;
    return 0;
}