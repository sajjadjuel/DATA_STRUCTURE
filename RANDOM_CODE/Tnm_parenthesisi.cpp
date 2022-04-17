#include <iostream>
#include <string.h>
#include<conio.h>
#include<stdio.h>
#define MAXSIZE 20
using namespace std;

struct Stack {
    int top;
    int a[MAXSIZE];
} st;

int isFull() {
    if(st.top >= MAXSIZE-1)
        return 1;
    else
        return 0;
}

int isEmpty() {
 if(st.top == -1)
     return 1;
 else
     return 0;
}

void push(int num) {
    if (isFull())
        cout<<"Stack is full";
    else {
        st.a[st.top + 1] = num;
        st.top++;
    }
}

int pop() {
    if (isEmpty())
        cout<<"Stack is empty";
    else {
     st.top = st.top - 1;
        return st.a[st.top+1];
    }
}

int main() {
    char s[100], c;
    int i;
    st.top = -1;
    cout<<"Enter a string of Parenthesis : ";
    gets(s);

    for(i = 0; i < strlen(s); i++){
        if(s[i] == '(')
            push(s[i]);
        else if(s[i] == ')')
            pop();
        else { continue; }
    }

    if(isEmpty())
        cout<<"Infix Expression has Valid Parenthesis";
    else
        cout<<"Infix Expression has Invalid Parenthesis";

    return 0;
}
