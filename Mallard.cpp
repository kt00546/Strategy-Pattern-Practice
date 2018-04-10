#include "Mallard.h"

Mallard::Mallard() {
	::cout << "Mallard construct" << endl;
}

Mallard::~Mallard() {

}
/*
void Mallard::fly() {
	::cout << "fly away\n";
}*/

void Mallard::dosomething() {
	::cout << "a + b = " << a + b << endl;
}


bool Mallard::isOverride() {
	::cout << "Mallard Override\n";
	return true;
}
