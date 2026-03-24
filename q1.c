#include<stdio.h>
#include<string.h>
struct adress
{
   int houseNO;
   int block;
   char city[100];
   char state[100];
};
void prinadd(struct adress add);

int main(){
    struct adress adds[5];
    printf("enter the information of person 1:\n");
    scanf("%d",&adds[0].houseNO);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("enter the information of person 2:\n");
    scanf("%d",&adds[1].houseNO);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("enter the information of person 3:\n");
    scanf("%d",&adds[2].houseNO);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("enter the information of person 4:\n");
    scanf("%d",&adds[3].houseNO);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("enter the information of person 5:\n");
    scanf("%d",&adds[4].houseNO);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);


    prinadd(adds[0]);
    prinadd(adds[1]);
    prinadd(adds[2]);
    prinadd(adds[3]);
    prinadd(adds[4]);

    return 0;
}
void prinadd(struct adress add){
    printf("address is : %d , %d,%s,%s\n",add.houseNO,add.block,add.city,add.state);
}