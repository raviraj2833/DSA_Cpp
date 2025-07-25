#include <iostream>
using namespace std;
// creation of linked list
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}
// using recursion to display the linked list
void displayrec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrec(head->next);
}
void reverseLL(Node *head)
{
    if (head == NULL)
        return;
    reverseLL(head->next);
    cout << head->val << " ";
}
void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;   
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    // linking the nodes
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    insertAtEnd(a,80);
    display(a);
    // display the linked list
    //    display(a);
    // display the linked list using recursion
    //   displayrec(a);

    cout << endl;
    // size of linked list
    cout << "size of LL= " << size(a);
    return 0;
}