CFLAGS = -Wall -Werror -MP -MMD
.PHONY: clean all deposit-calc test

all :
	make bin/project

bin/project : build/src/project.o build/src/func.o
	mkdir bin -p
	gcc  build/src/project.o build/src/func.o -o bin/project $(CFLAGS)

build/src/project.o : src/project.cpp src/func.h
	mkdir build -p
	gcc -c src/project.cpp -o build/src/project.o $(CFLAGS)

build/src/func.o : src/func.cpp src/func.h
	mkdir build -p
	gcc -c src/func.cpp -o build/src/func.o $(CFLAGS)

test :
	make bin/project-test
	bin/project-test

bin/project-test : build/test/main.o build/test/func-test.o
	@echo "Making binary"
	@gcc build/test/main.o build/test/func.o build/test/deposit.o -o bin/project-test $(CFLAGS)

build/test/main.o : src/func.h test/main.cpp
	@echo "Making main.o"
	@gcc -I thirdparty -c test/main.cpp -o build/test/main.o $(CFLAGS)
	@gcc -c src/func.cpp -o build/test/func.o $(CFLAGS) 

build/test/func-test.o : src/func.h test/func-test.cpp
	echo "Making func-test.o"
	gcc -c -I thirdparty test/func-test.cpp -o build/test/func-test.o $(CFLAGS)

build/test/func.o : src/func.h src/func.cpp
	@echo "Making func.o"
	@gcc -c src/func.cpp -o build/test/func.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/src/*.d build/test/*.d 
	@rm -rf  build/src/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/project bin/project-test
	@echo "All files have been cleaned."


-include build/*.d