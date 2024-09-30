CC = g++
CXXFLAGS = -O2 -std=c++20 -I include
LDFLAGS = -L lib

BINDIR = bin
OBJDIR = obj

OBJ = $(patsubst %.cpp, $(OBJDIR)/%.o, $(wildcard *.cpp))

APP = SnakeGame.exe

all: prepare $(APP)

prepare:
	@if not exist $(OBJDIR) mkdir $(OBJDIR)
	@if not exist $(BINDIR) mkdir $(BINDIR)

clean:
	del /Q $(OBJDIR)\*.o
	del /Q $(BINDIR)\*

help:
	@echo Usage:
	@echo make - build application
	@echo make clean - remove build artifacts
	@echo make help - show help

$(APP): $(OBJ)
	$(CC) $(OBJ) -o $(BINDIR)/$(APP) $(LDFLAGS)

$(OBJDIR)/%.o: %.cpp
	$(CC) -c $< $(CXXFLAGS) -o $@
