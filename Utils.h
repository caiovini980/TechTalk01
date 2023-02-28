#pragma once
#include <cstdlib>

class Utils
{
public:
	Utils();
	~Utils();
protected:

private:

};

template<typename Type> Type GetRandom(Type offset, Type range)
{
	return offset + (rand() % range);
}