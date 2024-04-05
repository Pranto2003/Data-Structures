#include <iostream>
using namespace std;

struct Person {
    string name;
    Person* child;
};

int main() {
    Person p;
    p.name = "Pranto";
    p.child = new Person[2];
    p.child[0].name = "Sara";
    p.child[0].child = NULL;
    p.child[1].name = "DEF";
    p.child[1].child = new Person;
    p.child[1].child->name = "XYZ";
    p.child[1].child->child = NULL;

    // Output the values
    cout << "Person: " << p.name << endl;
    cout << "Children: " << endl;
    cout << "1. " << p.child[0].name << endl;
    cout << "2. " << p.child[1].name << endl;
    cout << "   Grandchild: " << p.child[1].child->name << endl;

    // Deallocate memory for dynamic objects
    delete[] p.child;  // Deallocate memory for dynamic array
    delete p.child[1].child;  // Deallocate memory for single object

    return 0;
}
