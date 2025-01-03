#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(22);
    q.push(33);
    q.push(43);

    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}
