//1] write the algoritham to find avverage two number?

 /*#include<stdio.h>
int main()
{
  int x,y,avg,s;
  printf("enter the value\n");
  scanf("%d",&x);
  printf("enter the value\n");
  scanf("%d",&y);
  s=x+y;
  avg=s/2;
  printf("avg");
  printf("%d\n",avg);
  return 0;
}*/

// 2] Draw the flowchart to find simple in intrest ? 
/*#include<stdio.h>
int main()
{
   int p,r,t,si;
   printf("enter the value\n");
   scanf("%d",&p);
   printf("enter the value\n");
   scanf("%d",&r);
   printf("enter the value\n");
   scanf("%d",&t);
   si=(p*r*t)/100;
   printf("simple intrest is : %d\n",si);
   return 0;
}*/

// 3] Draw a flowchart to add 10&20 print the  sum?
/*#include<stdio.h>
int main()
{
   int a,b,s;
   printf("enter the 1st value\n");
   scanf("%d" ,&a);
   printf("enter the 2nd value\n");
   scanf("%d" ,&b);
   s=a+b;
   printf("sum : %d\n",s);
   return 0;
}*/

// 4] Contruct a flowchart to show how to obtain the daily wage of 
//a  worker on the basic ofthe hours workerd during the day [daily wage of a worker is determine by hours worked per day &the hourty wage rate input the number ofhours worked from the user &the hourty wage rate?
/*#include<stdio.h>
int main()
{
      int h,r,dw;
      printf("enter the hour\n");
      scanf("%d",&h);
      printf("enter the rate\n");
      scanf("%d",&r);
      dw=(h*r);
      printf("daily wages : %d\n",dw);
      return 0;
      	
 } */
 
 // 5] construct a flowchart to show how to obtain the area of a triangle on the basic of the base and height [input the base &height of the triangle from the user]
/* #include<stdio.h>
 int main()
 {
        int  b,h,a;
        printf("enter the base of triangle");
        scanf("%d",&b);
        printf("enter the heigth of triangle");
        scanf("%d",&h);
        a= b*h/2;
        printf("area of triangle : %d\n",a);
        return 0;
 } */
 
 //6] construt the flowchart to show how to interchange the value of two variable
/* #include<stdio.h>
 int main()
 {
        int a,b,temp;
        printf("enter 1st number");
        scanf("%d",&a);
        printf("enter 2nd number");
        scanf("%d",&b);
        temp=a;
        a=b;
        b=temp;
        pintf("swapping : %d\n",a);
        printf("swaping : %d\n",b);
        return 0;
}   */

//7] contruct a flowchart to print a welcome messege take input from the user and on the output window print welcome [black to be fillled by the input taken from user ]
//8] construct a flowachart to add substract,divide,and multiply two interger a  and b?
/*#include<stdio.h>
int main()
{
       int a,b,sum,diff,quotient,product;
       printf("enter the 1st value")
       scanf("%d",&a);
       printf("enter the 2nd value");
       scanf("%d",&b);
       sum = a+b;
       diff = a-b;
       quotient = a/b;
       product = a*b;
       printf("sum : %d\n",sum);
       printf("different: %d\n",diff);
       printf("quotient: %d\n",quotient);
       printf("product : %d\n",product);
       return 0;
}*/

//9]construct a flloowchat to calculate the area and perimeter of a rectangular (input lenght and breath of the reactangle from the user )0
/*#include<stdio.h>
int main()
{   
        int l,b,area,perimeter;
        printf("enter the length");
        scanf("%d",&l);
        printf("enter the breath");
        scanf("%d",&b);
        area= l*b;
        perimeter = 2*(l+b);
        printf("area :%d\n",area);
        printf(" perimeter : %d\n",perimeter);
        return 0;
} */ 

//10] consteuct a flowchart to calculate the area and perimeteer of a square (inpiut side lenght of the square from the user?
/*#include<stdio.h>
int main()
{  
         float sideLength,area,perimeter;
         printf("enter the side lenght of square");
         scanf("%f",&sideLength);
         area= sideLength*sideLength;
         perimeter= 4 * sideLength;
         printf("area :%f\n",area);
         printf("perimeter : %f\n",perimeter);
         return 0;
}  */ 

//11]   construct a flowchart to calcuclte the semiperimeter of a triangle (input the three side of a triangle from the user?
/*#include <stdio.h>
 int main()
{
       float a,b,c;
       float semiperimeter;
         
         
       printf("enter the  length side a: ");
       scanf("%f",&a);
       printf("enter the  length side b: ");
       scanf("%f",&b);
       printf("enter the  length side c: ");
       scanf("%f",&c);
       semiperimeter = (a + b + c) / 2;
       printf("The semiperimeter : %f\n",semiperimeter);
       return 0;
        
 } */  
 
 //12] construct of flowchart the area of a cicrle.(inpput the radius of the circle from the user ) ?
