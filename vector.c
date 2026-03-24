#include<stdio.h>
#include<string.h>
struct vector
{
    int x;
    int y;
};
void calcsum(struct vector v1 , struct vector v2 , struct vector sum);

int main(){
    struct vector v1 = {10,3};
    struct vector v2 = {7,3};
    struct vector sum = {0};
    calcsum(v1,v2,sum);

}
void calcsum(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("vector sum of x is : %d\n",sum.x);
    printf("vector sum of y is : %d\n",sum.y);



}
