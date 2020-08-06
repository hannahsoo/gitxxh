#include <stdio.h>
int sum1(const int *arr, int n);
int sum_rows(int [][3],int n);
int sum2d(int row, int col, int arr[row][col]); // VLA

int main(){
    int myarr[] = {2,3,4};
    int * ptr = myarr;
    printf("%d\n",*(++ptr));
    int result = sum1(myarr,sizeof myarr/ sizeof myarr[0]);
    printf("%d\n",result);
    int arr2d[][3]={
        {1,1,1},
        {2,2,3}
    };
    char *m1 = "pointer !\n";
    m1[2] = 'I';
    printf("--------%s",m1);
    const char m2[] = "array !\n";
    printf("%d\n",sum2d(2,3,arr2d));
    printf("%d\n",sum_rows(arr2d,2));
    printf("outbound: %d",arr2d[3][0]);
}
int sum1(const int *arr, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int sum_rows(int arr[][3], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        for(int j=0;j<3;j++){
            total += arr[i][j];
        }
    }
    return total;
}
int sum2d(int row,int col, int arr[row][col]){
    int total = 0;
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            total += arr[i][j];
        }
    }
    arr[3][0] = 27;
    return total;
}