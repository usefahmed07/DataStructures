#include <iostream>
using namespace std;
// linked list imp.
struct node 
{
   int data;
   node* next;
};



// The Funcion;
 node* head = NULL; 

 void insertNode(int value);
 void display();
 void deleteNode(int value);
 void insert_baginning(int value);
 void delete_beg();
 void delete_end();


 int main ()
 {
    insertNode(10);
    insertNode(15);
    display();
    insert_baginning(5);
    display();
    delete_beg();

    return 0; 
 }





 void insertNode(int value)
 {
    node* new_node , *last;
    new_node = new node;
    new_node->data = value; // تخزين القيمه اللي دخلتها في جزء ال Data
    
    if (head == NULL)
    {
       head = new_node; // The last Nood of linked list.
       new_node->next = NULL; // Because This is the last Nood;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
           last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }

 }






 void display()
 {
    node* current_node; 
    if (head == NULL)
    {
        cout <<"Wrong This Linked List is Empaty"<<"\n";
    }
    else
    {
        current_node = head; // The First
        while(current_node != NULL)
        {
            cout <<current_node->data <<"\n";
            current_node = current_node->next;
        }
    }
 }







 void deleteNode(int value)
 {
    node* current, * previous;

    current = head; // يشاور علي النود اللي عايزين نمسحها
    previous = head; 

    if (current->data == value)
    {
        head = current->next;
        free(current);
        return;
    }
     
    while (current->data != value)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
 }





 void insert_baginning(int value)
 {
    node* new_node = new node; // عملت نود جديده لانج
    new_node->data = value;
    new_node->next = head;
    head = new_node;
 }





 void delete_beg()
 {
    if (head == NULL)
    {
        cout <<"THIS LINKED LIST IS EMPATY"<<"\n";
    }

    else 
    {
        node* first_node = head;
        head = first_node->next;
        delete(first_node);
    }
 }




 void delete_end ()
 {
    if (head == NULL)
    {
        cout <<"This Linked List is empty"<<"\n";
    }

    else if (head->next == NULL) 
    { 
        delete(head);
        head = NULL;
    }


    else
    {
        node* ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;

        }
        delete(prt->next)
        {
            ptr->next = NULL;
        }
    }
 }
