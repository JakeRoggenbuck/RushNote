CC=g++

make: rush.cpp
	$(CC) -o /bin/rushnote rush.cpp

install:
	cp rushnote.1 /usr/share/man/man1/rushnote.1
	gzip /usr/share/man/man1/rushnote.1

path:
	echo "RushNote save file" > ~/.rushnote.txt
