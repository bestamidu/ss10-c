#include<stdio.h>
int main(){
	   int arr[] = {5,11,2, 23, 6, 1, 12, 15, 19};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int value;
    int found = 0; 
    printf("cac mang hien tai ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("nhap gtri can ktra: ");
    scanf("%d", &value);
    
    for (int i =0; i<size ; i++){
    if (arr[i]==value){
    	printf("%d", i);
    	found=1;
		}
    }
     if (found ==0){
     printf(" khong co ptu ne ");}

     return 0;
	
}