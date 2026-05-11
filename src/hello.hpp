#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string name);
    string get_name();
};

class Node {
private:
    Squirrel* data;
    Node* leftChild;
    Node* rightChild;

public:
    Node(Squirrel* s);

    void set_left(Node* node);
    void set_right(Node* node);

    Node* left();
    Node* right();

    Squirrel* get_data();
};

#endif