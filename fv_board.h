#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meun();
#define ROW 3
#define COL 3
///��ʼ������
void init_board(char board[ROW][COL], int row, int col);
//��ӡ���� 
void dispaly_board(char board[ROW][COL], int row, int col);
//�����
void player_move(char board[ROW][COL], int row, int col);
//������
void pc_move(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col);
