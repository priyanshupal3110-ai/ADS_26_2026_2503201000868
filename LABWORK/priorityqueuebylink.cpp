#include <iostream>

using namespace std;

struct Node
{
    int data;
    int priority;
    Node* next;
};

class PriorityQueue
{
private:
    Node* front;
public:
// Constructor
PriorityQueue() {

front = NULL;

}

void insert(int data, int priority) {

Node* newNode = new Node;
newNode->data = data;
newNode->priority = priority;
newNode->next = NULL;

if (front == NULL || priority < front->priority)
{
newNode->next = front;
front = newNode;
}
else
{

Node* temp = front;

while (temp->next != NULL &&

temp->next->priority <= priority)

{
temp = temp->next;
}

newNode->next = temp->next;
temp->next = newNode;
}
cout << "Element inserted successfully." << endl;
}
void display()
{
if (front == NULL) {
cout << "Priority Queue is empty!" << endl;
return;
}

Node* temp = front;
cout << "\nData \t Priority\n";
while (temp != NULL)
{
cout << temp->data << "\t" << temp->priority << endl;
temp = temp->next;
}
}

void deleteElement()
{
if (front == NULL) {
cout << "Priority Queue Underflow!" << endl;
return;
}

Node* temp = front;
cout << "Element deleted: " << temp->data << " with priority " << temp->priority << endl;
front = front->next;
delete temp;
}
int main()
{
PriorityQueue pq;

pq.insert(10, 3);

pq.insert(20, 1);

pq.insert(30, 2);

pq.insert(40, 4);

pq.display();
return 0;
}