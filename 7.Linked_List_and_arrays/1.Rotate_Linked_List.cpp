Node *rotate(Node *head, int k) {
     
     Node *slow=head,*fast=head;


     int cnt=0;
     while(fast!=0){
          fast=fast->next;
          cnt++;
     }

     k=k%cnt;

     if(k==0)
     return head;

     fast=head;
     
     while(fast->next!=0){
          if(k==0){
               slow=slow->next;
               fast=fast->next;
          }
          else
         {fast=fast->next;
         k--;}
          
     }
      
      fast=slow->next;
      slow->next=0;
      
      slow=fast;
      
      while(fast->next!=0){
           fast=fast->next;
      }
      
      fast->next=head;
      head=slow;
     
     return head;

     
}
