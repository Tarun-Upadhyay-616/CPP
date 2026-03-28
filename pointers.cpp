#include<iostream>
using namespace std;
void change(int* ptr){
    ++*ptr;
}
int main(){
    int arr[] = {13,2,33,4,5};
    cout << *(arr+1);
    return 0;
}