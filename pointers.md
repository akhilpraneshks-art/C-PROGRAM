\#include<stdio.h>

struct student {

&nbsp;   char name\[20];

&nbsp;   int regno;

};

int main(){

&nbsp;   struct student std1={"akhil",1};

&nbsp;   struct student \*point=\&std1;

&nbsp;   printf("My name is %s\\n",point->name);

&nbsp;   printf("My name's memory address is %p\\n",point->name);

&nbsp;   printf("My regno is %d\\n",point->regno);

&nbsp;   printf("My regno memory address is %p\\n",point->regno);

&nbsp;   return 0;

}

