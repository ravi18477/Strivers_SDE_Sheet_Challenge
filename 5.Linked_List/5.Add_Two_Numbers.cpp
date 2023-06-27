Node *addTwoNumbers(Node *num1, Node *num2)
{   if(num1==0)
      return num2;

    if(num2==0)
    return num1;

    Node  *temp1=num1,*temp2=num2;

    Node* head=0,*temp=0;

     int carry=0;
    while(temp1!=0 && temp2!=0)
    {  int s=temp1->data+temp2->data+carry;

       carry=s/10;

       s=s%10;

       Node *newnode=new Node(s);

       if(head==0){
           head=newnode;
           temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=temp->next;
       }

    temp1=temp1->next;
    temp2=temp2->next;
           }

    while(temp1!=0){

        int s=temp1->data+carry;

       carry=s/10;

       s=s%10;

       Node *newnode=new Node(s);

       if(head==0){
           head=newnode;
           temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=temp->next;
       }

    temp1=temp1->next;
    }

    while(temp2!=0){
        int s=temp2->data+carry;

       carry=s/10;

       s=s%10;

       Node *newnode=new Node(s);

       if(head==0){
           head=newnode;
           temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=temp->next;
       }

       temp2=temp2->next;

    }

    while(carry!=0){
        int s=carry;

       carry=s/10;

       s=s%10;

       Node *newnode=new Node(s);

       if(head==0){
           head=newnode;
           temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=temp->next;
       }

    }

    return head;
}
