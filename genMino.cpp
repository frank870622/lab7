#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 4
#define MINO_S 0
#define MINO_I 1
#define MINO_Z 2
#define MINO_O 3

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
		case MINO_Z:
			ptr = new MinoZ;
			break;
		case MINO_O:
			ptr = new MinoO;
			break;
	}
	return ptr;
}
