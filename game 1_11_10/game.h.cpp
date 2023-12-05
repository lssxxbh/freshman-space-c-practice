#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define row 3
#define col 3

void newboard (char board[row][col],int a,int b);
void printfboard(char board[row][col], int a, int b);
void wegame(char board[][col], int a, int b);
void cmgame(char board[][col], int a, int b);
char ifput(char board[][col], int a, int b);
void ifaret(char ret);