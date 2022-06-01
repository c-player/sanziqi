#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);

//判断胜利方
//电脑赢，返回#
//玩家赢，返回*
//平局，返回Q
//继续游戏，返回C
char isWin(char board[ROW][COL], int row, int col);

//判断棋盘是否满了
int isFull(char board[ROW][COL], int row, int col);