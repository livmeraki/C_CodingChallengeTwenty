/*

Start Date: Dec 30, 2022

Baekjoon Question 11720
https://www.acmicpc.net/problem/11720

<숫자의 합>
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

<Input>
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 
둘째 줄에 숫자 N개가 공백없이 주어진다.

<Output>
입력으로 주어진 숫자 N개의 합을 출력한다.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int	main(void)
{
	int repeat, i, sum = 0;
    char *num;
	scanf("%d", &repeat);
    num = (char*)malloc(sizeof(char)*repeat);

    scanf("%s", num);
    
	for (i = 0; i < repeat; i++)
	{
        sum+=atoi(&num[repeat-1-i]);
	}

	printf("%d", sum);
}

//faulty answer because I tried it like this

/*

for (i = 0; i < repeat; i++)
	{
        sum+=num%10;
        num/=10;
	}

*/

//I realize that this is a mistake because
//the number stores -1 if the input is larger than
//its given space... 
//I need to get an answer for this... what does the num(int) store if
//it is given a input greater than 4 bytes..

//no... the output is -1... 
//for test case
//25
//7000000000000000000000000
//
//why........