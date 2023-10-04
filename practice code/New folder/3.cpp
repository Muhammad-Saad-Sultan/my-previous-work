#include <iostream>
using namespace std;
int main(){

int arr[6] = {10,20,30,40,50,60}
int *ptr1 = arr;// ptr1 = &arr[0] 

cout<<"value of arr = "<<arr<<endl;
cout<<"value of ptr = "<<ptr<<endl;
cout<<"value of ++*ptr = "<<++*ptr<<endl;
cout<<"value of *++ptr = "<<*++ptr<<endl;
cout<<"value of *ptr++ = "<<*ptr++<<endl;
cout<<"value of *ptr = "<<*ptr<<endl;

return 0;
}