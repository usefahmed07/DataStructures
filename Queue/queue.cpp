#include <iostream>
using namespace std;

// Queue
// Simple Queue using array

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;



// function prototypes
void enqueue(int value);
void dequeue();
int peek();
void display();




int main ()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);

    display(); // 5 10 15

    dequeue();

    display(); // 10 15

    cout << "peek = " << peek() << "\n";

    return 0; 
}




// enqueue function
void enqueue(int value)
{
    if (rear != SIZE -1)
    {
        if (rear == -1 && front == -1)
        {
            front ++;
            queue[rear]=value 
        }
        else
        {
            queue[++rear] = value;
        }
        else
        {
            cout <<"This Queue is FULL"<<"\n";
        }
    }
}


// dequeue function
void dequeue()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout << "This queue is empty\n";
    }
}


// peek function
int peek()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        return queue[front]; // بتجيب اول عنصر من غير ما تحذفه
    }
    else
    {
        cout << "This queue is empty\n";
        return -1;
    }
}




// display function
void display()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "This queue is empty\n";
    }
}




// Circular Queue;
#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1 , rear = -1;




// Functions :-
bool isEmpty(); // This is Cheak if each function is empty or no.
bool isFull(); // ... is Full or NO.
void enqueue(int value);
void dequeue();
int peek();
void display();



int main ()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    cout << "Peek = " << peek() << endl;

    display();

    return 0;
}




bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}





bool isFull()
{
  if (front == 0 && rear == (SIZE - 1))
  {
    return true;
  }
  
  else if (rear == front - 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}



void enqueue(int value)
{
    if (isFull())
    {
        cout <<"THIS queue is FULL"<<"\n";
    }
    else
    {
        if(isEmpty())
        {
            front = rear = 0;
            queue[rear] = value;
        }
        else if (rear == SIZE - 1)
        {
            rear = 0;
            queue[rear] = value;
        }
        else
        {
            queue[++rear] = value;
        }
    }
}




void dequeue()
{
    if (isEmpty())
    {
        cout <<"This queue is Empty So We Cannot dequeue"<<"\n";
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == SIZE - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}




int peek ()
{
    if (isEmpty())
    {
        cout <<"This queue is Empty"<<"\n";
        return -1;

    }
    else
    {
        return queue[front];
    }
}



void display()
{
    if (isEmpty())
    {
        cout <<"Cannot display because This is queue is empty"<<"\n";
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front ; i <= rear; i++)
            {
                cout << queue[i] <<"\n";
            }
        }
        else
        {
           for (int i = front ; i <= SIZE; i++)
            {
                cout << queue[i] <<"\n";
            }
           for (int i = 0 ; i <= rear; i++)
            {
                cout << queue[i] <<"\n";
            }
        }
    }
}


