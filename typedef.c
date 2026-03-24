#include<stdio.h>
#include<string.h>
typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;
typedef struct bankaccount{
    int accountNO;
    char name[100];


}acc;




int main(){
    acc account1 = {500,"abhi"};
    acc account2 = {500,"aabhi"};
    acc account3 = {500,"aaabhi"};

    printf("acct balance is :%d\n",account1.accountNO);
    printf("name is :%s\n",account1.name);


    // coe s1;
    // s1.roll = 888;
    // s1.cgpa = 9.9;
    // strcpy(s1.name,"abhijeet");
    // printf("my good name is = %s\n",s1.name);

}