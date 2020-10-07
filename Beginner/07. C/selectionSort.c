/*

Basic understanding of Algorithm = 
   
   1. Find the smallest value among the array.
   2. Swap the smallest value with the start of the array (or A[0]).
   3. Repeat step 1 from 2nd index to the end of array (for N-2 times).
   4. Repeat step 2 (for N-2 times). 
   {N=size of array A}

*/

#include<stdio.h>

int min(int A[], int N, int k){
	int index, min,i;
	
	min=A[k];
	index=k;
	
	for(i=k+1;i<=N;i++){
		if(min>A[i]){
			min=A[i];
			index=i;
		}
	}
	return index;
}

int main(){
	int A[]={12,1,25,100,60,42};
	int N=sizeof(A)/sizeof(A[0]);
	int index,k,temp;
	
	for(k=0;k<=N-2;k++){
		index=min(A,N,k);
		temp=A[k];
		A[k]=A[index];
		A[index]=temp;
	}
	
	for(k=0;k<=N;k++){
		printf("%d ",A[k]);
	}
}
