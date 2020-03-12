#include"SeqList.h"

void Init_list(struct SeqList* s, int length)
{
	s->arr = (int*)malloc(sizeof(int) * length);
	if (NULL == s)
	{
		printf("¿Õ¼ä¿ª±ÙÊ§°Ü\n");
		return -1;
	}
	else
	{
		s->capacity = length;
		s->val = 0;
	}
	return;
}
bool is_full(struct SeqList* s)
{
	if (s->val >= s->capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool is_empty(struct SeqList* s)
{
	if (s->val == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void check_Seq(struct SeqList* s)
{
	if(realloc(s->arr, sizeof(int) * 2 * s->capacity))
	{
		printf("À©ÈÝÊ§°Ü\n");
	}
	else
	{
		s->capacity = s->capacity * 2;
	}
}


void PushBack(struct SeqList* s, int tmp)
{
	if (is_full(s))
	{
		check_Seq(s);
	}
	else
	{
		s->arr[s->val] = tmp;
		(s->val)++;
	}
}
void ShowSeq(struct SeqList* s)
{
	int i = 0;
	for (i = 0; i < s->val; i++)
	{
		printf("%d ",s->arr[i]);
	}
	printf("\n");
}

void SortSeq(struct SeqList* s)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < s->val; i++)
	{
		for (j = i + 1; j < s->val; j++)
		{
			if (s->arr[i] > s->arr[j])
			{
				Swap(&s->arr[i], &s->arr[j]);
			}
		}
			
	}
}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Inversion(struct SeqList* s)
{
	int i = 0;
	int j = s->val-1;
	while (i < j)
	{
		Swap(&s->arr[i],&s->arr[j]);
		i++;
		j--;
	}
}
int Get(struct SeqList* s, int pos)
{
	return s->arr[pos-1];
}
void Insert(struct SeqList* s, int pos, int tmp)
{
	if (pos < 1 || pos > s->val)
	{
		printf("posÊäÈë´íÎó\n");
		return -1;
	}
	else
	{
		int i = 0;
		for (i = s->val - 1; i >= pos - 1; i--)
		{
			s->arr[i + 1] = s->arr[i];
		}
		s->arr[pos - 1] = tmp;
		(s->val)++;
	}
}