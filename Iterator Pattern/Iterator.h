#pragma once

template<class T>
class IIterator
{
public:
	virtual ~IIterator() {}
	virtual bool hasNext() = 0;
	virtual T next() = 0;
};