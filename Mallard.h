#include "Duck.h"

class Mallard : public Duck {
public:
	Mallard();

	~Mallard();

	void dosomething();

	bool isOverride();

	//void fly();

private:
	bool mCanSwim;

};