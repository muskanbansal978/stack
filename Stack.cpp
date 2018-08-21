#include <iostream>
using namespace std;
class stack
{
   int top;
   int max=1000;
    public:
        int a[];
        stack()
        { a[max];
            top = -1;
        }
        bool push(int x);
        int pop();
        bool isEmpty();

};

bool stack::push(int x)
// :: is used for function definition outside the class
{
    if(top>= max-1)
    {
        cout<<"Stack overflow";
        return false;
    }
    else
    {
        a[++top];
    }

}
int stack::pop()
{
    if(top<0)
    {
        cout<<"Stack underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
    }

}
bool stack::isEmpty()
{
    return (top<0);
}
int main()
{
    int max=1000;

     stack s;
    s.pop();
    s.push(10);
    s.push(5);
    s.pop();

    return 0;
}
