#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;


int fact(int n)
{
    return (n <= 1)? 1 :n * fact(n-1);
}

char* nextPermutation(char array[] , int size) {
    int i = size - 1;
    while (i > 0 && array[i - 1] >= array[i]) {
        i--;
    }

    //if (i <= 0) {
        //return false;
    //}
    int j = size - 1;

    while (array[j] <= array[i - 1]) {
        j--;
    }

    char temp = array[i - 1];
    array[i - 1] = array[j];
    array[j] = temp;

    j = size - 1;

    while (i < j) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }

    for(i=0;i<3;i++){
        cout<<array[i];
    }
    return array;
}

bool comparefn( char arr[] , string s , int size){
    for( int i = 0; i < size; i++ ){
        if(arr[i] != s[i]){
            return false;
        }
    }
    return true;
}

int main(){

int n = 0;
cout<<"enter n";
cin>>n;
char* arr = new char[n];
for( int i = 0; i < n; i++ ){
    cout<<"\nenter next character :";
    cin>>arr[i];
}
sort(arr,arr+n);

string s;
cout<<"\nenter the word";
cin>>s;
for(int i = 0; i < fact(n); i++ ){
    if( comparefn(arr,s,n) == true ){
        cout<<"\nRank is "<<i+1;
        break;
    }else{
    arr = nextPermutation(arr,n);
    }
}
}
