#include <iostream>
#include "Object.hpp"
#include "Triangle.hpp"
#include "RightAngled.hpp"

using namespace std;

int main() {
    RightAngled t1, t2;
    Read(t1);
    t2 = t1;
    Display(t2);
    cout << "Object count: " << t1.get_count() << endl;
    return 0;
}

