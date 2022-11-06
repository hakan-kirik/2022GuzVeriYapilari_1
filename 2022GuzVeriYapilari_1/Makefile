all: build run


build:
	g++ -I ./include/ -o ./lib/DisplayAtConsole.o -c ./src/DisplayAtConsole.cpp
	g++ -I ./include/ -o ./lib/Exception.o -c ./src/Exception.cpp
	g++ -I ./include/ -o ./lib/ReadAndAdd.o -c ./src/ReadAndAdd.cpp
	g++ -I ./include/ -o ./lib/SatirListesi.o -c ./src/SatirListesi.cpp
	g++ -I ./include/ -o ./lib/SatirListesiNode.o -c ./src/SatirListesiNode.cpp
	g++ -I ./include/ -o ./lib/YoneticiListesi.o -c ./src/YoneticiListesi.cpp
	g++ -I ./include/ -o ./lib/YoneticiNode.o -c ./src/YoneticiNode.cpp

	g++ -I ./include/ -o ./bin/main ./lib/DisplayAtConsole.o ./lib/Exception.o ./lib/ReadAndAdd.o ./lib/SatirListesi.o ./lib/SatirListesiNode.o ./lib/YoneticiListesi.o  ./lib/YoneticiNode.o   ./src/main.cpp

run:
	./bin/main