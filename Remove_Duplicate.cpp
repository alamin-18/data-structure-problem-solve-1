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
void delete_dup(Node*head,int val){
    Node* temp2=head;
    while(temp2->next !=NULL){
        // cout<<temp2->val<<" "<<val;
        if(temp2->next->val == val){
            Node* deleteDup=temp2->next;
            temp2->next =deleteDup->next;
            delete deleteDup;
        }
        else{
             temp2=temp2->next;
        }      
    }
}
// void delete_position(Node *head, int pos)
// {
//     Node *tmp = head;
//     // for (int i = 1; i <= pos - 1; i++)
//     // {
//     //     tmp = tmp->next;
//     // }
//     while(tmp !=NULL){

//     }
//     Node *deleteNode = tmp->next;
//     tmp->next = tmp->next->next;
//     delete deleteNode;
// }
// void remove_dup(Node*head){
//     Node *temp2=head;
//     while(temp2 !=NULL && temp2->next != NULL){
//         cout<<temp2->val<<" "<<temp2->next->val<<endl;
//         if(temp2->val==temp2->next->val){
//             Node *nextNext=temp2->next->next;
//            Node* deleteDup=temp2->next;
//             delete deleteDup;
//             cout<<"selete"<<endl;
//             temp2->next=nextNext;
            
//         }
//         else{
//             temp2=temp2->next;
//             cout<<"fdselete"<<endl;
//         }
//     }
// }
// void delete_head(Node *&head)
// {
//     Node *deleteNode = head;
//     head = head->next;
//     delete deleteNode;
// }
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
    Node *head =NULL;
    Node *tail =NULL;
    int val;
    while(true){
       cin>>val;
       if(val== -1) break;
        insert_teil(head,tail,val);
    }
    // for(Node *i=head;i->next !=NULL;i=i->next){
    //     for(Node *j=i->next;j->next !=NULL;j=j->next){
    //         cout<<i->val << " "<< j->val<<endl;
    //         if(i->val == j->val){
    //             // delete_head(i);
    //             cout<<i->val << "mazd "<< j->val<<endl;
    //             cout<<i->next->val << "mazd "<< j->next->val<<endl;
    //             Node* deleteDup=i->next;
    //             i->next =j->next->next;
    //             delete deleteDup;
    //         }
    //     }
    // }
    // remove_dup(head);
    // delete_dup(head);
    // print_link_list(head);

    Node *temp=head;
    while(temp !=NULL){
        delete_dup(temp,temp->val);
        temp=temp->next;
    }
    // remove_dup(head);
    print_link_list(head);
   
    return 0;
}