/* #include<stdio.h>
 int main()
 {  
        float radius,area;
        printf("enter the radius");
        scanf("%f",&radius);
        area = 3.14* radius *radius;
        printf(" area  : %f\n",area);
        return 0;
} */
   //13] give the circumference of a circle construct a flowchart to calculate the diameteer (input the circumference of the circle the user)?
/* #include<stdio.h> 
 int main()
 {            
         int circumference,Diameter;
         printf("enter the circumference the circular\n");
         scanf("%d",&circumference);
         Diameter = circumference/3.14;
         printf("Diameter :%d\n",Diameter);
         return 0;
 }  */
 
 //14] construct a flowchart to calculate the letral surface area and total surface area of a cube (input the side lenght of the cube from the user )?
/* #include<stdio.h>
 int main()
{ 
        float 
        printf("enter the side lenght of cube :  ");
        scanf("%f", &side);
        l.s.a.c = 4 * side * side;
        t.s.a.c = 6 * side * side;
        printf("%f",l.s.a.c);
        printf("%f",t.s.a.c);
        return 0;
 }*/
 
//15] construct the flowchart to calculate the valume of a cube (input the side lenghth of the cube frome the user)?

/*#include<stdio.h>
int main()
{   
        float cube,volume;
        printf("enter the side length h of cube: ");
        scanf("%f",&cube);
        volume = cube * cube * cube;
        printf("%2f",volume);
        return 0;
} */
//16]  consract a floowchart to find the lateral surface area and total surface  area of a cuboid (input the side length of the cuboid from the user)?
/*#include<stdio.h>
int main()
{    
         int 

}*/
//17] construct a flowachart to calculate the vaume of a cuboid (input the side length of the cuboid from the user)?
/*include<stdio.h>
 int main()
 { 
         int length,width,height,volume;
         printf("enter the side length if cube :");
         scanf("%d",&length);
         printf("enter the side width of cube:");
         scanf("%d",&width);
         printf("enter the side of height:");
         scanf("%d",&height);
         volume = length * width * height;
         printf("volume : %d\n",volume);
         return 0;
 }*/
 
//18] construct a flowachart to display the last digit of a number .(input the number from the user)?
/*#include<stdio.h>
 int main()
 {
          int lastdigit,number;
          printf("enter the number :");
          scanf("%d",&number);
          lastdigit = (number%10);
          printf("lastdigit : %d\n",lastdigit);
          return 0;
 }*/
 
 //19] consruct the flollwchart to  calculate remainder when a is divide by b)?
/* #include<stdio.h>
 int main()
 {     
          int anumber,bnumber,remainder;
          printf("enter the a number a : ");
          scanf("%d",&anumber);
          printf("enter the bnumber b : ");
          scanf("%d",&bnumber);
          remainder = (anumber%bnumber);
          printf("remainder : %d\n",remainder);
          return 0;
}*/
//20] connstruct a flowchart to the quioent when a is divided by b?
/*#include<stdio.h>
int main()
{ 
     int anumber,bnumber,quioent;
     printf("enter the a number : ");
     scanf("%d",&anumber);
     printf("enter the b number : ");
     scanf("%d",&bnumber);
     quioent = (anumber/bnumber);
     printf("quioent : %d\n",quioent);
     return 0;
}*/


//21] construct the flowchart to calculate  the selling price of a product if mrp and discount are given (input mrp & discount from user )
/*#include<stdio.h>
int main()
{
    int mrp,discount,selling;
    printf("enter the mrp : ");
    scanf("%d",&mrp);
    printf("enter the discount : ");
    scanf("%d",&discount);
    selling  = mrp-discount;
    printf("selling : %d\n",selling);
    return 0;
   }*/
   
 //22] construct  the flowchart to calculate the square of a number ?
 /*#include<stdio.h>
 int main()
 {
      int a,square;
      printf("enter the number a :");
      scanf("%d",&a);
      square= a*a;
      printf(" square : %d\n",square);
      return 0;
 }*/
  
 //23] construct the flowchart to calculate the cube of a number ?wr
 /*#include <stdio.h>
 int main()
 {
  int a,cube;
  printf("enter the number a : ");
  scanf("%d",&a);
  cube=a*a*a;
  printf(" cube : %d\n",cube);
  return 0;
  }*/
  
  //24]construct a flowchart to caculate how many books we can buy if we can  buy if we have x rs, (coost) of a book =rs y (input x,y from user )
  
