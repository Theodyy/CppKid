#include <iostream>
#if 1
int fun1()   { return 10;  }
char fun2()  { return 'g'; }

int main()
{
    // Data type of x is same as return type of fun1()
    // and type of y is same as return type of fun2()
    decltype(fun1()) x;
    decltype(fun2()) y;

    cout <<  typeid(x).hash_code() << endl;
    cout <<  typeid(y).name() << endl;

    return 0;
}
#endif
