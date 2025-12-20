#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int indx = 0;
    for(int i=0; i<count0; i++){
        arr[indx++] = 0;
    }
    for(int i=0; i<count1; i++){
        arr[indx++] = 1;
    }
    for(int i=0; i<count2; i++){
        arr[indx++] = 2;
    }
}
int PrintArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {0,0,1,2,0,1,0,2,1,2};
    int n = 10;
    sort(arr, n);
    PrintArr(arr, n);
    return 0;
}