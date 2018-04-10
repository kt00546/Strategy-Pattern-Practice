/*
* Author: Keith Chen
* Date: 2018/04/06
*
* A practice of strategy patten.
* Create different "Duck" class
*
*/

#include <iostream>

#include "Duck.h"
#include "Mallard.h"
#include "RedHeadDuck.h"

using namespace std;

int main(int argc, char *argv[])
{
	Duck duck1 = Duck();
	char str[] = "Hi Duck";
	duck1.print(str);
	duck1.showName();
	duck1.isOverride();

	::cout << "<=============================>\n";

	Duck duck2 = Duck("Ted", 12);
	duck2.showName();
	duck2.showColor();
	duck2.isOverride();

	::cout << "<=============================>\n";

	Duck duck3 = RedHeadDuck();
	duck3.isOverride();

	::cout << "<=============================>\n";

	RedHeadDuck redheadduck = RedHeadDuck();
	redheadduck.isOverride();

	::cout << "<=============================>\n";

	Mallard mallard = Mallard();
	mallard.fly();
	mallard.isOverride();

	::cout << "<=============================>\n";

	Mallard mallard2 = Mallard();
	mallard2.isOverride();
	//mallard2.dosomething();

	cout << argc << endl;

    for(int i = 0; i < argc; i++) {
    	//cout << argv[i] << endl;
    }

	return 0;
}