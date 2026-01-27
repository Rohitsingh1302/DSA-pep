//print 1 to n:
#include<iostream>
using namespace std;

//print 1 to n using recursion:
void print1ToN(int i, int n){
   if(i > n) return;
   cout << i << " ";
   print1ToN(i + 1, n);
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    return 0;
}
 
//print n to 1:
//for(int i = n; i >= 1; i--){
//    cout << i << " ";
//}

//factorial of n using recursion:
//int factorial(int n){
//    if(n == 0 || n == 1) return 1;
//    return n * factorial(n - 1);
//}
