#include<stdio.h>
#include<conio.h>

int main(){
int i,n;
int arr[100];
printf("Enter the elements(1 to 100): ");
scanf("%d",&n);
printf("\n");
for(i = 0;i < n;i++){
printf("Enter number %d: ",i);
scanf("%d",&arr[i]);}
for(i = 1;i < n;i++){
if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("Largest ELement: %d",arr[0]);
return 0;

}