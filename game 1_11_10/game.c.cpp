#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h.cpp"


void newboard(char board[row][col], int a, int b)
{
	for (int i=0;i<a;i++)
		for (int j = 0; j < b; j++)
		{
			board[i][j] = ' ';
		}
}

void printfboard(char board[row][col], int a, int b)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}

void wegame(char board[row][col], int a, int b)
{

	int x=0, y=0;
	printf("������x,y���꣺>\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x > row || x < 1 || y>col || y < 1)
		{
			printf("��ʽ�������������룺>\n");
		}
		else if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("��ʽ�������������룺>\n");
		}
	}
}

void cmgame(char board[][col], int a, int b)
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char ifput(char board[][col], int a, int b)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1]&&board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	for (int i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] &&board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	if (board[0][0] == board[1][1]&&board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
	if (board[2][0] == board[1][1] &&board[1][1] == board[0][2] && board[1][1] != ' ')
			return board[1][1];
		int num = 1;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
					num = 0;
			}
		}
		if (num == 1)
			return 'o';
		else
			return 'c';
}

void ifaret(char ret)
{
	if (ret == '*')
	{
		printf("���ʤ������! \n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��������\n");

	}
	else if (ret == 'o')
	{
		printf("ƽ��");
	}
	else if (ret == 'c')
	{
		printf("��Ϸ����\n");

	}
}

