Node* merge(Node* first, Node* second)
{
     

     if(second==0)
     return first;



    Node *l1=first;
    Node *l2=second;
 

    Node *main=0,*temp=0;


     if(first->data < second->data)
        { main=first;
         temp=first;
        l1=l1->child;}
      else
     {
         main=second;
         temp=second;
        l2=l2->child;
        
    }
   

    while(l1!=0 && l2!=0){
        if(l1->data < l2->data){
            temp->child=l1;
            l1=l1->child;
            
            temp=temp->child;
        }
        else{
             temp->child=l2;
            l2=l2->child;
            temp=temp->child;
        }

    } 

    while(l1!=0){
        temp->child=l1;
            l1=l1->child;
            temp=temp->child;
    }

     while(l2!=0){
        temp->child=l2;
            l2=l2->child;
            temp=temp->child;
    }

    return main;



}

Node* flattenLinkedList(Node* head) 
{   

  Node *temp=head->next;
  while(temp!=0){
    head=merge(head,temp);
    temp=temp->next;
  }

temp=head;
while(temp!=0){
  temp->next=0;
  temp=temp->child;
}
  

  return head;
	
}
