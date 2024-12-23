#include<stdio.h>
int main(){
	int arr[5]={6,7,9,1,2};
	int size= sizeof(arr)/sizeof(int);
	
	for ( int i =0 ; i<size-1; i++){
		for(int j=0 ; j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	for (int i=0; i<size; i++){
	printf(" mang da duoc sap xep le %d\n", arr[i]);}
	return 0;
}