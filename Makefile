CC=g++
CFLAGS=-Wall -pedantic
OBJS= main.o channels.o
TARGET= main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
channels.o: channels.cpp
	$(CC) $(CFLAGS) -c channels.cpp
clean:
	rm *.o -f $(TARGET)
