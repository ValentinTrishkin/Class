#include "Counter.h"

void Counter::increase()
{
	++num_;
};

void Counter::decrease()
{
	--num_;
};

int Counter::getNum()
{
	return num_;
}

Counter::Counter()
{};

Counter::Counter(int num)
{
	num_ = num;
};
