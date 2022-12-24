/*

Start Date: Dec 24, 2022

Baekjoon Question 10869
https://www.acmicpc.net/problem/10869

<사칙연산>
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
<Input>
두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)

<Output>
첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.

*/

#include <stdio.h>

int	main(void){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", n1+n2);
    printf("%d\n", n1-n2);
    printf("%d\n", n1*n2);
    printf("%d\n", n1/n2);
    printf("%d", n1%n2);

    return 0;
}