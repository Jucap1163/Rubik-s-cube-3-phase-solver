# Thistlethwaite/Kociemba algorithm
This is an algorithm that solves the rubik's cube in 3 phases, not 2 like Kociemba's algorithm and not 4 like thistlethwaite's algorithm. In fact, it gets the cube in phases 1 and 2 from thistlethwaite's method and completes it with phase 2 of Kociemba's algorithm. These combinations were made according to my knowledge of both algorithms. All of this code results in my own understanding and implementation of the phases in the original algorithms. 

This code is written in C++ with my own coding habits. This is not the optimal way of doing as no STL is used here and only partially object-oriented coding is used. There is definitely room for improvement. 
# Installation

I run this on Qt Creator. You also need visual studio as Qt uses it to implement logic. You can download Qt Creator here: https://www.qt.io/download

You can download visual studio community (which is free for non professional users with the same features) here: https://visualstudio.microsoft.com/vs/community/
Choose C++ when you select the languages you want in VS.

# Usage
Simply copy all the .cpp and .h files in the right folder and replace the directories for the text files in the code where it is mentionned below:

1- In Phase1.cpp line 6: directory for "MovesP1.txt".

2- In Phase2.cpp line 8: directory for "MovesUDP2.txt".

3- In Phase2.cpp line 25: directory for "MovesP2CO.txt".

4- In mainwindow.cpp line 507: directory for "MovesP2COOrdonne.txt".

5 - In mainwindow.cpp line 517: directory for "MovesUDP2Ordonne.txt".

6- In mainwindow.cpp line 534: directory for "PrunageCPetUD.txt".

7- In mainwindow.cpp line 552: directory for "PrunageEPetUD.txt".

8- In mainwindow.cpp line 645: directory for "MovesP2KOcpPourPrunage.txt".

9- In mainwindow.cpp line 780: directory for "MovesP2KOepPourPrunage.txt".

After this is done you run the code and enter the scrambled cube on the GUI. You must load the files before solving the cube. If you do something in the wrong order a window will pop out and tell you your mistake. This is also valid if you enter and unsolvable cube. The solution will pop in a few seconds at worst. **When you apply the moves of the solution, hold the cube with green center facing towards you and white center on top.**

On average the solution is 26 moves long, but it can range anywhere from 19 to 32 moves.

> Written with [StackEdit](https://stackedit.io/).
> 
