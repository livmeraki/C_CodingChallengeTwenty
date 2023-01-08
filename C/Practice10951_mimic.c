/*

MIMIC: mimicking a ready-made solution
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

int	main(void)
{
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
        printf("%d\n", a+b);
    }

	return (0);

	//I keep getting a runtime error... (InsufficientSpace)
}


/*

I did not know that the we are allowed to 
output data as the inputs come.

What do ya know.. the code only uses
the very very basic building blocks

two variables
scanf statement
printf statement
and a loop.

*/