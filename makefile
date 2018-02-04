tetris5.exe: tetris5.cpp genMino.h genMino.cpp Mino.h MinoS.h MinoI.h
	g++ tetris5.cpp genMino.cpp -o tetris5
MinoI.o: MinoI.h MinoI.cpp Mino.h
	g++ MinoI.cpp -c
MinoS.o: MinoS.h MinoS.cpp Mino.h
	g++ MinoS.cpp -c
Mino.o: Mino.h Mino.cpp
	g++ Mino.cpp -c

