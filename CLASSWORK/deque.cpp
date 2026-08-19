#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    // push_front(x) - Insert x at front
    dq.push_front(10);
    dq.push_front(20);

    // push_back(x) - Insert x at rear
    dq.push_back(30);
    dq.push_back(40);

    cout << "Deque elements: ";
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // front() - Get front element
    cout << "Front element: " << dq.front() << endl;

    // back() - Get rear element
    cout << "Back element: " << dq.back() << endl;

    // size() - Number of elements
    cout << "Size: " << dq.size() << endl;

    // empty() - Check whether deque is empty
    if (dq.empty())
        cout << "Deque is empty" << endl;
    else
        cout << "Deque is not empty" << endl;

    // pop_front() - Delete front element
    dq.pop_front();

    cout << "After pop_front(): ";
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // pop_back() - Delete rear element
    dq.pop_back();

    cout << "After pop_back(): ";
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}