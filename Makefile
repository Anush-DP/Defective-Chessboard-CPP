all: compile run
compile:
	@echo "Compiling the program..."
	@g++ main.cpp chess.cpp printsq.cpp -Wall -o dc
	@echo Done!
run:	dc
	@echo "Now you can run the program by typing: ./dc"