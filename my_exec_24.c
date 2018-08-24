//#include<stdio.h>
//#include<math.h>
//int main(){
//    double x = pow(2.0,3.0);
//    printf("The Cubed if %f\n",x);
//    return 0;
//}

//#include<stdio.h>
//
////查看退出码
//int main(){
//    while(1);
//    return 0;
//}

////pipe匿名管道的使用
//#include<stdio.h>
//#include<string.h>
//#include<unistd.h>
//
//int main(){
//    char buf[100];
//    memset(buf,0x00,sizeof(buf));
//    int fd[2];
//    if(pipe(fd)!= -1){
//        printf("pipe success!\n");
//    }else{
//        printf("pipe defail!\n");
//    }
//    return 0;
//}

////命名管道mkfifo的使用,可以使用与不相关的进程之间信息的传递
//#include<stdio.h>
//#include<sys/types.h>
//#include<sys/stat.h>
//
//int main(){
//    mkfifo("fifo",0644);
//    return 0;
//}


////命名管道mkfifo的删除
//#include<stdio.h>
//#include<sys/types.h>
//#include<sys/stat.h>
//#include<unistd.h>
//
//int main(){
//    mkfifo("fifo",0644);
//    unlink("fifo");
//    return 0;
//}













