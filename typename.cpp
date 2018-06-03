#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    string str1 = "QQQ";
    int test = 0;
    float pi = 3.14f;
 
    cout << "Hello, world!" << endl;

    //cout << decltype(test) << endl;
    cout << typeid(str1).name() << endl;
    cout << typeid(test).name() << endl;
    cout << typeid(pi).name() << endl;

    test += 666;

    return 0;
}

