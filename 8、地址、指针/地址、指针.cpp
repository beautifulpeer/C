#include <stdio.h> 

/*
int fa(int a){
	a++;
}

int fb(){
	int c = 0;
	fa(c);
	printf("c:%d\r\n",c);
}
*/
/***************************************************/
/*
int fa(int *a){
	(*a)++;
}
int fb(){
	int c = 0;
	fa(&c);
	printf("c:%d\r\n",c);
}
*/

int fa(int a){
	for(a=0;a<5;a++)
	{
		printf("%d\r\n",a);
	}

	return a;
}

int fb(){
	int c = 0;
	fa(c);
	//printf("c:%d\r\n",fa(c));
}

int main()
{
	fb();
}



