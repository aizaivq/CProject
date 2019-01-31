#include<time.h> //C语言的头文件   
#include<stdio.h> //C语言的I/O    

void ptime()
{
	time_t now; //实例化time_t结构    
        struct tm *timenow; //实例化tm结构指针    
        time(&now);
        timenow = localtime(&now);
        printf("Local time is %s/n",asctime(timenow));

}
  
void main()   
{
	ptime();   
}


   
