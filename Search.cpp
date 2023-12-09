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
int recursive(Node *head,int x){
    Node *temp = head; 
    int index = 0;
    while(temp != NULL){
        // if(temp->val !=x){
        //     return -1;
        // }
        if(temp->val == x) {
            return index;
            
        }
        
         else {
            index++;
            temp = temp->next;
            }
        
    }
    return -1;
}
int main()
{
    
   int t;
   cin>>t;
   while(t--){
     Node *head =NULL;
    Node *tail =NULL;
    int val;
    while(true){
       cin>>val;
       if(val== -1) break;
        insert_teil(head,tail,val);
    }
    int x;
    cin>>x;
   int index= recursive(head,x);
   
  
    cout<<index<<endl;
   
   }
    return 0;
}