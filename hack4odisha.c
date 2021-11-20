#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
 int north,south,east,west;
 char name[30];
 struct node *next;
};
void create(struct node **st,char sn[30]);
void cal(struct node **st,int n);

int main()
{
int n,x,p,m,i;
struct node *signal=NULL;

//creating the signal linked list
 create(&signal,"PMG Square");
 create(&signal,"AG Square");
 create(&signal,"Airport Square");
 create(&signal,"Sishu Bhawan Square");
 create(&signal,"Raj Mahal Square");
 create(&signal,"Master Canteen Square");
printf("Some of the heavily crowded traffic signals of Bhubaneswar\n");
while(1) //performing the task accoring to the given choice
{
printf("___________________________________________________________________\n");
printf("\nenter the traffic post whose signal you want to manage\n");
printf("0. To exit\n");
printf("1. PMG Square\n");
printf("2. AG Square\n");
printf("3. Airport Square\n");
printf("4. Sishu Bhawan Square\n");
printf("5. Raj Mahal Square\n");
printf("6. Master Canteen Square\n");

scanf("%d",&x);
printf("\n");
if(x==0)
break;
 switch(x)
 {
 case 1:
 cal(&signal,x);
 break;
 case 2:
 cal(&signal,x);
 break;
 case 3:
 cal(&signal,x);
 break;
 case 4:
 cal(&signal,x);
 break;
 case 5:
 cal(&signal,x);
 break;
 case 6:
 cal(&signal,x);
 break;
 default:
 printf("wrong input\n");
 break;
 }
}
return 0;
}
void cal(struct node **st,int n)
{
 int i=1,d,time;
 struct node *t1=*st;
 while(i!=n)
 {
  t1=t1->next;
  i++;
 }
 
 //check through the sensor how long the traffic is at a particular direction starting from east(then south, west and finally north)
 for(i=1;i<=4;i++)
 {
  switch(i)
  {
   case 1:
   printf("taking the input for the length of traffic of east side of %s\n",t1->name);
   //this input is actually taken through the sensors few seconds before the signal is turned green
   scanf("%d",&(t1->east));
   d=t1->east;
   if(d<=10)
    time=20;
   else if(d>=10 && d<20)
    time=25;
   else if(d>=20 && d<30)
    time=30;
   else if(d>=30 && d<40)
    time=40;
   else if(d>=40 && d<50)
    time=50;
   else
    time=65;
   printf("the time that is allocated to this direction is %d seconds\n",time);
   break;
   case 2:
   printf("taking the input for the length of traffic of south side of %s\n",t1->name);
   //this input is actually taken through the sensors few seconds before the signal is turned green
   scanf("%d",&(t1->south));
   d=t1->south;
   if(d<=10)
    time=20;
   else if(d>=10 && d<20)
    time=25;
   else if(d>=20 && d<30)
    time=30;
   else if(d>=30 && d<40)
    time=40;
   else if(d>=40 && d<50)
    time=50;
   else
    time=65;
   printf("the time that is allocated to this direction is %d seconds\n",time);
   break;
   case 3:
   printf("taking the input for the length of traffic of west side of %s\n",t1->name);
   //this input is actually taken through the sensors few seconds before the signal is turned green
   scanf("%d",&(t1->west));
   d=t1->west;
   if(d<=10)
    time=20;
   else if(d>=10 && d<20)
    time=25;
   else if(d>=20 && d<30)
    time=30;
   else if(d>=30 && d<40)
    time=40;
   else if(d>=40 && d<50)
    time=50;
   else
    time=65;
   printf("the time that is allocated to this direction is %d seconds\n",time);
   break;
   case 4:
   printf("taking the input for the length of traffic of north side of %s\n",t1->name);
   //this input is actually taken through the sensors few seconds before the signal is turned green
   scanf("%d",&(t1->north));
   d=t1->north;
   if(d<=10)
    time=20;
   else if(d>=10 && d<20)
    time=25;
   else if(d>=20 && d<30)
    time=30;
   else if(d>=30 && d<40)
    time=40;
   else if(d>=40 && d<50)
    time=50;
   else
    time=65;
   printf("the time that is allocated to this direction is %d seconds\n",time);
   break;
  }
  printf("\n");
 }
}
void create(struct node **st,char sn[30])
{
 struct node *new=(struct node*)malloc(sizeof(struct node));
 strcpy(new->name,sn);
 new->east=0;
 new->south=0;
 new->west=0;
 new->north=0;
 new->next=NULL;
 struct node *t1=*st;
 if(*st==NULL)
 *st=new;
 else
 {
  while(t1->next!=NULL)
  t1=t1->next;
  t1->next=new;
 }
}

