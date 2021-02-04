#include <iostream>

#include "addressbook.pb.h"

using namespace std;

int main()
{
    tutorial::Person addr;

    addr.set_name("Doctor Feldman");

    cout << "Hello World!" << endl;
    cout << "addr.name() = " << addr.name() << endl;
    return 0;
}
