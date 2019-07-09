#include <stdio.h>
char m[3][3];
int i,j,mat[9],c=0,t,d;
void func(int i, char  x){
  
 if( i==0  && mat[0]==1)
 {
   m[0][0]=x;
   mat[0]=0;
 }
 else if(i==1 && mat[1]==1)
 {
   m[0][1]=x;
   mat[1]=0;
 }
 else if(i==2 && mat[2]==1)
 {
   m[0][2]=x;
   mat[2]=0;
 }
 else if(i==3 && mat[3]==1)
 {
   m[1][0]=x;
   mat[3]=0;
 }
 else if(i==4 && mat[4]==1)
 {
   m[1][1]=x;
   mat[4]=0;
 } 
 else if(i==5 && mat[5]==1)
 {
   m[1][2]=x;
   mat[5]=0;
 }
 else if(i==6 && mat[6]==1)
 {
   m[2][0]=x;
   mat[6]=0;
 }
 else if(i==7 && mat[7]==1)
 {
   m[2][1]=x;
   mat[7]=0;
 }
 else if(i==8 && mat[8]==1)
 {
   m[2][2]=x;
   mat[8]=0;
 }
 else{
   t=t-1;
   printf("Slot not available\n");
 }
}
int check()
{
  int x=120;
  int y =111;
  if((m[0][0]==x && m[0][1]== x && m[0][2]==x)||(m[0][0]== x && m[1][0]== x && m[2][0]==x) ||(m[0][1]== x && m[1][1]==x && m[2][1]==x) ||(m[0][2]==x && m[1][2]==x && m[2][2]==x)||(m[1][0]==x && m[1][1]== x && m[1][2]==x)||(m[2][0]==x && m[2][1]==x && m[2][2]==x)||(m[0][0]==x &&m[1][1]== x && m[2][2]==x)||(m[0][2]==x && m[1][1]==x && m[2][0]==x))
  {
    printf("Player 1 wins\n");
    return 1;
  }
  else if((m[0][0]==y && m[0][1]== y && m[0][2]==y)||(m[0][0]== y && m[1][0]== y && m[2][0]==y) ||(m[0][1]== y && m[1][1]==y && m[2][1]==y) ||(m[0][2]==y && m[1][2]==y && m[2][2]==y)||(m[1][0]==y && m[1][1]== y && m[1][2]==y)||(m[2][0]==y && m[2][1]==y && m[2][2]==y)||(m[0][0]==y &&m[1][1]== y && m[2][2]==y)||(m[0][2]==y && m[1][1]==y && m[2][0]==y))
  {
    printf("Player 2 wins\n");
    return 1;
  }
  else{return 0;}
}
void display()
  { 
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    
    {  if(i!=2)
      printf("__");
      else
      printf("  ");
      printf("%c",m[i][j]);
       if(i!=2)
       printf("__");
        else
      printf("  ");
       if(j!=2)
      printf("|");
    }
   
    printf("\n");
   
  }

  }

int main(void){
    for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
    {
      m[i][j]= c;
       if(i!=2)
      printf("__");
      else
      printf("  ");
     printf("%d",c);
     if(i!=2)
       printf("__");
        else
      printf("  ");
       if(j!=2)
      printf("|");
      c++;
    }printf("\n");
  }
  
  for(i=0;i<9;i++)
  {
    mat[i]=1;
  }
  
 t=0;
  while(check()!=1)
  { 
    if(t%2 ==0 )
    {
      printf("\nPLAYER 1 Enter your no.");
      scanf("%d",&d);
      t++;
     
      func(d,'x');
      display();
    }
    else {
      printf("\nPLAYER 2 Enter your no.");
      scanf("%d",&d);
      t++;
      func(d,'o');
      display();
     
    }
  if(t==9)
     {
       printf("DRAW");
      break;
     }   
  }
  l1:
return 0;
}
