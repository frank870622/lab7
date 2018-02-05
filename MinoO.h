#ifndef MINOO_H
#define MINOO_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoO: public Mino{
	public:
		MinoO();
		virtual void paint();
};
#endif
