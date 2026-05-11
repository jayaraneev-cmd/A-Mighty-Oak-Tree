#include "hello.hpp"

// -------- SQUIRREL --------
Squirrel::Squirrel(string name) {
    this->name = name;
}

string Squirrel::get_name() {
    return name;
}

// -------- NODE --------
Node::Node(Squirrel* s) {
    data = s;
    leftChild = nullptr;
    rightChild = nullptr;
}

void Node::set_left(Node* node) {
    leftChild = node;
}

void Node::set_right(Node* node) {
    rightChild = node;
}

Node* Node::left() {
    return leftChild;
}

Node* Node::right() {
    return rightChild;
}

Squirrel* Node::get_data() {
    return data;
}