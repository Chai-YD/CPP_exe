/////////////////////////////////////////
//查看环境变量
////////////////////////////////////////

//#include<iostream>
//using namespace std;
//int main(){
//    extern char** environ;
//    int i = 0;
//    int count = 0;
//    for(;environ[i];i++){
//        //cout<<environ[i]<<" ";
//        count++;
//    }
//    cout<<count<<endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main(int argc,char* argv[],char* env[]){
//    int i = 0;
//    int count = 0;
//    for(;env[i];i++){
//        count++;
//    }
//    cout<<count<<endl;
//    return 0;
//}

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    cout<<getenv("myname");
    return 0;
}

