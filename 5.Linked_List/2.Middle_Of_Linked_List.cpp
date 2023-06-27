Node *findMiddle(Node *head) {
    
    Node *fast=head;
    Node *slow=head;

    while(fast!=0){
        fast=fast->next;

        

        if(fast!=0){
        fast=fast->next;
        slow=slow->next;
        }

    
        
        if(fast==0)
        return slow;


        
    }

}

