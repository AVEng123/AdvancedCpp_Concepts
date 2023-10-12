/*
cin is an object of istream class --> standard input stream
>> --> extraction operator
When using cin with strings  only the first word is captured.


typedef --> allows the creation of an alias for a type. Not creating a new type.
Simply providing an alternative name for the type.
typedef type aliasName;
Used to improve the readability of code.
Useful with function pointers that have a complex type.

By default the datatypes are signed.

*/

#include<iostream>
using namespace std;
int main(){
    
    int a =10;
    float b =12.5;
    char c = 'A';
    bool f = false;
    double d = 45.6789;

    typedef int Marks;
    Marks studentmarks = 45;

    cout << "The size of int is: " << sizeof(a) << endl;
    cout << "The size of float is: " << sizeof(b) << endl;
    cout << "The size of char is: " << sizeof(c) << endl;
    cout << "The size of boolean is: " << sizeof(f) << endl;
    cout << "The size of double is: " << sizeof(d) << endl;
    cout << "The size of int is: " << sizeof(studentmarks) << endl;

    return 0;
}