#include"SeqList.h"

int main()
{
	struct SeqList s;
	Init_list(&s, 10);
	PushBack(&s, 1);
	PushBack(&s, 7);
	PushBack(&s, 3);
	PushBack(&s, 8);
	PushBack(&s, 5);
	PushBack(&s, 6);
	ShowSeq(&s);
	SortSeq(&s);
	ShowSeq(&s);
	Insert(&s, 3, 10);
	ShowSeq(&s);
	Inversion(&s);
	ShowSeq(&s);
	printf("%d\n", Get(&s, 2));
	ShowSeq(&s);
	return 0;
}