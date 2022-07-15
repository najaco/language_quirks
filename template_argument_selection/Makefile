CC=g++
CFLAGS=-I. -std=c++11
TARGET_DIR=target
.PHONY: all clean

all: main

$(TARGET_DIR):
	mkdir $(TARGET_DIR)

main: $(TARGET_DIR)
	$(CC) $(CFLAGS) -o $(TARGET_DIR)/$@ main.cpp

clean:
	@rm -rf $(TARGET_DIR)