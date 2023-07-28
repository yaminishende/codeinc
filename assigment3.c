1(construct a flowchaet to find a maximum bet three numbers
#include<stdio.h>
int main()
{
int  a,b,c;
printf("enter the number ");
scanf("%d" ,&a);
printf("enter the number ");
scanf("%d" ,&b);
printf("enter rhe number ");
scanf("%d" ,&c);

if(a>b){
  if(a>c){
  printf("%d",a);
  }
  else{
  printf("%d",c);
  } 
}else if(b>c){
  printf("%d",b);
  }
  else{
  printf("%d",c);
  }
  
  return 0;
  }
  */
// (2) validate a given year the year in the date must be greater then zero the months must lie between 1 and 12 and the days must lie between 1 and 31 derending on the month numbers
/*#include<stdio.h>
int main(){
int y,m,d;

scanf("%d%d%d" ,&y,&m,&d);

if(y>0){
printf("valid\n");
if((y%4==0 && 4%100!=0)|| y%400!=0){
printf("leap year\n");
}
else{
printf("not leap year\n");
}
if(m >=1 && m <=12){
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
printf("day 31\n");
}
else if(m==4||m==6||m==9||m==11){
printf("day 30\n");
}
else if(m==2){
if((y&4 == 0 && y % 100!=0)||y%400==0){
printf("day 29\n");
}
else{
printf("day 28\n");
}
} 
else{
printf("invalid month\n");
}
}
else{
printf("invalid year\n");
}
}
return 0;
 }*/

//(3) costruct a flowchart to input electricity unit charges and calculate the total electricity bill according to the given condition
/*#include<stdio.h>
int main(){
int unit,A,S,t;
printf("enter the unit charge");
scanf("%d" ,&unit);
if(unit<=50){
A = unit * 0.50;
S = A * 20/100;
t = S + A;
printf("%d" ,t);
}
else if(unit<=50){
A = (unit * 0.50) + (unit*50) * 0.75;
S = A * 20/100;
t = S + A;
printf("%d" ,t);
}
else if (unit<=250){
A = (unit - 0.50) + ( unit * 0.75) + (unit - 150) * 1.20;
S = A * 20/100;
t = S + A;
printf("%d" ,t);
}
else{
A = (unit*0.50) + (unit * 0.75) + (unit * 1.20) + (unit - 250) * 1.50;
S = A * 20/100;
t = S + A;
printf("%d" ,t);
}
return 0;
} */
//(4) construct a flowchart to calculate the electricity bill cacept the number of unit from the user according to the following criteria
/*#include<stdio.h>
int main(){
int v,A;
printf("enter the unit");
scanf("%d" ,&v);

if(v<=100){
printf("no change");
}
else if(v>100 && v<=200){
A = (v-100)*5;
printf("%d" ,A);
}
else {
A = 500 + (v-100)*10;
printf("%d" ,A);
}
return 0;
} */

//(5) accept the age gender ( m.f) and the number of dusy and display the wages accordingly if the age does not fall in any range then display the following message enter appropiate age 
/*#include<stdio.h>
int main()
{
int a,b,c,amt;
printf("enter the age");
scanf("%d" ,&a);
printf("enter the sex");
scanf("%d" ,&b);
printf("enter the day");
scanf("%d" ,&c);

if(a>=18 && a<30)
{
if (b==0){
amt = c * 700;
printf("%d" ,amt);
}
else if(b==1)
{
amt = c * 750;
printf("%d" ,amt);
}
else
{
  printf("invalied sex\n");
 }
}
 else if(a>=30 && a<=40){
 if (b==0){
 amt = c * 800;
 printf("%d" ,amt);
 }
 else if(b==1)
 {
 amt = c * 800;
 printf("%d" ,amt);
 }
 else {
printf("invalied\n");
}
}
 else{
    printf("enter the appropriate age.\n");
    }

  return 0;
 } */
//(6) accept the no of days from the user& calculate the charge for the library according to the following

/*#include<stdio.h>
int main(){
int num,charge;
printf("enter the no of day");
scanf("%d" ,&num);

if(num<=5){
charge = num * 2;
printf("%d" ,charge);
}
else if(num>5 && num<=10){
charge = (num * 2)+(num -5)*3;
printf("%d" ,charge);
} 
else if(num>10 && num<15){
charge = (num * 2)+(num * 3)+(num - 10)*4;
printf("%d" ,charge);
}
else{
charge = (num * 2)+(num * 3)+(num * 4)+(num - 15)*5;
printf("%d" ,charge);
}
return 0;

} 
*/
//(8) construct a flowchart to categorize the shape of a quadrilateral as either a square rhombus rectangle parallelogram or irregular quadrilateral having input the lengths of the four sides and one internal angle 
 
/* #include<stdio.h>
 int main(){
 int ab,dc,bc,da;
 int ang;
 printf("enter the value of side :");
 scanf("%d" ,&ab);
 printf("enter the value of side :");
 scanf("%d" ,&dc);
 printf("enter the value of side :");
 scanf("%d" ,&bc);
 printf("enter the value of side :");
 scanf("%d" ,&da);
 
 printf("enter the angle 90 or 360 :");
 scanf("%d" ,&ang);
 
 if(ab == dc && bc == da){
if(ang==90){
printf("spuqre");
} 
else{
printf("rhombus");
}
 }
 else if(ab==dc && bc==da && ab==bc){
 if(ang==90){
 printf("rectangle");
 }
 else{
 printf("parallelagrom");
 }
 }
 else{
 printf("irregalar quadrelateraly");
 }
 return 0;
 } */
 
// (9) the grades in a certain class are determined by coursework and a written examination both components of the assissment carry a maximum of 50 points 
/*#include<stdio.h>
int main(){
int cw,we;
int result,fail,pass,total,technical;
printf("enter the cw :");
scanf("%d" ,&cw);

printf("enter the we :");
scanf("%d" ,&we);

total = cw + we;

if(cw>20){
 if(we>20){
   if(total>45){
     printf("pass");
}
else if(total=44){
     printf("fail");
 }
}
else if(total>45){
   total = 45;
   printf("technical");
}
else{
  printf("fail");
 }
}
else if(we>20){
  if(total>45){
  total = 45;
  printf("technical");
}
else {
  printf("fail");
 }
}
else{
  printf("fail");
}

return 0;
} */

//(10)The following rules are used to calculate the bonus for the employees of an organization.
//(i) If the pay is more than $3,000, the bonus amount is fixed, and it is equal to $300.
//(ii) If the pay is more than $1,600, but less than or equal to $3,000, the bonus will be 10% of the pay subject to a maximum of $240.
//(iii) If the pay is less than or equal to $1,600, the bonus is 15% of pay, subject to a minimum of $100.
/*#include<stdio.h>
int main(){
int a,bonus;
printf("enter the amount:\n");
scanf("%d" ,&a);

if(a>3000){
bonus = 300;
printf("%d\n" ,bonus);
}
else if(a>1600){
bonus = a*10/100;
if(bonus>240){
bonus = 240;
printf("%d\n" ,bonus);
}
else{
printf("%d\n" ,bonus);
}
}
else if(a<=1600){
bonus = a*15/100;

if(bonus<100){
bonus = 100;
printf("%d\n" ,bonus);
}
else{
printf("%d\n" ,bonus);
}
}
return 0;
} */
// (11) A certain steel is geaded according to the following condition 1) rockwell hardness >50 2) carbon content >0.7 3) tensile strength> 5600kg /cm2
/*#include<stdio.h>
int main(){
int rh,ts;
float cc;
printf("enter the rockwell hardness");
scanf("%d" ,&rh);
printf("enter the tensile strength");
scanf("%d" ,&ts);
printf("enter the carbon content");
scanf("%f" ,&cc);

if(rh>50 && cc>0.7 && ts>5600){
printf("grande 10");
}
else if(rh>50 && cc>0.7 || ts>5600){
printf("grande 9");
}
else if(cc>0.7 && ts>5600 || rh>50){
printf("grande 8");
}
else if(rh>50 && ts>5600 && cc>0.7){
printf("grande 7");
}
else{
printf("grande");
}
return 0;
} */

//(12) find whether a given year is a leap year (hint .a yera is a leap year.( hint. a year is said to be a leap year if it is eigther divisible by 4 but not by 100 or divisible by 400)
/*#include<stdio.h>
int main(){
int y;
printf("enter the year");
scanf("%d" ,&y);
if((y%4==0 && y%100!=0)||y%400==0){
printf("leap year");
}
else{
printf("not leap year");
}
return 0;
}
*/

//(13) in the above question take the first condition as divisible  of year by 100 and construct the flowchart. do the dry run for the same input.
/*#include<stdio.h>
int main(){
int y;
printf("enter the year");
scanf("%d" ,&y);

if(y%100!=0){
 if(y%4==0){
   printf("leap year");
   }
   else {
   printf("no leap year");
   }
   }
   else{
   if(y%400==0){
   printf("leap year");
   }
   else{
   printf("no leap year");
   }
   
   }
  return 0;

} */

//(14) in the above question take the first condition as divisible  of year by 400 and construct the flowchart do the dry run for the same input
/*#include<stdio.h>
int main(){
int y;
printf("enter the year");
scanf("%d" ,&y);

if(y%400==0){
printf("leap year");
}
else if(y%4==0){
printf("no leap year");
}
else {
printf("leap year");
}
return 0;
} */

//(15) Accept three integers representing the angles of a triangle in degrees to determine whether they form a valid set of angles of a triangle. If it is not a valid set, then generate a message and terminate the process. If it is a valid set, then the process determines whether it is equiangular (all three angles are the same). It also determines if the triangle is right-angled (has one angle with 90 degrees), obtuse-angled (one angle above 90), or acute-angled (all three angles are below 90 degrees). Finally, it shows the conclusion about the triangle.
/*#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d" , &a,&b,&c);
if(a+b+c==180){
if (a==b && b==c){
printf("equiangular triangle");
}
else if(a==90||b==90||c==90){
printf("right angle tringle");
}
else if(a>90 || b>90 ||c>90){
printf("obtuse angle triangle");
}
else{
printf("acute angle triangle");
}
}
else{
printf("triangle not valid");
}
return 0;
} */

//(16) Accept the lengths of the three sides of a triangle to validate whether they can be the sides of a triangle and then classify the triangle as equilateral (all three sides are equal), scalene (all three sides are different), or isosceles (exactly two sides are equal), and then to see whether it is a right-angled triangle (the sum of the squares of two sides is equal to the square of the third side.)
//(Hint. Three numbers are valid as the sides of a triangle if each one is positive and the sum of every two numbers is greater than the third.)
/* #include<stdio.h>
 #include<math.h>
 int main(){
 int a,b,c;
 
 scanf("%d%d%d" ,&a,&b,&c);
 
 if(((a+b)>c)||((a+c)>b)||((a+c)>a)){
 if (a==b && b==c){
 printf("EQULATERAL TRIANGLE");
 }
 else if(a!=b && b!=c){
 printf("SCALENE TRANGLE");
 }
 else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a)){
 printf("ISSOSCELES TRANGLE");
 }
 else if(pow(a,2)+pow(b,2)==pow(c,2)||
         pow(a,2)+pow(c,2)==pow(b,2)||
         pow(b,2)+pow(c,2)==pow(a,2)){
         printf("RIGHT ANGLE TRIANGLE");
         }
         else {
         printf("TRIANGLE IS NOT FROM");
         }
         }
         else {
         printf("TRIANGLE IS NOT FROM");
         }
         
         return 0;
 } */

 //(19)  find the second max of 4 number (use minimum number of comparisons) 
;
/*sm1 = d;
 }
 else{
 m1 = d;
 sm1 = c;
 }
 if(m>m1){
 if(m1>sm){
 printf("second max :%d\n" ,m);
 }
 else{
 printf("second max :%d\n" ,sm);
 }
 }
 else{
 if(m>sm1){
 printf("second max :%d\n" ,m);
 }
 else{
 printf("second max :%d\n" ,sm1);
 }
 }
 return 0;
} */

 //(20) find the first minimum  (use minimum number of comparisons) 
	/*#include<stdio.h>
	int main()
	{
	int a,b,c,d;
	int min1,smin1,min2,smin2;
	scanf("%d%d%d%d" ,&a,&b,&c,&d);
	if(a<b){
	  min1 = a ; 
	  smin1 = b;
	  }
	  else{
	  min1 = b ;
	  smin1 = a;
	  }
	if(c<d){
	 min2 = c;
	 smin2 = d;
	 }
	 else{
	 min2 = d;
	 smin2 = c;
	 }
	if(min1 < min2){
	  if(min1 < smin1)
	{
	printf("minimum :%d\n" ,min1);
	}
	else
	{
	printf("minimum :%d\n" ,smin1);
	}
	}
	else{
	 if(min2 < smin2)
	{
	printf("minimum : %d\n" ,min2);
	}
	else
	{
	printf("minimun : %d\n" ,smin2);
	}
	}
	return 0;

	} */
	 //(20) thirt max of 4 miximum
	 
 /* #include<stdio.h>
  int main(){
  int a,b,c,d;
  int m,tm,m1,tm1;
  scanf("%d%d%d%d" ,&a,&b,&c,&d);
  
  if(a<b){
  m = a;
  tm = b;
  }
  else{
  m = b;
  tm = a;
  }
  if(c<d){
  m1 = c;
  tm1 = d;
  }
  else{
  m1 = d;
  tm1 = c;
  }
  if(m<m1){
  if(m1<tm){
  printf("maximum :%d\n" ,m1);
  }
  else{
  printf("maximum :%d\n" ,tm);
  }
  }
  else {
   if(m<tm1){
   printf("maximum :%d\n" ,m);
   }
   else{
   printf("maximum :%d\n" ,tm1);
   }
   }
   return 0;
  } */
//(21) find the maximum occurring number out of the given 5 numbers 
/*#include<stdio.h>
int main(){
int a,b,c,d,e;
int m,m1,m2;
scanf("%d%d%d%d%d" , &a,&b,&c,&d,&e);
if(a>b){
m = a;
}
else{
m = b;
}
if(c>d){
m1 = c;
}
else{
m1 = d;
}
if(m>m1){
m2 = m;
}
else{
m2 = m1;
}
if(m2>e){
printf("%d\n" ,m2);
}
else{
printf("%d\n" ,e);
}
return 0; 
 
} */
