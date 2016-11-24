#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand

int card[16] = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8 };
int pick[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
int array[4][4] = { 0, };


int main()
{
	int i, j, temp;
	int cnt = 0;

	srand(time(NULL));

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			while (1)
			{
				temp = rand() % 16;
				if (pick[temp] == 1)
				{
					array[i][j] = card[temp];
					pick[temp] = 0;
					break;
				}
			}
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

