#ifndef MINOZ_H
#define MINOZ_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoZ: public Mino{
	public:
		MinoZ();
		virtual void paint();
};
#endif
