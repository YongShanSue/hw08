
//////HW08.cpp		 
//////Author:	YUNG-SHAN SU 
//////Date: 4/16
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include"MAT.h"
#include<math.h>
#include<sys/time.h>



int main(int argc,char **argv){
	double duration;                    //Variable time duration
    struct timeval start;               //Variable start time
    struct timeval stop;                //Variable stop timei
    int size =5;
    char rega,regb;
    VEC XDATA(size);
    VEC YDATA(size);
    ////////////Load the matrix size and the Matrix/////////
	scanf("%c\t%c\n",&rega,&regb);
	
	
	for(int i=0;i< size ;i++)
		scanf("%lf\t%lf\n",&XDATA[i],&YDATA[i]);
	
    
    //XDATA.print();
    //YDATA.print();
    int x_first=475;
    int x_end=775;

	double y;
	printf("x\ty\n");
	for (int i = x_first ; i<=x_end ;i++){
		y=Lagrange((double)i,XDATA,YDATA);
		printf("%d\t%lf\n",i,y);
    
	}
	return 0;
}	
