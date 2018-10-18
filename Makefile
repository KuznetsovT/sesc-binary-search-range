run: project
	./project

project: Source.c
	gcc -Wall std=c11 Source.c -o project

build: program
