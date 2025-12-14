#include<stdio.h>
int main(){
    int n,i,j,temp,maxIndex;

printf("Enter number of elements ");
scanf("%d",&n);

int arr[n];

printf("Enter %d elements:  ", n);


for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
for(i=0;i<n-1;i++){
    maxIndex = i;
    for (j = i+1; j<n; j++){
        arr([j] > arr[maxIndex]){
            maxIndex = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[maxIndex];
    arr[maxIndex] = temp;
}
printf("Sorted array in descending order ");
for(i =0; i<n ; i++){
    printf("%d".arr[i]);

}
  return 0;
}

