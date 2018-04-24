

all:checkdir bin/prog

bin/prog:build/chessviz.o build/form.o build/FirstDoska.o build/board.o
	gcc build/chessviz.o build/form.o build/FirstDoska.o build/board.o -o bin/prog
build/chessviz.o:src/chessviz.c
	gcc -c src/chessviz.c -o build/chessviz.o -Wall -Werror
build/form.o:src/form.c
	gcc -c src/form.c -o build/form.o -Wall -Werror
build/FirstDoska.o:src/FirstDoska.c
	gcc -c src/FirstDoska.c -o build/FirstDoska.o -Wall -Werror
build/board.o:src/board.c
	gcc -c src/board.c -o build/board.o -Wall -Werror
clean:
	rm –rf *.o 

checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi
