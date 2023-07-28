//1] construct a flowchart to show how to deteermine the grester of two given number ?
/*#include<stdio.h>
int main()
{
     int a,b;
     printf(" enter the a : ");
     scanf("%d",&a);
     printf("enter the b : ");
     scanf("%d",&b);
     if (a>b)
     {
         printf("a is greater \n");
          }
     else
      {
         printf("b is greater \n");
          }
     return 0;
 }*/
 
// 2] construct a flowchart to print the number of days (input a number from the user in the range 0 to 6 and print monday?
/*#include <stdio.h>
int main()
{ 
     int days,monday,tuesday,wednesday,thursday,friday,saturday,sunday;
     printf("enter the days : ");
     scanf("%d",&days);
     if  (days==0){
          printf("print monday \n");
          }
     else if (days==1)
     {
              printf("print tuesday \n");  
          }
     else if (days==2)
     {
              printf("print wednesday \n");
              }
     else if (days==3){
              printf("print thursday \n");
              }
     else if (days==4){
              printf("print friday \n");
              }
     else if (days==5){
             printf("print saturday \n");
             }
     else if (days==6){
             printf("print sunday \n");
             }
     return 0;
    } */
    
 //3] construct a flowchart to print the name of months (input a number from the user in the range 1 to 12 and print january for 1 february for 2 and so on )?
 /*#include <stdio.h>
 int main ()
 {
    int m,january,february,march,april,may,june,july,august,september,octomber,november,december;
    printf("enter the months :");
    scanf("%d",&m);
    if (m==1){
        printf("print january \n");
        }
    else if (m==2){
        printf("print february \n");
        }
    else if (m==3){
        printf("print march \n");
        }
    else if (m==4){
        printf("print april \n");
        }
    else if (m==5){
        printf("print may \n");
        }
    else if (m==6){
        printf("print june \n");
        }
    else if (m==7)  {
        printf("print july \n");
        }
    else if (m==8){
        printf("print august \n");
        }
    else if (m==9){
        printf("print september \n");
        }
    else if (m==10){
        printf("print octomber \n");
        }
    else if (m==11){
        printf("print november \n");
        }
    else if (m==12){
        printf("print december \n");
        }
    return 0;
   }*/
   
//4] construct a flowchart to take selling price and cost price as input and calculate the profit percentage (the value of sp should be greater than cp else print invalid)?
/*#include<stdio.h>
int main()
{
  int sp,cp,p,pp;
  printf("input the sp,cp \n");
  scanf("%d%d",&sp,&cp);
  if (sp>cp)
  {
  p =sp-cp;
  pp=(p*100)/cp;
  printf("%d\n",pp);
  }
  else
  {
  printf("invalied\n");
  }
  return 0;
 }*/
 
 //5] construct a flowchart to take selling price and cost price as input and calculate the loss percentage (the value of s.p should br less tha cp else print invalid?
/* #include <stdio.h>
 int main()
 {
   int sp,cp,l,ll;
   printf("enter the sp,cp");
   scanf("%d%d",&sp,&cp);
   if (sp<cp){
   l = cp-sp;
   ll= (l*100)/cp;
   printf("%d\n",ll);
   }
   else 
   {
   printf("invalid\n");
   }
   return 0;
 }*/
 
 //6] construct a flowchart to take two sides as input and check wether it is a rectangle or a square?
/* #include<stdio.h>
 int main()
 {
     int a,b,rectangle,square;
     printf("enter the a,b");
     scanf("%d%d",&a,&b);
     if (a==b){
     printf("it is rectangle");
     }
     else
     {
     printf("it is a square \n");
     }
     return 0;
   }*/
   
//7] construct a flowchart to calculate profit orloss  print the value of profit incurred loss incurred or no profit no loss (inpuut   given as sp,cp)?
 /*#include<stdio.h>
int main()
{ 
  int sp,cp,profit,loss;
  printf("enter the sp,cp");
  scanf("%d%d",&sp,&cp);
  profit=sp-cp;
  loss=cp-sp;
  if (sp==cp){
  printf("no profit no loss  :");
  }
  else if (sp>cp){
  printf("profit %d\n", profit);
  }
  else{
  printf("loss %d\n", loss);
  }
  return 0;
  }*/
  
 // 8] construct a flowchart to check whether a no is the smallest 4 digit no?
 /* #include<stdio.h>
  int main()
 {
   int n,smallest;
   printf("enter the number");
   scanf("%d",&n);
   if (n==1000){
   printf("smallest 4 digit");
   }
   else
   {
   printf("not smallest 4 digit");
   }
   return 0;
 }*/
 
 //9] construct a flowchart to check whether a number is largest 3 digit no ?
/* #include <stdio.h>
 int main()
 { 
    int n,divisible;
    printf("enter the number");
    scanf("%d",&n);
    if (n%3==0){
    printf("divisible by 3 : ");
    }
    else 
    {
    printf(" not divisible by 3 : ");
    }
    return 0;
    }*/
    
