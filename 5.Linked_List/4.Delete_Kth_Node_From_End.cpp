Node* removeKthNode(Node* head, int K)
{
    Node *fast=head,*slow=0;
    int cnt=1;
    
    while(fast->next!=0){
       fast=fast->next;
       
       if(cnt==K){
           if(slow==0)
           slow=head;
           else
           slow=slow->next;

       }
       else
       cnt++;
       

    }
    if(slow==0){
    head=head->next;
    }
    else
     slow->next=slow->next->next;



    return head;

}
