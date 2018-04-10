#include "Duck.h"

class RedHeadDuck : public Duck {
public:
	RedHeadDuck() = default;

	~RedHeadDuck();

	void fly();

	bool isOverride();

};