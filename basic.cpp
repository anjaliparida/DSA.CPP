#include <iostream>
using namespace std;
// printing an array
void printanarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << "array" << arr[i] << endl;
    }
}


//sum of all elements in an array
int getsum(int arr [],int n){
    int sum=0;
    if (n== 0){
        return 0;
    }
    else{
    for( int i =0 ;i<n;i++){
        sum+=arr[i];
    }
    
    return sum;}

}
int main(){
    int arra[1000];
    int n;
    cin >> n;
    cout << "size of an array" << n << endl;
    printanarray(arra,1000);
    
    getsum(arra,n);
    return 0;
}