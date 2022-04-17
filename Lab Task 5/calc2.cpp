#include<iostream>
#include<conio.h>
#define n 100
using namespace std;
class calculation {
	public:
		int st[n];
		int top;
		char str[n];
		calculation() {
			top = -1;
		}
		void push(int val) {
			top++;
			st[top] = val;
		}
		int pop() {
			int val = st[top];
			top--;
			return val;
		}
		int operation(int a,int b,char op) {
			switch(op) {
				case '+':return a+b;
				case '-':return a-b;
				case '*':return a*b;
				case '/':return a/b;
				default: return 0;
			}
		}
		int calc();
};
int calculation::calc() {
	int index = 0;
	while(str[index]!='\0') {
		if(isdigit(str[index])) {
			push(str[index]-'0');
		}
		else {
			int x = pop();
			int y = pop();
			int result = operation(y,x,str[index]);
			push(result);
		}
		index++;
	}
	return pop();
}
int main() {
	calculation cal;
	cout << "Enter the postfix : ";
	cin >> cal.str;
	cout << "\nThe result is : " <<cal.calc();
	//return 0;
	getch();
}
