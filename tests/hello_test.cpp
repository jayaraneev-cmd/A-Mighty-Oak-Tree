#include "../src/hello.hpp"
#include <cassert>

int main() {
    Squirrel s("Test");
    Node n(&s);

    assert(n.get_data()->get_name() == "Test");

    Node left(nullptr);
    n.set_left(&left);

    assert(n.left() == &left);

    return 0;
}
