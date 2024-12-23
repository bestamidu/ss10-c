#include<stdio.h>
int main(){
	int arr[5]={6,7,9,1,2};
		int size= sizeof(arr)/sizeof(int);

	for(int i =0; i<size; i++){
	int minindex=i;
	for(int j=i+1; j<size ;j++){
		if ( arr[j]<arr[minindex]){
			minindex=j;
		}
	}
	if (minindex!= i){
		int temp =arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
	   for (int i = 0; i <size ; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
	
}