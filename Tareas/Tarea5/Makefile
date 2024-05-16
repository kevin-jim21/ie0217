#Archivo para compilar y ejecutar programa Validador de Correos con reglas: "all", "build", "run" y "clean"

# Borrar archivos para OS Windows y Linux
ifeq ($(OS), Windows_NT)
	RM = del
	RMDIR = rmdir /s /q
else
	RM = rm
	RMDIR = rm -rf
endif

# Compilador 
CXX = g++

# Banderas de compilacion
CXXFLAGS = -Wall -std=c++11

# En src se va a encontrar los source files y headerfiles, en bin los ejecutables
SRC_DIR = src
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)
EXECUTABLE = $(BIN_DIR)/tarea5.x

# Regla all para compilar y ejecutar el programa
all: build run

build: $(BIN_DIR) $(EXECUTABLE)

# Crear directorio para archivos binarios
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Crear archivos objeto
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compilar archivos objeto
$(BIN_DIR)/%.exe : $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para ejecutar el programa
run:
	./$(EXECUTABLE)

# Regla para borrar los ejecutables creados despues de compilar
.PHONY: clean
clean:
	$(RMDIR) $(BIN_DIR)