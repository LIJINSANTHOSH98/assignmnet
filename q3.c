
#include<stdio.h>
typedef struct
{
 char name[30];
 int age;
}employee;

int main()
{
 employee emp[20], temp;
 int i,j,a;

 printf("Enter the number of employees:\n");
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
  printf("Enter the name and age of employee:\n");
  scanf("%s%d",emp[i].name,&emp[i].age);
 }
 for(i=0;i<a-1;i++)
 {
  for(j=i+1;j<a;j++)
  {
   if(emp[i].age< emp[j].age)
   {
    temp = emp[i];
    emp[i] = emp[j];
    emp[j] = temp;
   }
  }
 }
 printf("Sorted records are:\n");
 for(i=0;i<a;i++)
 {
  printf("Name: %s\n", emp[i].name);
  printf("Age: %d\n\n", emp[i].age);
 }

 return 0;
}
