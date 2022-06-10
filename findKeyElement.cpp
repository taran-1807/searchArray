//Check if the given element is present in the array
#include <iostream>

using namespace std;

// traversing the whole array 
bool searchArray(int arr[], int size, int key){
    
    // searching for key element
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    
    return 0;
    
}

int main()
{
    // taking input : the size of the array
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    
    // declaring array
    int arr[100];
    
    // taking input : the elements of the array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    // taking input: the element you want to search in the array
    int key;
    cout<<"Enter th element you want to search: "<<endl;
    cin>>key;
    
    bool found = searchArray(arr, n, key);
    
    if(found){
        cout<< " The element is present"<<endl;
    }
    else{
        cout<< " The element is absent";
    }

    return 0;
}
