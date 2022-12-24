/*

Start Date: Dec 24, 2022

Baekjoon Question 10818
https://www.acmicpc.net/problem/10818

<최소, 최대>
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

<Input>
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

<Output>
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

*/

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int *arr;
	int num; //->long int ???
	int max, min, i;

	scanf("%d", &num);
	arr = (int *)malloc(sizeof(int) * num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]); //forgot '&' !!!!
		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
	}
    printf("%d %d", min, max);
	return (0);
}