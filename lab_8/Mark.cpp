#include "stdafx.h"
#include <iostream>
#include "Mark.h"

using namespace std;

void Mark::show(void) const
{
	cout << "mark=" << m_mark << endl;
}

const Mark operator + (int n, const Mark& m)
{
	Mark tmp(0);
	tmp.m_mark = n + m.m_mark;
	return tmp;
}

const Mark operator * (int n, const Mark& m)
{
	Mark tmp(0);
	tmp.m_mark = n * m.m_mark;
	return tmp;
};

std::ostream& operator << (std::ostream& os, const Mark& m)
{
	os <<  m.m_mark ;
	return os;
}

std::istream& operator >> (std::istream& is, Mark& m)
{
	is >> m.m_mark;
	if(!(m.m_mark >= 1 && m.m_mark <= 12))
		m.m_mark = 1;
	return is;
}