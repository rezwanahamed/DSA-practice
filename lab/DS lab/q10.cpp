#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(55);
    s.push(43);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
