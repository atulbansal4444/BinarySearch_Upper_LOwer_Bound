#include<stdio.h>


int upperBound(int a[],int l ,int r,int num) //upperbound is next index of last occurence....Searching_num <= number(3->UB=6; 4->UB=6; 8->UB=11; 0->UB=1; )
{
    int mid;
    
    while(l<r)
    {
        mid =(l+r)/2;
        
        if(num>= a[mid])
        { l = mid+1;
         
        }
        
        else r = mid;
        
    }
    
   
         return r; 
}


int main(){
	int a[] = {1,2,2,3,3,3,5,6,7,7,7};
	
	int n = 11,num;
	scanf("%d",&num);//enter number to find lower bound of it

		int upperb = upperBound(a,0,n, num);
	printf("Upper bound = %d ..... ",upperb);
}
