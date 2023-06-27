Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
     if(first==0)
     return second;

     if(second==0)
     return first;



    Node<int> *l1=first;
    Node<int> *l2=second;
 

    Node<int> *main=0,*temp=0;

    if(first->data < second->data){
         main=first;
         temp=first;
        l1=l1->next;

    } 
     else
     {
         main=second;
         temp=second;
        l2=l2->next;
        
    }

    while(l1!=0 && l2!=0){
        if(l1->data < l2->data){
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;
        }
        else{
             temp->next=l2;
            l2=l2->next;
            temp=temp->next;
        }

    } 

    while(l1!=0){
        temp->next=l1;
            l1=l1->next;
            temp=temp->next;
    }

     while(l2!=0){
        temp->next=l2;
            l2=l2->next;
            temp=temp->next;
    }

    return main;



}
