#include<iostream>
using namespace std;
const int size=25;
class stacks
{


    int top;
public:
char stack[size];
    stacks()
    {
        top=-1;
    }

    int push(char);
    char pop();
    void display();
    void count_elements();
    int isEmpty();
    char topElement();
};


// function to implement the push operation of stack.
int stacks::push(char element)
{
    if(top==(size-1))
    {
        cout<<"overflow, more elements cannot be inserted \n";
        return 0;
    }
    else
    {
        stack [++top] =element;
    }
    return 1;
}


//function to pop the element from the stack
char stacks::pop ()
{
    char temp=0;
    // Examine whether stack is empty or not.
    if (top==-1) // top=-1 indicates the empty state of stack 56
    {
        cout<<"underflow: \n";
    }
    else
    {
        temp=stack [top--];
    }
    return temp;
}
// To examine whether the stack is empty.
int stacks::isEmpty ()
{
    if (top==-1)
        return 1;
    else
        return 0;
}

// Program to display the element(s) of the stack.
void stacks::display ()
{
    for (int i=top; i>=0; i--)
        cout<<stack[i]<<" ";
    cout<<endl;

}

//Return the TOP element
char stacks::topElement()
{
    return stack[top];
}

// QUEUE 89
/*class Q
{
    int front, rear;
    char queue[size];
public:
    Q( );
    void enqueue(char);
    char dequeue();
    void display();
    //int isEmpty();
};

/*Q::Q()
{
    front=rear=-1;
}
void Q::enqueue(char element)
{
    if(((rear-front)==(size-1))&&(rear==(size-1)))
    {
        cout<<"overflow element cannot be entered\n";
        return;
    }
    else if(front==-1)
    {
        queue[++rear]=element;
        front=0;
    }
    else if(rear<(size-1))
    {
        queue[++rear]=element;
    }
}*/
main()
{
stacks s;
stacks s1;
s.push(4);s.push(4);s.push(3);s.push(4);s.push(7);
s1.push(8);s1.push(7);s1.push(7);s1.push(9);s1.push(5);
    for(int i=0; i<5; i++)
    {


     cout<<s.stack[i]+s1.pop()<<endl;

    }

}
