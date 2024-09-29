CC = g++
CXXFLAGS = -O2 -std=c++20
LDFLAGS =

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

APP = SnakeGame.exe

all: $(APP)

clean:
    rm -f *.o $(APP)

help:
    @echo Usage:
    @echo make - build application
    @echo make clean - remove build artifacts
    @echo make help - show help

$(APP): $(OBJ)
    $(CC) $(OBJ) -o $(APP) $(LDFLAGS)

%.o: %.cpp
    $(CC) -c $< $(CXXFLAGS) -o $@
