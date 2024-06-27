// 1.
// #include <iostream>
// using namespace std;

// void print(int arr[],int size){
//     for(int index = 0 ; index<size;index++){
//         cout<<arr[index]<<" ";
//     }
// }
// void solve1(int arr[],int n){
//     for(int i=0; i<n; i++){
//         arr[i]=arr[i]*10;
//     }
// }

// int main(){
//     int arr [] ={10,20,30,40,50};
//     int size = 5;
//     solve1(arr,size);
//     print(arr,size);

//     return 0;
// }

// Algorithm- Linear search
// #include <iostream>
// using namespace std;

// //logic run
// bool findTarget(int arr[], int size, int target){
//     for(int i = 0; i<size; i++ ){
//         if(arr[i]== target){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[100];
//     int size;
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>size;

//     for(int i = 0; i<size; i++ ){
//         cout<<"Enter the input value for index"<<i<<endl;
//         cin >>arr[i];
//     }
    
//     int target;
//     cout<<"Enter the target value:"<<endl;
//     cin>> target;

//     bool ans = findTarget(arr,size,target);
//     cout<<"ans"<<ans<<endl;
// }

// Finding maximum number within given numbers using max or min function.
#include <iostream>
#include <limits.h>
using namespace std;
int findMax(int arr[],int n){
    int maxAns = INT_MIN;
    for(int i = 0; i<n ; i++){
        maxAns = max(maxAns,arr[i]);
    }
    return maxAns;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the number of elements:"<<endl;
    cin>>size;
    for(int i = 0; i<size; i++ ){
        cout<<"Enter the input value for index"<<i<<endl;
        cin >>arr[i];
    }
    cout<< "Maximum number is:" << findMax(arr,size)<<endl;
} 

// Counting how many zero and ones are present.
// #include <iostream>
// #include <limits.h>
// using namespace std;

// void printzeroAndones(int arr[],int n){
//     int zeroCount = 0;
//     int onesCount = 0;
//     // traverse in whole array
//     for(int i; i<n ;i++){
//         int currElement = arr[i];
//         if (currElement == 0){
//             zeroCount++ ;
//         }
//         if (currElement ==1){
//             onesCount++ ;
//         }
//     }
//     cout<<"Total Zeroes:" <<zeroCount<<endl;
//     cout<<"Total Ones:" <<onesCount<<endl;
// }
// int main(){
//     int arr[100];

//     int size;
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>size;

//     for(int i = 0; i<size; i++ ){
//         cout<<"Enter the input value for index : "<<i<<endl;
//         cin >>arr[i];
//     }

//     printzeroAndones(arr,size);
// }


// Doing extreme count using two pointer for both odd and even 
#include <iostream>
using namespace std;
void extremeprint(int arr[],int n){
    int i = 0; // left side
    int j = n-1; // right side
    while( i<=j){
        // if(i==j){
        //     cout<<arr[i]<<" ";
        //     i++;
        // }
        // else{
        //     cout<<arr[i]<<" ";
        //     i++ ;
        //     cout<<arr[j]<<" ";
        //     j-- ;
        // }
        //OR
        cout<<arr[i]<<" ";
        i++;
        if(j>i){
            cout<<arr[j]<<" ";
            j-- ;
        }
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    extremeprint(arr,size) ;
}
