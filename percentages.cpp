// percentage calculation IPE
#include<stdio.h>
int main()
{	int mat_a,mat_b,phy,che,eng;
	printf("enter the values of maths a,maths b,physics,chemistry,english respectively\n");
	scanf("%d%d%d%d%d",&mat_a,&mat_b,&phy,&che,&eng);
	if(mat_a>75||mat_b>75||phy>60||che>60||eng>100)
	{	printf("please enter valid marks");
		}	
	else
	{	float _a,_b,_c,_d,_e,total;
		_a=(float)(mat_a*100)/75;
		_b=(float)(mat_b*100)/75;
		_c=(float)(phy*100)/60;
		_d=(float)(che*100)/60;
		_e=(float)eng;
		total=(float)((mat_a+mat_b+phy+che+eng)*100)/370;
		printf(" maths a percentage=%f%%\n maths b percentage=%f%%\n physics percentage=%f%%\n chemistry percentage=%f%%\n english percentage=%f%%\n total percentage=%f%%\n",_a,_b,_c,_d,_e,total);  
		}
return 0;			
}
