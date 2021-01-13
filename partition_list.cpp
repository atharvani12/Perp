ListNode* Solution::partition(ListNode* A, int y) {
    
    
    ListNode* less=new ListNode(-1);
    ListNode*greater=new ListNode(-1);
    ListNode * curr1=less,* curr2=greater;
    
    while(A)
    {
        int x=A->val;
        
        if(x<y)
        {
            curr1->next=A; A=A->next; curr1=curr1->next;
        }
        else{
            curr2->next=A; A=A->next; curr2=curr2->next;
        }
    }
    curr1->next=greater->next; curr2->next=NULL;
    less=less->next;
    
    return less;
}
