#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *nextNode;
public:
    Node();
    ~Node();
};

Node::Node()
{
}

Node::~Node()
{
}


int main(int argc, char const *argv[])
{
    cout << "Hello World\n";
    return 0;
}
