#include<iostream> 

#include <stdio.h> 

int main()

{

    int N;

    int T;

    int n, t, m; 

    int money[105];

    int i;

	

	printf("�п�J���X���U�ȡG"); 

    scanf("%d",&N);

    printf("�п�J���X������G"); 

    scanf("%d",&T);

    

    i=0; 

    while( i<N) //ERROR1

    {

        money[i] = 0;  //ERROR2



        i = i+1;

    }



    

    printf("�п�J���X���U�ȡA�s���٬O���ڡA�s�کδ��ڤFm���G\n"); 

    i = 0;

    while( i<T )

    {

    scanf("%d%d%d",&n,&t,&m); //ERROR3



        if( t==1 )

        {

            money[n] = money[n] + m; //ERROR4

        }

        if( t==2 ) 

        {

            money[n] = money[n] - m; //ERROR5

        }



        i = i+1;

    }

    printf("�C�W�U�Ȫ��s�ڦp�U�G\n");  

    

    i = 0;

    while( i<N )

    {

    	printf("��%d�W�U�ȡG�Ѿl�s�ڬ�%d��\n",i+1,money[i]); 

        i = i+1;

    }



    return 0;  

}


