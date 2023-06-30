LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head1)
{   
    
    map<LinkedListNode<int>*,LinkedListNode<int>*> mp;
    LinkedListNode<int>*head2=0;
    LinkedListNode<int> *temp2=0,*temp1=head1;

    while(temp1!=0){
        LinkedListNode<int>*n1=new LinkedListNode<int>(temp1->data);
        mp[temp1]=n1;
        if(head2==0){
            head2=n1;
            temp2=n1;
        } else {
          temp2->next = n1;
          temp2 = temp2->next;
        }
        
        temp1=temp1->next;
    }
    
    
 temp1=head1;
 temp2=head2;
    while(temp1!=0){
        temp2->random=mp[temp1->random];
        temp2=temp2->next;
        temp1=temp1->next;
       // cout<<temp2->data;
    }

    return head2;

    
    
}
