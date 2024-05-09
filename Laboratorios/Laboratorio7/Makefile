# Compilador 
CXX = g++

# Banderas de compilacion
CXXFLAGS = -Wall -std=c++11

# En src se va a encontrar los source files y headerfiles, en bin los ejecutables
SRC_DIR = src
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)
EXECUTABLE = $(BIN_DIR)/textprocessor

# Target para el make
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Borrar los ejecutables creados despues de compilar
clean:
	del $(BIN_DIR)

	