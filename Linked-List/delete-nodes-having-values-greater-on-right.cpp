class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head == NULL || head->next==NULL){
            return head;
        }
        Node* prev = NULL;
        Node* cur = head;
        while(cur!=NULL){
            Node* temp = cur->next;
            while(temp!=NULL && temp->data<=cur->data){
                temp=temp->next;
            }
            if(temp==NULL){
                prev=cur;
                cur=cur->next;
            }
            else if(temp!=NULL && cur==head){
                cur=cur->next;
                head=cur;
            }
            else if(temp!=NULL && cur!=head){
                prev->next = cur->next;
                cur=prev->next;
            }
        }
        return head;
    }
    
};