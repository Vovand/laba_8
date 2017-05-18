#pragma once
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

};