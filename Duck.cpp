#include "Duck.h"

Duck::Duck() {
	::cout << "Duck construct\n";
	this->mName = "";
	this->mColor = 0;
	a = 10;
	b = 12;
}

Duck::Duck(string Name, int Color) {
	::cout << "Duck " << Name << " construct\n";
	this->mName = Name;
	this->mColor = Color;
}

Duck::~Duck() {

}

void Duck::print(char *str) {
	::cout << "Duck print: " << str << "\n";
}

void Duck::showName() {
	::cout << this->mName << endl;
}

void Duck::showColor() {
	::cout <<  this->mColor << endl;
}

void Duck::fly() {
	::cout << "I can fly.\n";
}

void Duck::quack() {
	::cout << "I can quack.\n";
}

void Duck::swim() {
	::cout << "I can swim.\n";
}

bool Duck::isOverride(){
	::cout << "Duck Override\n";
	return false;
}