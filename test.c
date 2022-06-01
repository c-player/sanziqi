#define _CRT_SECURE_NO_WARNINGS 1

#include "sanziqi.h"


void menu()
{
	printf("******************************\n");
	printf("**** 1.play game  0.exit *****\n");
	printf("******************************\n");
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);     //初始化
	DisplayBoard(board, ROW, COL);  //打印
	while (1)
	{
		PlayerMove(board, ROW, COL);    //玩家走
		DisplayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);  //电脑走
		DisplayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')      printf("玩家赢。\n");
	else if (ret == '#') printf("电脑赢。\n");
	else                 printf("平局。\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
    return 0;
}