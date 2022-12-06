#include<stdio.h>
void binary_search(int *arr, int f, int l, int item){
int mid=f + (l-f) / 2;
if(f > l)
printf("Not Found");
else if(arr[mid]<item)
binary_search(arr, mid+1, l, item);
else if(arr[mid]>item)
binary_search(arr, f, mid-1, item);
else
printf("The item %d found at %d location.",
item, mid+1);
}
int main(){
int n;
printf("Name-:Namdini Gupta, Class:Cs Ai 2B, Sem:3, Roll:2101641520094,\n");
printf("Binary Search\n");
printf("Enter the length : ");
scanf("%d", &n);
int arr[n], item, i;
printf("Enter the elements : \n");
for(i=0; i<n; i++)
scanf("%d", &arr[i]);
printf("Enter the item to be searched: ");
scanf("%d", &item);
binary_search(arr, 0, n-1, item);
return 0;
}
