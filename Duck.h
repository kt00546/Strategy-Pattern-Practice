#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <string>

using namespace std;

class Duck {
public:
	Duck();

	Duck(string Name, int Color);

	~Duck();

	void fly();

	void quack();

	void swim();

	void print(char *str);

	void showName();

	void showColor();

	virtual bool isOverride();

private:
	int mColor;
	string mName;

public:
    int a, b;
};

#endif