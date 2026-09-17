#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next = NULL;

    ListNode(int num){
        val = num;
    }
};

int main(){

    ListNode * dummy = new ListNode(0);
    ListNode *head = new ListNode(0);

        dummy->next = head;

    for(int i = 1 ; i < 11 ; i++ ){
         ListNode *temp = new ListNode(i*5);

         head->next = temp;
         head = head->next;

    }

    dummy = dummy->next;

    while(dummy != NULL){
        cout<<dummy->val<<endl;
        dummy= dummy->next;
    }
}
