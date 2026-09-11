prog: lesson2.o
	g++ -std=c++11 -o prog lesson2.o

lesson2.o:
	g++ -std=c++11 -c lesson2/lesson2.cpp

clean:
	rm -f *.o
	rm prog