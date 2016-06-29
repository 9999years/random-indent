CC = g++
CFLAGS = -Wall

random-indent random-indent.exe: random-indent.cpp
	$(CC) $(CFLAGS) $? -o $@
