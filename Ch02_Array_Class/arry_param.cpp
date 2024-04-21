#include <stdio.h>
#define MAX_SIZE 10

void sub(int x, int arr[])
{
    x = 10;
    arr[0] = 10;
}

int main() // void main() <이 함수 자체를 사용 못하기에 int로 대체함
{
    int var;
    int list[MAX_SIZE];

    var = 0;
    list[0] = 0;
    sub(var, list);                               // 위 sub 함수의 arr[]값을 받아옴.
    printf("var=%d, list[0]=%d\n", var, list[0]); // 그러므로 list[0]=10
}