/*

Start Date: Dec 24, 2022

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

int	main(void){
    int i, count=0;
    int a, b;
    char line[5];
    int *add;
    add = (int*)malloc(sizeof(int)*100);
    while(1){
        fgets(line, 100, stdin);
        if(strcmp(line, "\n")==0){
            break;
        }
        sscanf(line, "%d %d", &a, &b);
        add[count] = a+b;
        count++;
    }
    for(i=0;i<count;i++){
        printf("%d\n", add[i]);
    }
    return 0;
}

//I keep getting a runtime error... (InsufficientSpace)