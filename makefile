CC = gcc
CFLAGS = -Wall
LDFLAGS =
OBJFILES = main.o parent.o child.o 
TARGET = stacktest

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
	
clean:
	rm -f $(OBJFILES) $(TARGET) *~
