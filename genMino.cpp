#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 2
#define MINO_S 0
#define MINO_I 1

Mino* genMino(){
	int mino_type;
	Mino* ptr;

	mino_type = rand() % NUM_MINO;

	switch (mino_type){
		case MINO_S:
			ptr = new MinoS;
			break;
		case MINO_I:
			ptr = new MinoI;
			break;
	}
	return ptr;
}
