#include <iostream>
using namespace std;

class C;
class B;
class A
{
public:
    int val;

    A(int val)
    {
        this->val = val;
    }

    friend void greatestNumberRepeater(A &obj1, B &obj2, C &obj3);
};

class B
{
public:
    int val;

    B(int val)
    {
        this->val = val;
    }

    friend void greatestNumberRepeater(A &obj1, B &obj2, C &obj3);
};

class C
{
public:
    int val;

    C(int val)
    {
        this->val = val;
    }

    friend void greatestNumberRepeater(A &obj1, B &obj2, C &obj3);
};

void greatestNumberRepeater(A &obj1, B &obj2, C &obj3)
{
    if (obj1.val > obj2.val && obj1.val > obj3.val)
    {
        cout << "obj1 is greatest " << obj1.val << endl;
    }

    else if (obj2.val > obj1.val && obj2.val > obj3.val)
    {
        cout << "obj2 is greatest " << obj2.val << endl;
    }
    else
    {
        cout << "obj3 is greatest " << obj3.val << endl;
    }
}

int main()
{
    A obj1(33);
    B obj2(132);
    C obj3(3);

    greatestNumberRepeater(obj1, obj2, obj3);

    return 0;
}
