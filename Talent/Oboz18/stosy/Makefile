all: stosy
	@echo Done!

stosy:
	g++ src/stosy.cc -o bin/stosy.e -std=c++11 -O2 -static -Wall

sstosy:
	g++ src/sstosy.cc -o bin/sstosy.e -std=c++11 -O2 -static -Wall

gen:
	g++ src/gen.cc -o bin/gen.e -std=c++11 -O2 -static -Wall

run: stosy
	./bin/stosy.e

