GXX := g++
GXX_FLAGS :=
SRC := src
BIN := bin
EXECUTABLE := main

all: compile

compile: $(SRC)/*.cpp
	@read -p "Enter executable name: " ARCHIVE \
	&& $(GXX) $(GXX_FLAGS) $(SRC)/$${ARCHIVE}.cpp -o $(BIN)/$${ARCHIVE} \
	&& clear \
	&& ./$(BIN)/$${ARCHIVE}