//10]consturct a flowchart to check whethrer a number is divisivle by 7 ornot ?
/*#include<stdio.h>
int main()
{   
   int n,divisible;
   printf("enter the number : ");
   scanf("%d",&n);
   if (n%7==0){
   printf("divisible by 7 : ");
   }
   else
   {
   printf("not divisible by 7 : ");
   }
   return 0;
  }*/
  
 //11] construct a flowchart program to check whether a number is a even or odd ?
/* #include<stdio.h>
 int main()
 {
    int n,even,odd;
    printf("enter the number :");
    scanf("%d",&n);
    if (n%2==0){
    printf("number is even : ");
    }
    else {
    printf("number is odd : ");
    }
    return 0;
    }*/

//12]  construct a flowchart to check whether the last digit of a number (enter by user ) is divisible by 3 or noot ?
/*#include<stdio.h>
int main()
{
     int n,divisible;
     printf("enter the number : ");
     scanf("%d",&n);
     if (n%3==0){
     printf("divisible by 3 : ");
     }
     else 
    {
    printf(" not divisible by 3 : ");
    }
    return 0;
    }/*
    
//13] construct a flowchart to check whether a person is eligible for voting or not age for voting is 18 years?
/*#include <stdio.h>
int main()
{
   int voting,eligible,age;
   printf("enter the age");
   scanf("%d",&age);
   if (age>=18){
   printf("vooter is eligible : ");
   }
   else
   {
   printf("voter is not eligible : ");
   }
   return 0;
   }*/
 
 //14] construct a flowchart to display "hello" if a number entered by the user is a multilpe of five otherwisee print bye?
/*include<stdio.h>
 int main()
 {
  int n,hello,bye;
  printf("enter the number : ");
  scanf("%d",&n);
  if (n%5==0){
  printf("hello :");
  }
  else
  {
  printf("bye :");
  }
  
  return 0;
  }*/
  
//15] construct a flowchart to input the marks of two students in 5 subjects and check who is the topper ?
/*#include<stdio.h>
int main()
{
 int a,b,c,d,e,G,H,I,J,K,A,B;
 printf("it is a mark of1st student :");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 printf("it is a marks of 2nd students :");
 scanf("%d%d%d%d%d",&G,&H,&I,&J,&K);
 A = a+b+c+d+e;
 B = G+H+I+J+K;
 if (A>B){
 printf("A :");
 }
 else 
 {
 printf("B : ");
 }
 return 0;
 }*/
/* //16]construct a flowchart to check whether number entred is a three digit number or not ?
 #include<stdio.h>
 int main()
 {
   int n,digit;
   printf("enter the number :");
   scanf("%d",&n);
   if (n>=100,n<=999){
   printf("three digit : ");
   }
   else 
   {
   printf("not three digit : ");
   }
   return 0;
   } */
   
//17]construct a flowchart to check whether a person is a person is a senior citizen or not (senior citizen age=60?

/*#include<stdio.h>
int main()
{
 int age,seniorcitizen;
 printf("enter the age :");
 scanf("%d",&age);
 if (age>=60)
 {
 printf("it is seniorcitizen : ");
 }
 else 
 {
 printf("it is not seniorcitizen : ");
 }
 return 0;
 }*/
 
 //18]accept the tempreture digrees celsius of wateer and check whether it is boiling or not (boilling point of water in 100 degree celsius?
/*#include<stdio.h>
int main()
{
 int temprature;
 printf("enter the temprature : ");
 scanf("%d",&temprature);
 if (temprature >= 100)
 { 
 printf("boiling water \n");
 }
 else 
 {
 printf("not boiling water \n");
 }
 return 0;
 } */

//19]construct a flowchart to calculate the sum of two given interger  however if the  sum is between 15 to 20 it will retuern 20?
/*#include<stdio.h>
int main()
{
 int n,A,B,sum;
  printf("enter the two number :");
  scanf("%d%d",&A,&B);
  sum = A+B;
  if (sumA= && sum<= 20){
  printf("the sum of 15 and 20 ");
  sum = 20;
  }
  else 
  {
  printf("sum ");
 }
 return 0;
 }*/
 
 //20] A shop will give a discount of 10% if the cost of the purchased quantity is more than 1000.ask the user for quantity suppose one unit will cost 100, judge and print total cost for the user ?
/* #include<stdio.h>
 int main()
 {
    int Q,cost,discount;
    printf("enter the Q ");
    scanf("%d",&Q);
    cost=Q*100:
    if (cost>1000)
   printf(" discount cost*10/100");
    totalcost = cost -discount;*/
    
// 21] a company decided to give a bonus of 5% to an employee if his /hre year of service is more than 5 year ask users for their salary and year of service and print he net bonus amount?
 #include <stdio.h>
 int main()
 {  
   int salary,year of service,bonus;
   printf("enter the salary & year of service");
   scanf("%d%d",&salary,&year of service);
   if (year>salary){
   printf("bones = 5*salary/100");}
   else 
   {
   printf("no bonus /n");
   }
   return 0;
   }
   
    
    
 
 
  
 
      
  
  
   





























    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  
        
    
                 
     
     
          
          
          
          
          
          
          
          
          
          
          
          
          
          
     

