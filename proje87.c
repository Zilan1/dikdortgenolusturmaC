#include <stdio.h>
#include <stdlib.h>
    
   void dikdortgen(int kisa,int uzun) 
	{
		int i,j;
		for(i=0;i<kisa;++i) 
		{
			for(j=0;j<uzun;++j)  
			{
				if(i==0) 
				{		
					printf("*");
				}
				else if(i==(kisa-1))
				{
					printf("*");
				}
				else{ 
					if(j==0 || j==(uzun-1)) 
					{
						printf("*");
					}
					else{
						printf(" "); 
					}
				}
			}
			printf("\n");
		}
	}

int main() {
	int k,u;  
	printf("Kisa kenar: ");
	scanf("%d",&k);
	printf("Uzun kenar: ");
	scanf("%d",&u);
	dikdortgen(k,u);
    
	
//********************************************************************	
	
	//void dortgen(int kisa, int uzun)
    //{
    	//int i,j;
    	//for(i=0;i<uzun;i++)
    	//{
    		//for(j=0;j<kisa;j++)
    		//{
    			//printf("*");
			//}
			//printf("\n");
		//}
	//}

    
//int main() {
	
	//dortgen(4,10);
	
	return 0;
}
