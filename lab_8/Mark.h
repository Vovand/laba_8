#pragma once
#include <iostream>

class Mark
{
	int m_mark;
public:
	Mark(int n) :m_mark(n) {
		if (!(n >= 1 && n <= 12))
			m_mark = 1;
	};
	const Mark operator + (int n) const
	{
		Mark tmp(0);
		tmp.m_mark = m_mark + n;
		return tmp;
	};
	const Mark operator * (int n) const
	{
		Mark tmp(0);
		tmp.m_mark = m_mark * n;
		return tmp;
	};
	void show(void) const;

	friend const Mark operator + (int n, const Mark& m);
	friend const Mark operator * (int n, const Mark& m);

	friend std::ostream& operator << (std::ostream& os, const Mark& m);
	friend std::istream& operator >> (std::istream& os, Mark& m);
};

const Mark operator + (int n, const Mark& m);
const Mark operator * (int n, const Mark& m);

std::ostream& operator << (std::ostream& os, const Mark& m);
std::istream& operator >> (std::istream& os, Mark& m);
