/*

Start Date: Nov 27, 2022

Baekjoon Question 2577
https://www.acmicpc.net/problem/2577

<숫자의 개수>
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 
결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

*/

#include <stdio.h>

int	main(void)
{
	int	product;
	int	count[10]={0};

	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	product = a * b * c;
	while (product > 0)
	{
		count[product%10]++;
		product /= 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	return (0);
}
