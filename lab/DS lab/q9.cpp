#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_front(32);
    l.push_front(312);
    l.push_front(42);

    while (!l.empty())
    {
        cout << l.front() << endl;
        l.pop_front();
    }

    return 0;
}
