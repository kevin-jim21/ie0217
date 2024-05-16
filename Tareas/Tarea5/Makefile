#/**
 #* @file Makefile
 #* @brief Archivo para compilar y ejecutar programa Validador de Correos con reglas: "all", "build", "run" y "clean".
 #*
 #* MIT License
 #*
 #* Copyright (c) [2024] [Kevin Jiménez Acuña]
 #*
 #* Permission is hereby granted, free of charge, to any person obtaining a copy
 #* of this software and associated documentation files (the "Software"), to deal
 #* in the Software without restriction, including without limitation the rights
 #* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 #* copies of the Software, and to permit persons to whom the Software is
 #* furnished to do so, subject to the following conditions:

 #* The above copyright notice and this permission notice shall be included in all
 #* copies or substantial portions of the Software.
 #*
 #* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 #* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 #* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 #* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 #* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 #* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 #* SOFTWARE.
 #*/

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