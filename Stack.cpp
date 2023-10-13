/*
Stack operations:
1. push ---> top++
2. pop ---> top--
3. isEmpty --> if top == -1
4. isFull
5. peek
6. count
7. change
8. display
Array as a stack.
Counter: how many elements are in the stack -- top = -1
*/

#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++) // array length
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == 4) // array length - 1
            return true;
        else
            return false;
    }

    void push(int a)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = a;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else
        {
            int popval = arr[top];
            arr[top] = 0;
            top--;
            return popval;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int index)
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        else
        {
            return arr[index];
        }
    }

    void change(int index, int val)
    {
        arr[index] = val;
        cout << "The value at index: " << index << "is changed to: " << arr[index] << endl;
    }

    void display()
    {
        cout << "All the values in the stack are: " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};


int main()
{
    Stack s1;
    int option, pos, val;
    cout << "Stack is created. Choose your option" << endl;
    do
    {
        cout << "What operation do you want to perform? Enter option number. Enter 0 to exit." << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Peek" << endl;
        cout << "6. Count" << endl;
        cout << "7.Change" << endl;
        cout << "8. Display" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter a value to push" << endl;
            cin >> val;
            s1.push(val);
            break;

        case 2:
            cout << "Pop function called - value is: " << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;
        case 4:
            if (s1.isFull())
                cout << "Stack is full" << endl;
            else
                cout << "Stack is not full" << endl;
            break;
        case 5:
            cout <<"Enter the position which you want to peek" << endl;
            cin >> pos;
            cout << "Peek function called - Value at position: "<< pos << "is: "<< s1.peek(pos) << endl;
            break;
        case 6:
            cout << "Count function called. The number of items in the stack are: " << s1.count() << endl;
            break;
        case 7:
            cout << "Enter the position of item you want to change: " ;
            cin >> pos;
            cout << endl;
            cout << "Enter the value: ";
            cin>>val;
            s1.change(pos,val);
            break;
        case 8:
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter another value:" << endl;
        }

    } while (option != 0);

    return 0;
}
