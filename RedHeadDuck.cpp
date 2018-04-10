#include "RedHeadDuck.h"

/*
RedHeadDuck::RedHeadDuck() {
	::cout << "RedHeadDuck construct" << endl;
}
*/

RedHeadDuck::~RedHeadDuck() {

}

void RedHeadDuck::fly() {
	::cout << "flying RedHeadDuck~\n";
}

bool RedHeadDuck::isOverride() {
	::cout << "RedHeadDuck Override\n";
	return false;
}