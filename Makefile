

all:checkdir bin/prog 

test:bin/chessviz-test

bin/prog:build/chessviz.o build/form.o build/FirstDoska.o build/board.o
	gcc build/chessviz.o build/form.o build/FirstDoska.o build/board.o -o bin/prog
bin/chessviz-test: build/main_test.o build/form.o build/FirstDoska.o build/board.o
	gcc -Wall -Werror build/main_test.o build/form.o build/FirstDoska.o build/board.o -o bin/chessviz-test
build/chessviz.o:src/chessviz.c
	gcc -c src/chessviz.c -o build/chessviz.o -Wall -Werror
build/form.o:src/form.c
	gcc -c src/form.c -o build/form.o -Wall -Werror
build/FirstDoska.o:src/FirstDoska.c
	gcc -c src/FirstDoska.c -o build/FirstDoska.o -Wall -Werror
build/board.o:src/board.c
	gcc -c src/board.c -o build/board.o -Wall -Werror

build/main_test.o: test/main.c
	gcc -I thirdparty -I src -c test/main.c -o build/main_test.o
clean:
	rm –rf *.o 

checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi
