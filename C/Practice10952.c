/*

Start Date: Dec 30, 2022

Baekjoon Question 10952
https://www.acmicpc.net/problem/10951

<A+B - 5>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

<Input>
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
입력의 마지막에는 0 두 개가 들어온다.

<Output>
각 테스트 케이스마다 A+B를 출력한다.

*/

#include <stdio.h>

int	main(void){

    int a, b;
    while(True){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0){
            break;
        }
        printf("%d\n", a+b);
    }
    return 0;
}

//I keep getting a runtime error... (InsufficientSpace)