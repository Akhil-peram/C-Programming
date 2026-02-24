#include<stdio.h>
int main(){
  int arr[] = {1,3,5,2,7,6,9};
  int len = sizeof(arr) / sizeof(arr[0]);
for (int i =0;i<len-1;i++){
  for(int j =0;j<=len-i-1;j++){
    if(arr[j]>arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1]= temp;
        
    }
}
}
printf("Soretd Array: ");
for(int i =0;i<len;i++){
	printf("%d",arr[i]);
}
}
