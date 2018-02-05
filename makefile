tetris5.exe: tetris5.cpp genMino.cpp MinoI.o MinoS.o MinoZ.o MinoO.o
	g++ tetris5.cpp genMino.cpp MinoI.o MinoS.o MinoZ.o MinoO.o Mino.o -o tetris5 -g
MinoI.o: MinoI.h MinoI.cpp Mino.o
	g++ MinoI.cpp Mino.o -c
MinoS.o: MinoS.h MinoS.cpp Mino.o
	g++ MinoS.cpp Mino.o -c
MinoZ.o: MinoZ.h MinoZ.cpp Mino.o
	g++ MinoZ.cpp Mino.o -c
MinoO.o: MinoO.h MinoO.cpp Mino.o
	g++ MinoO.cpp Mino.o -c
Mino.o: Mino.h Mino.cpp
	g++ Mino.cpp -c

