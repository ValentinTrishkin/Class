#pragma once
class Counter
{
public:
	void increase();
	void decrease();
	int getNum();
	Counter();
	Counter(int num);
private:
	int num_ = 1;
};

