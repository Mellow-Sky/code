#pragma once

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//控制行和列
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//声明函数
void test();
void InitBoard(char arr[ROWS][COLS], int rows ,int cols,char set);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);