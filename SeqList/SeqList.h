#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

struct SeqList {
	int* arr;
	int capacity;
	int val;
};

void Init_list(struct SeqList* s, int length);
void PushBack(struct SeqList* s, int pos);
void ShowSeq(struct SeqList* s);
bool is_empty(struct SeqList* s);
bool is_full(struct SeqList*s);
void SortSeq(struct SeqList* s);
void Inversion(struct SeqList* s);
int Get(struct SeqList* s, int pos);
void Insert(struct SeqList* s, int pos, int tmp);
void Swap(int* a, int* b);


