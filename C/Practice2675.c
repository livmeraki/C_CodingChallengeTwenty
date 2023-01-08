/*

Start Date: Nov 27, 2022
Failed Submission: Output Limit Exceeded...

Baekjoon Question 2675
https://www.acmicpc.net/problem/2577

<문자열 반복>
문자열 S를 입력받은 후에, 각 문자를 R번 반복해 
새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 
즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 
식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

*/

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int testNum, i, j, k;

	scanf("%d", &testNum);
	int repeatNum[testNum];
	char repeatStr[testNum][100];
	for (i = 0; i < testNum;i++)
	{
		scanf("%d ", &repeatNum[i]);
        fgets(repeatStr[i], 100, stdin);
        repeatStr[i][strlen(repeatStr[i])-1] = '\0';
	}
	for (i = 0; i < testNum; i++)
	{
		for (j = 0; j < strlen(repeatStr[i]); j++)
			for (k = 0; k < repeatNum[i]; k++)
				printf("%c", repeatStr[i][j]);
		printf("\n");
	}
	return (0);
}