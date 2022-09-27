# Linked List

# Implementation

I always forger

```cpp
Node *insertAtBegining(Node *head, int x) {
       Node* newnode= new Node(x);
       if(head==NULL)  return newnode;
       else            newnode->next=head;
       
       return newnode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       
       Node *newnode=new Node(x);
       
       if(head==NULL)  return newnode;
        Node *temp=head;
     
while (temp->next!=NULL)
       temp=temp->next;
       
temp->next=newnode;
       newnode->next=NULL;
       return head;
    }
};
```

Deltel

```cpp
Node* deleteNode(Node *head,int x)
{   Node* temp=head;

    **//BEGINNING**
    if(x==1){
    head=temp->next;
    return head;
    }

    **//INBETWEN**
    x-=2;
    while(x--)
    temp=temp->next;
    
   **//LAST_CHECK**
    if (temp->next!=NULL)
    temp->next=temp->next->next;
    
    return head;
}
```

DOUBLY LL

```cpp
void addNode(Node *head, int pos, int data)
{  Node *temp=head;
   while(pos--){
       temp=temp->next;
   }
   Node *newnode=new Node(data);
   newnode->prev=temp;
   
   if(temp->next==NULL)
   newnode->next=NULL;
   else  
   newnode->next=temp->next;
   temp->next=newnode;
}
```

# Middle of a Linked List

```cpp
ListNode* middleNode(ListNode *head)
        {
            ListNode *fast = head;
            ListNode *curr = head;
            while (fast!=NULL && fast->next!=NULL){
                fast=fast->next->next;
                curr=curr->next;
            } 
            return curr;
        }
```

# **Reverse a linked List {Iterative}**

```cpp
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *temp;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
           prev=curr;
            curr=temp;
        }
        return prev;
        
    }
};
```

# Merge Sort Merge in Linked List

```cpp
class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1 == NULL) return l2; 

        if(l2 == NULL) return l1;

        if(l1->val > l2->val) std::swap(l1,l2);

        ListNode* res = l1;

        while(l1 != NULL && l2 != NULL) {
 
            ListNode* temp = NULL;

            while(l1 != NULL && l1->val <= l2->val) {

                temp = l1;
                l1 = l1->next;
            }

            temp->next = l2;
            std::swap(l1,l2);
        }

        return res;
    }
};
```