/*#include<stdio.h>
int main ()
{    
      int x,y,number of a book;
      printf("enter the x : ");
      scanf("%d",&x);
      printf("enter the y : "):
      scanf("%d",&y);
      number of a book = (x/y);
      printf(" number of a book : %d\n",number of a book);
      return 0;
 }
 
 //25] frrom the remaining amount in the above question how many pens can be bought if one pen cost rs 5 construct a flowchart ?
 #include<stdio.h>
 int main()
 {  
     int */
     
     
     
     
     
     
     
     
       
 
// 26] constuct the flowchart to calculate the total marks obtained by a student in examination (subject :- hindi, maths english, science,computer) (input marks of all 5 subjects from the user)?
/*#include <stdio.h>
int main()
{  
     int  hindi,maths,english,science,computer,totalmarks;
     printf("mark hindi : ");
     scanf("%d",&hindi);
     printf("mark maths : ");
     scanf("%d",&maths);
     printf("mark english : ");
     scanf("%d",&english);
     printf("mark science : ");
     scanf("%d",&science);
     printf("mark computer : ");
     scanf("%d",&computer);
     totalmarks = (hindi+maths+english+science+computer);
     printf("totalmarks : %d\n",totalmarks);
     return 0;
     }*/

//27] construct the flowchart to calculate the percentage obatained in the above question?
/* #include<stdio.h>
 int main()
 {   
 int hindi,maths,english,science,computer,totalmarks;
 
  printf("mark hindi : ");
  scanf("%f",&hindi);
  printf("mark maths : ");
  scanf("%f",&maths);
  printf("mark english : ");
  scanf("%f",&english);
  printf("mark science : ");
  scanf("%f",&science);
  printf("mark computer : ");
  scanf("%f",&computer);
  printf("no of subject : ");
  scanf("%f",&subject);
  totalmarks = (hindi+maths+english+science+computer);    
  percentage = (totalmarks*100/subject);  
  printf("percentage : %f\n",percentage);
  return 0;
  }*/
  
/* #include<stdio.h>
  int main()
  { 
  int marks[5];//arry store to  the 5 subject
  int totalMarks = 0;
  float percentage;
  printf("Enter marks for subjects :\n");
  //input marks eeach subject
  for (int i = 0; i < 5; i++) {
      printf("subject %d: ",i + 1);
      scanf("%d",&marks[i]);
     // add mark to total
      totalMarks += marks[i];
      }//calculate the percenatage
  percentage = (float)totalMarks / 5;
  printf("percentage: %.2f%%\n",percentage);
  return 0;
  }*/
  
//28] construct the flowchart to determine due to gravity (g) whrer g can bee obtained from the following formula ?
/*#include <stdio.h>
#include<math.
int main()
{  
   int T,I,G;
   printf("enter the time period : ");
   scanf("%d",&T);
   printf("enter the effective length : ");
   scanf("%d",&I);
   G = (4*3.14*3.14*I/T*);
   printf("%d",G);
   return 0;
   }*/
   
//29] a store sells vadapav & samosa they want a system where  they enter the number of vadapav (v) & samosa a customer buys and bill with the final price is automatically calculate and displayed a vadapav cost 12 rs while a samosaa cost 15rs write a program to create such a system?
/*#include<stdio.h>
int main()
{
    int A,B,V,S,T;
    printf("enter the value of v : ");
    scanf("%d",&A);
    printf("enter the number oof s : ");
    scanf("%d",&B);
    V=A*12;
    S=B*15;
    T = (V+S);
    printf(" %d\n" ,T);
    return 0;
    }*/

//30] write a program to take two numbers a and b is input from the user &print th enumber closest to but less thsn) A which is complete divisible by bfor example A=23 B=7
/*#include<stdio.h>
int main()
{
  int a,b,z,s;
  printf("enter the a :");
  scanf("%d",&a);
  printf("enter the b :");
  scanf("%d",&b);
  z = a/b;
  s = z*b;
  printf("%d \n",z);
  printf("%d \n",s);
  return 0;
 } */

//31] construct a flowchart to obtain the fahrenheit equivalent o atemprature fiven in celsius whrer the relationship between the two scales of temprature is?
/* #include <stdio.h>
 int main()
 { 
 int c,f;
 printf("temparature in celsius :");
 scanf("%d",&c);
 f = c*9/5+32; //f = temprature in fahrenheit
 printf("%d \n ",f);
 return 0;
 } */
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
    
    




















 
 
 
 
 
 
 
 
 
 
 
 
 
 
