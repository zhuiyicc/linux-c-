/*
0.0版本，不带参数利用ifstream getline对文件进行读入数据并输出。
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argc,char **argv){
    char buff[1024];
    ifstream in(argv[1]);
    memset(buff,0,sizeof(buff));
    while(in.getline(buff,sizeof(buff))){
        cout << buff  << endl;
   } 
    return 0;
}
