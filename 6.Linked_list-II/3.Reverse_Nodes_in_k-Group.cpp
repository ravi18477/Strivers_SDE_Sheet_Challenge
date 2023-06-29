Node* reverse(Node *head,int cnt ){

	if(cnt==0)
	return head;

Node *temp=head,*curr=head;
Node *prev=0;


while(cnt>0 && curr!=0){
curr=temp->next;
temp->next=prev;
prev=temp;
temp=curr;
cnt--;
}

head->next=curr;
head=prev;


return head;


}


Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	Node *temp=head,*prev=0;
	int i=1;
	while(i<=n && temp!=0){

	if(temp==head){
     head=reverse(temp,b[i-1]);
	 temp=head;
		}
	else{
		prev->next=reverse(temp,b[i-1]);
		temp=prev->next;
	}
	while(b[i-1]>0 && temp!=0){
        prev=temp;
		temp=temp->next;
		b[i-1]--;
	}

	i++;

	}

	return head;
	

}
