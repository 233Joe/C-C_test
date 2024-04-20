#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#pragma once
#define ROW 3
#define LINE 3

void initial(char board[ROW][LINE],int row,int line);

void game(char board[ROW][LINE],int row,int line);

void bot(char board[ROW][LINE]);	
	
int victory(char board[ROW][LINE], char price);

void ending(char branch);
