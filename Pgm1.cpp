/*
Namespaces: an identified declarative region that avoids naming conflicts
Identifiers are accessed using the scope operator ::

The "using" keyword avoids having to wscope each object within the namespace.
Classes, standalone functions etc can be placed in a namespace.

General rule is to only use namespaces when the code is to be used by third parties.
Thus avoiding potential naming conflicts.

All components in the C++ standard library are located within the std namespace.


*/


#include<iostream>
using namespace std;

namespace firstNamespace{
    int a =10;
}

namespace secondNamespace{
    int a =10;
}


int main(){
    
    int c = firstNamespace::a + secondNamespace::a;
    cout << "The total from both namespaces are: "<< c << endl;
    using firstNamespace::a;
    double d = a + secondNamespace::a;
    cout << "Another way is: "<< d << endl;


    return 0;
}