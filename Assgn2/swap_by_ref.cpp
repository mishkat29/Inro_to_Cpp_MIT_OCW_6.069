#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a = b;
    b= temp;
}
int main(){
    int a =7;
    int b =8;
    swap(a,b);
    cout << a <<" "<<b;
}