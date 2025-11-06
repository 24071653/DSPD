#include<stdio.h>
int main(){
int arr[50],n,i,j,search,middle;

printf("Enter the size of the array");
scanf("%d",&n);

printf("Enter %d elements inm ascending order\n",n);

for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int start = 0;
int end = (n-1);
printf("Enter the element you want to search: " );
scanf("%d",&search);

while(start<=end){
middle = (start+end)/2;

if(search==arr[middle]){
printf("element found at index %d", middle);
break;
}
else if(search>arr[middle]){
start=middle+1;
}
else if(search<arr[middle]){
end=middle-1;
}

else{
printf("Element not found");
}
}

return 0;
}