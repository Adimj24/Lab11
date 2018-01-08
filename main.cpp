#include <iostream>
#include <vector>>

using namespace std;

template <typename T>
class Stack{

public:
    vector <T> vect;
    void push(T element)
    {
        vect.push_back(element);
    }
    void pop();
    bool Empty();
    T top();

};

template <typename T>
void Stack<T>::pop()
{
    if(vect.empty()==0)
        vect.pop_back();
}

template <typename T>
bool Stack<T>::Empty()
{
    return vect.empty();
}

template <typename T>
T Stack<T>::top()
{
    return vect.back();
}

int main(){

    Stack<int> int_stack;
    Stack<float> float_stack;

    float_stack.push(2.5);
    cout<<float_stack.top()<<endl;

    int_stack.push(1);
    int_stack.push(2);
    int_stack.push(3);
    cout<<int_stack.top()<<endl;

    if(int_stack.Empty() == 0)
        cout<<"Stiva nu e goala"<<endl;
    else cout<<"Stiva e goala"<<endl;

    int_stack.push(4);
    cout<<int_stack.top()<<endl;

    int_stack.pop();
    int_stack.pop();
    int_stack.pop();
    int_stack.pop();
    if(int_stack.Empty() == 0)
        cout<<"Stiva nu e goala"<<endl;
    else cout<<"Stiva e goala"<<endl;

    return 0;
}
