#include <stdio.h>
#include <string.h>
#include <cmath>
#include "database"
struct point{
    int x;
    int y;
} C1,C2,C3,C4;
struct  net {
    struct point;

}N1,N2,N3;

int Compare (struct point*a,struct point *b){
    int rent ;
    if (memcmp(&a,&b,sizeof(point))==0){
        rent=1;
    }
    else rent =0;
    return rent;
}
int Distance(struct point *a,struct point *b ){
    int d;

    d=pow((*a).x-(*b).x,2)+pow((*a).y-(*b).y,2);
    return d;
}
int Swap (struct point*a,struct point *b){
    int t= &a;
    &a=&b;
    &b=t;
}
int Check (struct point *a,struct point *b,struct point *c,struct point *d  ){
    int sum ;
    sum= Compare(struct point *a,struct point *b )+Compare(struct point *b,struct point *c)+Compare(struct point *c,struct point *d )
            +Compare(struct point *b,struct point *d)+Compare(struct point *a,struct point *d)+Compare(struct point *a,struct point *c);
    return  sum;
}
int Move (struct point*a){
    if ((*a).x>=(*a).y && (*a).x +(*a).y < 2) {
        (*a).y++;}
    else (*a).x++;
}
int Sum distance= 2*( Distance(struct point *a,struct point *b )+Distance(struct point *a,struct point *b ))+
Distance(struct point *a,struct point *b )

int  push() {
    while (Check){
        while
    }
}
void swap (int A[],int i,int j){
    int temp = A[i];
    A[i]=A[j];
    A[j]=temp;
}
void printfArray(int A[] ,int n){
    int i ;
    for(i=0;i<=n;i++){
        printf ("%d", A[i]);
    }
    printf("\n");
}
void prem(int A[],int p, int q){
    if (p==q){
        printfArray(A, q);
    }
    else {
        int i;
        for (i=p;i<=q;i++){
            swap (A,p,i);
            prem (A,p+1,q);
            swap (A,p,i);
        }
    }
}
int Transform (struct situation piont *a){
    (*p).x = (*p).a /3;
        if ((*p).a%3!=0){
            (*p).x++;}
    (*p).y = (*p).a %3;
        if ((*p).a%3==0){
        (*p).y=3;}
}
#include <stdio.h>
#define MAX 200
int fit_value[MAX] = {0};//初始化
int C_N = 0, C_M = 0;//初始化
int count = 0;
void print()
{
    int i = 0;
    for(i = 0; i < C_M; i++)
        printf("%d ", fit_value[i + 1]);
    count++;
    printf("\n");
}
void match(int num)
{
    if (num == C_M + 1)
        print();
    else
        for(fit_value[num] = fit_value[num - 1] + 1; fit_value[num] <= C_N - C_M + num; fit_value[num]++)
            match(num + 1);
}
int main()
{
    printf("请分别输入元素C_N和C_M,空格隔开：\n");
    scanf("%d %d", &C_N, &C_M);
    printf("%d个元素中取出%d个元素的所有组合如下: \n", C_N, C_M);
    match(1);
    printf("%d个元素中取出%d个元素总计: %d 种组合\n", C_N, C_M, count);
    return 0;
}

