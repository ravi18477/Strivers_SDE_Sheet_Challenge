LinkedListNode<int>* reverse(LinkedListNode<int> *head){

    LinkedListNode<int> *temp=head,*curr=head,*prev=0;
    
    while(curr!=0){
        curr=curr->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
    }

    head=prev;

    return head;


}

bool isPalindrome(LinkedListNode<int> *head) {

    if(head==0 || head->next==0)
    return true;
    
    LinkedListNode<int> *slow=head,*fast=head;
    
    while(fast->next!=0 && fast->next->next!=0){

        fast=fast->next->next;
       
          slow=slow->next;
        }

    

    slow->next=reverse(slow->next);

    slow=slow->next;

    fast=head;

    while(slow!=0){
        if(slow->data!=fast->data)
        return false;

         fast=fast->next;
         slow=slow->next;
    }

    return true;


}
