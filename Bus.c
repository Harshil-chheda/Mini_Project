#include <stdio.h>
struct destination 
{ float speed,hrs;
  int d;
}h[100];
void cap(struct destination l[],int size)
{ int j;
  for(j=0;j<size;j++)
  { if((l[j].speed*7.19)==347.7)// i.e. 7hrs 19mins Time take from Chennai to reach Bangalore
        printf("\nThe Bus %d will  reach the destination on Time",j+1);
    else if((l[j].speed*7.19)>347.7) // distance between Chennai and Bangalore is 347.7 Km
        printf("\nThe Bus %d will reach the destination earlier than expected",j+1);
    else
        printf("\nThe Bus %d will not reach the destination on Time",j+1);}}
int main() 
{ int i,n;
  printf("Total no. of Buses avaialbe to Reach the Destinations are:-\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("Bus %d speed: ",i+1);
    scanf("%f",&h[i].speed);}
  cap(h,n);
    return 0;
}