bool detectCycle(Node *head)
{
	Node *slow=head;
    Node *fast=head;
    

    do{
        if(fast->data==-1)
        return true;
        fast->data=-1;
        fast=fast->next;

        

    }while(fast!=0);

    return false;
}
