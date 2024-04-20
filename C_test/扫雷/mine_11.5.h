#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 11
#define LINE 11

void initial(char arr1[ROW][LINE], int row, int line, char i);
void print(char arr2[ROW][LINE], int row, int line);
void mine(char arr1[ROW][LINE], int row, int line);
void record(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line);
void related(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line);
void victory(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line);
