/*

Start Date: Jan 7, 2023

Baekjoon Question 2742
https://www.acmicpc.net/problem/2742

<기찍 N>
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

<Input>
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

<Output>
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

*/

#include <stdio.h>
int	main(void)
{
	int repeat, i;
	
	for (scanf("%d", &repeat); repeat>0; repeat--)
	{
		printf("%d\n", repeat);
	}
}