/*

Start Date: Dec 24, 2022

Baekjoon Question 8958
https://www.acmicpc.net/problem/8958

<OX퀴즈>
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 
그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
 
 <Input>
 첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int calcpoint(char p[]);
int main(){

    char *p;
    int *score; //int* score; -> different?
    int num, i;

    scanf("%d", &num);
    p = (char*)malloc(sizeof(char)*100);
    score = (int*)malloc(sizeof(int)*100); 
    //->score = (int*)malloc(sizeof(int)*20); -> size를 sizeof(int)*20로 해서 Runtime Error(AssertionFailed)뜸


    for(i=0;i<num;i++){
        scanf("%s", p);
        score[i] = calcpoint(p);
    }
    for(i=0;i<num;i++){
        printf("%d\n", score[i]);
    }
    return 0;
}
int calcpoint(char p[]){
    int score=0, i,j;
    for(i=0;i<strlen(p);i++){
        for(j=i; p[j]=='O';j++){
            score++;
        }
    }
    return score;
}