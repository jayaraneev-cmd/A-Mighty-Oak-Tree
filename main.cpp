#include <iostream>
#include "src/hello.hpp"

using namespace std;

int main() {
    Squirrel cheeks("Cheeks");
    Node node_one(&cheeks);

    Squirrel squeaks("Squeaks");
    Node node_two(&squeaks);

    Squirrel fluffy("Mr. Fluffy Butt");
    Node node_three(&fluffy);

    node_one.set_left(&node_two);
    node_one.set_right(&node_three);

    cout << node_one.left()->get_data()->get_name() << endl;
    cout << node_one.right()->get_data()->get_name() << endl;

    return 0;
}