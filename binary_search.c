#include<stdio.h>
int main(){
  int n;
  printf("enter the no. of elements in array");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int key;
  printf("enter the key :");
  scanf("%d",&key);
  int start = 0,flag=0;
  int end = n-1,m=0,mid;
  for(mid=(start+end)/2;start<=end;)
    {
      if(arr[mid]==key){
        flag=1;
        m=mid;
        break;
      }
      else if(arr[mid]<key){
        start = mid +1;
      }
      else {
        end = mid - 1;
      }
    }
  if(flag =1){
    printf("key element is in location no. %d(index no.)",m);
  }
  else {
    printf("element is not in array");
  }
  return 0;
}
