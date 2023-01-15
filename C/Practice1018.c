#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int	minimum_wrong_chessboard(int board[8][8]);
int	main(void)
{
	int		*given;
	int		size_x;
	int		size_y;
	char	ch;
	int		board[8][8];

	//two dimentional array with pointer
	scanf("%d %d", &size_x, &size_y);
	given = (int *)malloc(sizeof(int) * size_x * size_y);
	for (int i = 0; i < size_x; i++)
	{
		scanf("%c", &ch);
		for (int j = 0; j < size_y; j++)
		{
			scanf("%c", &ch);
			if (isspace(ch))
				given[i * size_y + j] = 8;
			else if (ch == 'W')
			{
				given[i * size_y + j] = 1;
			}
			else if (ch == 'B')
			{
				given[i * size_y + j] = 0;
			}
		}
	}
	printf("^^");
	
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					board[i][j] = given[(i)*size_y + (j)];
				}
			}

	printf("%d", minimum_wrong_chessboard(board));
	free(given);
	return (0);
}

int	minimum_wrong_chessboard(int board[8][8])
{
	int black_count = 0;
	int white_count = 0;

	int white[8][8];
	int black[8][8];

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			white[i][j] = ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j
						% 2 == 1)) ? 1 : 0;
			black[i][j] = ((i % 2 == 1 && j % 2 == 0) || (i % 2 == 0 && j
						% 2 == 1)) ? 1 : 0;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (white[i][j] != board[i][j])
			{
				white_count++;
			}
			if (black[i][j] != board[i][j])
			{
				black_count++;
			}
		}
	}

	if (white_count > black_count)
	{
		return (black_count);
	}
	return (white_count);
}