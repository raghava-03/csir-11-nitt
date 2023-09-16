// ghecking grades
#include<stdio.h>
int main()
{ float per_;
printf("enter your percentage\n");
scanf("%f",&per_);
if(per_<=100 && per_>90)
{printf("you get A grade\a");
}
else if(per_<=90 && per_>80)
{printf("you get B grade\a");
}
else if(per_<=80 && per_>70)
{printf("you get C grade\a");
}
else if (per_<=70 && per_>60)
{printf("you get D grade\a");
}
else if (per_<=60 && per_>50)
{printf("you get E grade\a");
}
else
{printf("you have failed\a");
}
return 0;
}
