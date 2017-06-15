CXX = g++

CXX_FLAGS = -ggdb -std=c++17
CXX_WARN = -Wall -Werror -pedantic-errors
CXX_INC = -Iinc
CXX_LIBS = -lpthread -LGL -lGLEW -lfreetype -lSDL2 \
		   -lSDL2_image -lSDL2_mixer -lSDL2main

SOURCES = $(wildcard *.cpp) $(wildcard **/*.cpp)

all:
	$(CXX) $(CXX_FLAGS) $(CXX_INC) $(CXX_WARN) $(SOURCES) -o main $(CXX_LIBS)

asm:
	$(CXX) $(CXX_FLAGS) -S $(CXX_INC) $(CXX_WARN) $(SOURCES) -o main $(CXX_LIBS)
