#include<stdio.h>


int lowerBound(int *a,int size,int num) //lower bound is num>= number in series(2 -> lb=1 but 4-> lb=6)
{
	int mid,left=0,right=size;
	
	mid = (left +right)/2;
	
	while(left<right)
	{
		mid = (left +right)/2;
		 
		if(a[mid]>=num)
		    right = mid;
		    
		else left = mid+1;
		    
	}
	
	return left;
}



int main(){
	int a[] = {1,2,2,3,3,3,5,6,7,7,7};
	
	int size = 11,num;
	
	scanf("%d",&num);//enter number to find lower bound of it
//	int lowerb = lowerBoundWithBinarySearch(a,n, num);
		int lowerb = lowerBound(a,size, num);
	printf("lower bound = %d ..... value = %d ",lowerb,a[lowerb]);
}
