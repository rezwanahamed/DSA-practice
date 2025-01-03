#include <iostream>
using namespace std;

class B;
class A
{
public:
    int val;
    A(int val)
    {
        this->val = val;
    }

    friend void swapElements(class A &obj1, class B &obj2);
};

class B
{
public:
    int val;
    B(int val)
    {
        this->val = val;
    }

    friend void swapElements(class A &obj1, class B &obj2);
};

void swapElements(class A &obj1, class B &obj2)
{
    swap(obj1.val, obj2.val);
}

int main()
{
    A obj1(22);
    B obj2(43);

    cout << "Before swap elements: " << endl;
    cout << "Value of class A is: " << obj1.val << endl;
    cout << "Value of class B is: " << obj2.val << endl;

    cout << endl;

    swapElements(obj1, obj2);
    cout << "Value of class A is: " << obj1.val << endl;
    cout << "Value of class B is: " << obj2.val << endl;

    return 0;
}
