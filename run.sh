#!bin/bash/
echo "Compiling the program..."
g++ main.cpp chess.cpp printsq.cpp -Wall -o dc
echo Done!
echo "Now you can run the program by typing: ./dc"