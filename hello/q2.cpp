#include <iostream>
#include <string>
using namespace std;
char* reverse(char *start,int end){
    static char ret[1000];
    char *p;
    p = start;
    for(int i=0;i<=end;i++){
        // cout<<i<<endl;
        *(ret+i) = *(start+end-i);
        // cout<<*(start+end-i)<<endl;
    }
    ret[end+1] = '\0';
    return ret;
}
int LCS(char *s1, char *s2, int len){
    int row = len+1;
    int col = len+1;
    int matrix[row][col];
// memset(matrix,0,row*col*4);
    for(int i=0;i<col;i++){
        matrix[i][0]=0;
        matrix[0][i]=0;
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(s1[i-1]==s2[j-1]){
                // cout<<i<<j<<endl;
                matrix[i][j] = matrix[i-1][j-1]+1;
            }
            else{
                matrix[i][j] = max(matrix[i][j-1],matrix[i-1][j]);
            }
        }
    }
    return matrix[row-1][col-1];
}
int main(){
    char buffer[1000];
    cin>>buffer;
    char *rev;
    int len;
    for(len=0;len<1000;len++){
        if(buffer[len]=='\0')   break;
    }
    // cout<<len<<endl;
    rev = reverse(buffer, len-1);
    // cout<<buffer<<endl;
    // cout<<rev<<endl;
    cout<<len-LCS(rev,buffer,len);
}