#include<iostream>
#include<conio.h>
#include<cmath>
#include<ctime>
#include<time.h>
#include<windows.h>
using namespace std;
void printMaze();
void calculateScore();
void printScore();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
int ghostDirection();
bool ghostMovement();
void imaze();
char maze[24][71] = {
{"#####################################################################"},
{"||.. .....................................................  ......  ||"},
{"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"},
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
{"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"},
{"||..        |%|       . . |%|...    ............... |%| ..       .  ||"},
{"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"},
{"||..               |%|.             |%|......       |%| ..    |%|.  ||"},
{"||..     ......... |%|.        P    |%|......|%|        ..    |%|.  ||"},
{"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"},
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
{"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
{"||...............................................   |%| ..........  ||"},
{"||   ............................................          .......  ||"},
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
{"||..|%|            .     G     ...|%|               |%| ..|%|.      ||"},
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
{"||...............................................   |%| ..........  ||"},
{"||  .............................................          .......  ||"},
{"#####################################################################"}};

int pacmanX = 9;  // X Coordinate of Pacman
int pacmanY = 31; // Y Coordinate of Pacman
int score = 0;

int ghostX = 19;  // X Coordinate of Ghost
int ghostY = 25;  // Y Coordinate of Ghost
char previousItem = ' ';

main()
{
    
    bool gameRunning = true;
    while (gameRunning)
    {
        Sleep(100);
        system("CLS");
        printMaze();
        gameRunning = ghostMovement();
        printScore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePacmanLeft(); // Function call to move Pacman towards left
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight(); // Function call to move Pacman towards right
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePacmanUp(); // Function call to move Pacman towards up
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown(); // Function call to move Pacman towards down
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false; // Stop the game
        }
    }
}
void printMaze()
{
    for (int row = 0; row < 24; row = row + 1)
    {
        for (int col = 0; col < 71; col = col + 1)
        {
            cout << maze[row][col];
        }
        cout << endl;
    }
}
void calculateScore()
{
    score = score + 1;
}
void printScore()
{
    cout << endl << "Score: " << score << endl;
}
void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.')
    {
                  
        maze[pacmanX][pacmanY] = ' ';
        pacmanY = pacmanY - 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanRight()
{
    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        pacmanY = pacmanY + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanUp()
{
    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        pacmanX = pacmanX - 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
        maze[pacmanX][pacmanY] = 'P';
    }
}

void movePacmanDown()
{
    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.')
    {
        maze[pacmanX][pacmanY] = ' ';
        pacmanX = pacmanX + 1;
        if (maze[pacmanX][pacmanY] == '.')
        {
        calculateScore();
        }
        maze[pacmanX][pacmanY] = 'P';
    }
}
int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}
bool ghostMovement()
{
    int value = ghostDirection();
    if (value == 1)
    {
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[ghostX][ghostY] = 'G';
        }
    }
    if (value == 2)
    {
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostY = ghostY + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[ghostX][ghostY] = 'G';
        }
    }
    if (value == 3)
    {
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX - 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[ghostX][ghostY] = 'G';
        }
    }
    if (value == 4)
    {
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == '.')
        {
            maze[ghostX][ghostY] = previousItem;
            ghostX = ghostX + 1;
            previousItem = maze[ghostX][ghostY];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[ghostX][ghostY] = 'G';
        }
    }
    return 1;
}


