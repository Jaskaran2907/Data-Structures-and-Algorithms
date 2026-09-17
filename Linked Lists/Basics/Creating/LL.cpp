#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};

int main(){

    ListNode *head = new ListNode(0);
    ListNode *temp = head;

    for(int i = 1 ; i <= 5 ; i++){
        ListNode *val = new ListNode(i*5);
        temp->next = val;
        temp = temp->next;
    }

    temp = head;

    while(temp!=NULL){

        if(temp->next->val == 15){
            ListNode *del = temp->next;
            temp->next = del->next;
            delete del;
            break;
        }

        temp = temp->next;
    }


    temp = head;

    while(temp != NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
    }


    
}