#include<stdio.h>

//Declaring and defining binary_search function
int binary_search(int array[],int lower_bound, int upper_bound,int value)
{
	int mid;
	if(lower_bound <= upper_bound)
	{
		mid = (lower_bound + upper_bound) / 2;
		if(array[mid]==value)
		{
			return mid+1;
		}
		
		else if(array[mid]<value)
		return binary_search(array,mid+1,upper_bound,value);
		
		else
		return binary_search(array,lower_bound,mid-1,value);
	}
	
	else
	return -1;

}

int main()
{
	int array[60],n;
	printf("\t Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("\t ENTER ARRAY elements \n");
	for(int i=0;i<n;i++)
	scanf("%d",&array[i]); // input the values of elements
	
	int value;
	printf("\t ENTER THE VALUE YOU WANT TO SEARCH \n");
	scanf("%d",&value);
	
	//to find the size of array
	//int n=sizeof(array) / sizeof(array[0]);
	
	int result= binary_search(array,0,n-1,value);
	
	printf("\t ARRAY elements are\n");
	for(int i=0;i<n;i++)
	printf("\t %d\n",array[i]);
	printf("\t Enter the value required to search is %d\n",value);
	if(result == -1)
	printf("\t Element is not present in array\n");
	else
	printf("\t Element that you search for, is present at %d position in array\n",result);
	return 0;
}
