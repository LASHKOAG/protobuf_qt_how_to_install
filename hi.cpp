#include <iostream>
#include "hello.pb.h"

using namespace std;

int main()
{
	candy::Person p;

	p.set_name("ruchi");
	p.set_id(24);
	p.set_email("rk@gmail.com");

	cout << "\n name is = " << p.name();
	cout << "\n id = " << p.id();
	cout << "\n email = " << p.email() << endl << endl;

	return 0;
}
