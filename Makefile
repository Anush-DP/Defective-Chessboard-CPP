all: compile run
compile:
	@echo "Compiling the program..."
	@g++ main.cpp DefectiveChessboard.cpp -Wall -o dc
	@echo Done!
run:	dc
	@echo "Now you can run the program by typing: ./dc"