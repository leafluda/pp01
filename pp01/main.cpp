/*#include
standard library
<iostream> : input output stream
<thread>
<fstream>
<tstream>
<vector>

include라는 키워드를 사용하는 전처리기 #
int main()
{
    //std::cout << "Hello World!\n";
}
*/

/*
int main()
{
    return 0;
}
*/
//c스타일
#include <iostream>
//c++스타일
#include <stdio.h>

using namespace std;

    int main()
    {

        int a = 2, b = 3;
        //c스타일
        printf("Choi won babo\n\n");
        //c++스타일
        cout << a+b << "Kim babo\n\n";
        return 0;
    }