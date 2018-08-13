///////////////////////////////////////////
//vector的使用
///////////////////////////////////////////

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main(){
//    vector<int> vec;
//    int array[] = {1,2,3,4,5,6,7,8};
//    vector<int> vec2;
//    vec.insert(vec.begin(),array,array+sizeof(array)/sizeof(array[0]));
//    cout<<vec[0]<<endl;
//    cout<<vec.front()<<endl;//front返回的是第一个元素
//    cout<<*vec.begin()<<endl;//begin返回的是一个迭代器
//    cout<<vec2[0]<<endl;//在此处将会出现段错误
//    return 0;
//}

//#include<iostream>
//#include<list>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////删除元素的操作，这里的代码只是删除容器中的偶数和奇数。删除后打印容器
//
//
//int main(){
//    int arr[] = {1,2,3,4,5,6,7,8,9,0};
//    list<int> li;
//    vector<int> vec;
//    //插入元素
//    li.insert(li.begin(),arr,arr+sizeof(arr)/sizeof(arr[0]));
//    vec.insert(vec.begin(),arr,arr+sizeof(arr)/sizeof(arr[0]));
//    //to operator the list object
//    list<int>::iterator  begin;
//    for(begin = li.begin();begin!= li.end();){
//        if((*begin)%2 == 0){
//            begin = li.erase(begin);
//            continue;
//        }
//        ++begin;
//    }
//    //print the list
//    for(begin = li.begin();begin != li.end();++begin){
//        cout<<*begin<<endl;;
//    }
//    
//    vector<int>::iterator begi;
//    //to operator vector
//    for(begi = vec.begin();begi!=vec.end();){
//        if((*begi) % 2 == 0){
//            begi = vec.erase(begi);
//            continue;
//        }
//        ++begi;
//    }
//    //to print the vector with even number
//    for(begi = vec.begin();begi != vec.end();begi++){
//        cout<<*begi<<endl;
//    }
//    return 0;
//}


//#include<iostream>
//#include<vector>
//#include<list>
//#include<string>
//#include<algorithm>//算法的头文件
//
//using namespace std;
//
////删除特定元素操作如下
//
//int main(){
//    string arr[] = {"hehe","haha","shan","xi","ke","ji"};
//    list<string> li;
//    li.insert(li.begin(),arr,arr+sizeof(arr)/sizeof(arr[0]));
//    //查找
//    list<string>::iterator ite;
//    ite = find(li.begin(),li.end(),"haha");
//    li.erase(ite);
//    for(ite = li.begin();ite != li.end();++ite){
//        cout<<*ite<<endl;
//    }
//    return 0;
//}

//赋值操作如下，将一个vector中的元素拷贝到list容器中

//#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//int main(){
//    list<char*> li;
//    vector<string> vec;
//    char* listarr[] = {"shan","xi","ke","ji"};
//    string stringarr[] = {"xi","an","gong","yan"};
//    li.insert(li.begin(),listarr,listarr+4);
//    vec.insert(vec.begin(),stringarr,stringarr+4);
//    cout<<"the vector is:"<<endl;
//    vector<string>::iterator begin ;
//    for (begin = vec.begin();begin != vec.end();++begin){
//        cout<<*begin<<endl;
//    }
//    list<char*>::iterator begi;
//    cout<<"the list is :"<<endl;
//    for(begi = li.begin();begi != li.end();++begi){
//        cout<<*begi<<endl;
//    }
//    vec.assign(li.begin(),li.end());
//    vector<string>::iterator be ;
//    for (be = vec.begin();be != vec.end();++be){
//        cout<<*be<<endl;
//    }
//
//    return 0;
//}






















