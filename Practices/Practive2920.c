/*

Start Date: Nov 27, 2022

<음계>

다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로,
	d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

*/

#include <stdio.h>
int is_inorder(int step, int cur);
int	main(void)
{
	int	n1, n2;

	scanf("%d", &n2);

	if (n1 > n2)
	{
        if(is_inorder(-1, n2)){
            printf("descending");
        }
	}
	else if (n1 < n2)
	{
        if(is_inorder(1, n2)){
            printf("ascending");
        }
        
	}
 
    return (0);
}

int is_inorder(int step, int cur){
    int i, num;
    for(i=0;i<6;i++){
        scanf("%d", &num);
        if(num==cur+step){
            cur = num;
            if(i==5){
                return 1;
            }
        }
        
        else{
            break;
        }
    }
    printf("mixed");
    return 0;
}