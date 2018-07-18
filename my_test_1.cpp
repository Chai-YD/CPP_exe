//魔方：
//要求：行、列、对角线上的值相加均相等
#include<iostream>
using namespace std;

//魔方的实现
void print(int num){
    int arr[15][15] = {0};//初始化数组
    int row = 0;
    int col = ( num - 1 )/2;
    arr[row][col] = 1;
    //首先将第一行的中间位置置为1，
    //继续判断当前位置的上一行的下一列是否为0，如果为0，将其置为下一个数字，
    //不为0，将当前位置的下一行置为下一个数字
    int  value = 2;
    for(;value<=num*num;value++){
        if(arr[(row-1+num)%num][(col+1)%num] == 0){
            row = (row-1+num)%num;
            col = (col+1)%num;
            arr[row][col] = value;
        }else{
            row = (row+1)%num;
            arr[row][col] = value;
        }
    }
    cout<<"魔方："<<endl;
     int i = 0;
     for(;i<num;i++){
         int  j = 0;
         for(;j<num;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
}

int main(){
    int n = 0;
    cout<<"输入阶数： ";
    cin>>n;
    print(n);
    return 0;
}
