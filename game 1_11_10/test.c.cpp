#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h.cpp"


void meun()
{
	printf("******************************************************************\n");
	printf("**************************** 1.play ******************************\n");
	printf("**************************** 0.exit ******************************\n");
	printf("******************************************************************\n");
}

void game()
{
	char ret = '0';
	char board[row][col] = { 0 };
	newboard(board, row, col);
	printfboard(board, row, col);
	while (1)
	{
		char ret = '0';
		wegame(board, row, col);
		printfboard(board, row, col);
		ret=ifput(board, row, col);
		ifaret(ret);
		if (ret != 'c')
			break;
		cmgame(board, row, col);
		printfboard(board, row, col);
		ret = ifput(board, row, col);
		ifaret(ret);
		if (ret != 'c')
			break;
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		meun();
		printf("请选择：>1 or 0\n");
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
			printf("输入错误，请重新输入：>\n");
			break;
		}

	} while (input);

	return 0;
}