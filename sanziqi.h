#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ
void DisplayBoard(char board[ROW][COL],int row,int col);

//�����
void PlayerMove(char board[ROW][COL], int row, int col);

//������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж�ʤ����
//����Ӯ������#
//���Ӯ������*
//ƽ�֣�����Q
//������Ϸ������C
char isWin(char board[ROW][COL], int row, int col);

//�ж������Ƿ�����
int isFull(char board[ROW][COL], int row, int col);