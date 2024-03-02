#=======================================#
# Makefile for CaMau                    #
#=[Options]===============================#
COM = gcc
BIN_DIR = $(BIN)/mauy
BIN = bin
OUTPUT = -o
#=[Files]=================================#
MAIN = main.c
#=======================================#

#===[Build Options]===#
VER = 0.0.5
#==================#

#=======================================#
build: $(MAIN)
	$(info ===== Build Info =====)
	$(info = Version:       $(VER))
	$(info ======================)
	$(COM) $(MAIN) $(OUTPUT) $(BIN_DIR)

clean:
	rm -r $(BIN)
	mkdir $(BIN)

run:
	./$(BIN_DIR)

help:
	$(info ===== help =====)
	$(info build: Builds Mauy.)
	$(info clean: Cleans the $(BIN) folder.)
	$(info run: Runs Mauy,)
	$(info ================)

#=======================================#