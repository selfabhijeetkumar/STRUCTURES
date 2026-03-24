#include<stdio.h>
#include<string.h>

struct student
{
   int roll;
   float cgpa;
   char name[100];
};

void printinfo(struct student s1);

int main(){
    struct student s1 = {2222,99.0,"ak"};
    printinfo(s1);
    // printf("my cgpa is = %f \n",s1.cgpa);
    // struct student *ptr = &s1;
    // printf("my cgpa with ptr is = %f\n",(*ptr).cgpa);
    // printf("my cgpa with -> is = %f\n",ptr->cgpa);
    // printf("my roll with -> is = %d\n",ptr->roll);
    // printf("my name with -> is = %s\n",ptr->name);

    // struct student ece[100];
    // ece[0].cgpa = 18;
    // ece[0].roll = 8888;
    // strcpy(ece[0].name,"rocky");
    // printf("name is : %s\n",ece[0].name);
    // printf("roll is : %d\n",ece[0].roll);
    // printf("cgpa is : %f\n",ece[0].cgpa);

    // ece[1].cgpa = 868.0067;
    // ece[1].roll = 86866875;
    // strcpy(ece[1].name,"locky");
    // printf("name is : %s\n",ece[1].name);
    // printf("roll is : %d\n",ece[1].roll);
    // printf("cgpa is : %f\n",ece[1].cgpa);


    
    // struct student s1;
    // s1.cgpa = 9.3;
    // s1.roll = 881;
    // // s1.name = "abhijeet";
    // strcpy(s1.name,"abhijeet");
    // printf("my name is : %s\n",s1.name);
    // printf("my roll is : %d\n",s1.roll);
    // printf("my cgpa is : %f\n",s1.cgpa);


    // struct student s2;
    // s2.cgpa = 10.00;
    // s2.roll = 987;
    // strcpy(s2.name,"vaishnavi");
    // printf("my name is : %s \n",s2.name);
    // printf("my roll is : %d \n",s2.roll);
    // printf("my cgpa is : %f \n",s2.cgpa);

    // struct student s3;
    // s3.cgpa = 5.00;
    // s3.roll = 1987;
    // strcpy(s3.name,"sneha");
    // printf("my name is : %s \n",s3.name);
    // printf("my roll is : %d \n",s3.roll);
    // printf("my cgpa is : %f \n",s3.cgpa);   
    return 0;

}
void printinfo(struct student s1){
    printf("student information ..........\n");
    printf("my name is = %s \n",s1.name);
    printf("my roll is = %d \n",s1.roll);
    printf("my cgpa is = %f \n",s1.cgpa);
}