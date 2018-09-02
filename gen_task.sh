#! /bin/bash

echo "contest name:"
read contest
echo "task codename:"
read task 

echo "Copying stuff..."
mkdir -p $contest/$task/src
cp .tools/template.cc $contest/$task/src/$task.cc

cd $contest/$task
mkdir bin
mkdir tests 

# Makefile
echo "Generating makefile --"
echo "all: $task" >> Makefile
echo "	@echo Done!" >> Makefile
echo "" >> Makefile
echo "$task:" >> Makefile
echo "	g++ src/$task.cc -o bin/$task.e -std=c++11 -O2 -static -Wall" >> Makefile
echo "" >> Makefile
echo "s$task:" >> Makefile
echo "	g++ src/s$task.cc -o bin/s$task.e -std=c++11 -O2 -static -Wall" >> Makefile
echo "" >> Makefile
echo "gen:" >> Makefile
echo "	g++ src/gen.cc -o bin/gen.e -std=c++11 -O2 -static -Wall" >> Makefile
echo "" >> Makefile
echo "run: $task" >> Makefile
echo "	./bin/$task.e" >> Makefile
echo "" >> Makefile

echo "Done --"
