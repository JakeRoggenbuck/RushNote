CC=g++

make: rush.cpp
	$(CC) -o /bin/rushnote rush.cpp

install:
	cp rushnote /usr/share/man/man1/rushnote
	gzip /usr/share/man/man1/rushnote
