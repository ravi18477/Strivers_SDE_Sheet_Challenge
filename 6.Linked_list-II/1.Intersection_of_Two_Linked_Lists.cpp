int getdiff(Node *head1, Node *head2){
    int len1=0;
    Node*temp=head1;

    
    while(temp!=0){
        temp=temp->next;
        len1++;
    }
   

    int len2=0;
    temp=head2;

     while(temp!=0){
        temp=temp->next;
        len2++;
    }


    return len1-len2;

    
}
Node* findIntersection(Node *head1, Node *head2)
{
       int diff=getdiff(head1,head2);
       
       Node*temp1=head1,*temp2=head2;
       
       if(diff<0){
           while(diff++!=0)
               temp2=temp2->next;   
       }
       else if(diff>0){
           while(diff--!=0)
               temp1=temp1->next;   
       }


       while(temp1!=0 && temp2!=0)
       {   if(temp1==temp2)
           return temp1;
           
           temp1=temp1->next;
           temp2=temp2->next;
       }
       
       return 0;
}
