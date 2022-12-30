/*

RETRY
Start Date: Dec 30, 2022

Baekjoon Question 10951
https://www.acmicpc.net/problem/10951

<A+B - 4>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

<Input>
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

<Output>
각 테스트 케이스마다 A+B를 출력한다.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int i, count = 0;
	int a, b;
	char line[5];
	int *add;
	add = (int *)malloc(sizeof(int) * 100);
	do
	{
		fgets(line, 100, stdin);
		add[count] = a + b;
		count++;
	} while (sscanf(line, "%d %d", &a, &b) != EOF);
    //EOF is a constant for defining the end of file as the number -1

	for (i = 1; i < count; i++)
	{
		printf("%d\n", add[i]);
	}
	return (0);

	//I keep getting a runtime error... (InsufficientSpace)
}


/*
okay this is what I'm gonna do...
how about getting all the inputs 
then adding them up.

so when the user inputs the numbers
the while loop's gonna loop
here I want to make a line of code that 
extends the memory space every time the loop repeats

wait.. 
when you have get an input there has to be a '/n'
at the end so that the computer can know the input process
has been finished. 

but then how do you place the results right after the
end of the input?

*/