all:build myexe doc doczip

build:TaskB.o
	g++ -o build TaskB.o 

myexe:TaskB.o 
	g++ -o myexe TaskB.o 

TaskB.o:TaskB.cc
	g++ -c TaskB.cc


doczip:
	zip -r termproject.zip ~/final

clean:
	rm -f build TaskB.o myexe final.zip -r html latex

doc:
	doxygen ./TaskB.cc 
