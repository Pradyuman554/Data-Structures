//Merge Sort: Divide and Conquer (dividing the problem, until it becomes so small that we can solve it directly)
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// void merge(int arr[],int l,int mid,int r){      //Assume the elements are sorted and we are only here to merge the divided array
// //Creating 2 temporary arrays
//     int n1=mid-l+1;
//     int n2=r-mid;

//     int a[n1];
//     int b[n2];

//     //Inputting Values
//     for(int i=0;i<n1;i++){
//         a[i] = arr[i+l];    //l because the starting point is l
//     }

//     for(int i=0;i<n2;i++){
//         b[i] = arr[mid+i+1];
//     }

//     //Making the merged array, for which we need 2 pointers (start and end), i and j
//     int i=0;
//     int j=0;
//     int k=l;    //Pointer of the final array, Initializing from l
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){   //Whoever is bigger in the divided array
//         arr[k] = a[i];  //Fill the smaller element in the final array
//         k++;
//         i++;
//         }
//         else {
//         arr[k] = b[j];
//         k++;
//         j++;
//         }
//     }
//     //Now, if i pointer reaches at the last the loop ends, but what about the j pointer then; the array will be left empty..
//     //To solve this:

//     while(i<n1){
//         arr[k]= a[i];
//         k++;
//         i++;
//     }
//     while(j<n2){
//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }

// void mergeSort(int arr[],int l,int r){      //We doing this work till l<r (left end is smaller than right end)
//     if(l<r){                                //Because l=r would mean that we only have 1 element left in our array
//         int mid = (l+r)/2;   //Mid for division  //After which we cannot divide our array further
//         mergeSort(arr,l,mid);   //Recursions for checking the 2 parts
//         mergeSort(arr,mid+1,r);

//         merge(arr,l,mid,r);     //Merging the divided arrays
    
//     }
// }


// int main()
// {   int a[] = {2,1,3,5,4};
//     int n = 5;

//     mergeSort(a,0,4);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
    
//     return 0;
// }

/*
1) Creating mergeSort function with if(l<r)     //Because recursion
   define mid
   mergeSort(from l to mid)     //Dividing the array in 2 parts for dividing and merging
   mergeSort(from mid+1 to r)   //until the array only consists of 1 element
   
   merge(arr,l,mid,r)

2) merge(...)
   define n1        // from right to mid-1
   define n2        // from mid to right

   define a[n1]     //temporary arrays for storing divided array
   define b[n2]

   merging the 2 arrays using while loop, incrementing values of i and j(which are going to be initialized first with =0) AND MAKING NEW ARRAY ARR[K]
   merging the array which gets left out after either of i,j reaches desired goal
*/




//In selection sort, we consider the left most element from the unsorted array, and compare it with all OTHER (i+1) elements in the unsorted array, until we find a value smaller than that.
//If we find a smaller value, we refer to it as the MINIMUM VALUE, and swap it with the element under observation.
//We find the minimum element from the unsorted array and place it in the sorted array (swap it with the 1st number)
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[] = {5,4,2,3,1,6};
//     int n=6;

//     for(int i=0;i<n-1;i++){     //(n-1) because once we have completed n-1 iterations, the last element would fall into its place automatically without the need of another iteration.
//     int min=i;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[min]){
//             min = j;
//         }
//     }
//     if(min!=i)  swap(arr[i],arr[min]);
//     }


//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }





//Bubble Sort: Repeating Solving 2 ADJACENT ELEMENTS if they are in the wrong order: The maximum element comes on the right position first (at the last) and consequently the sorted array is made at the end.
//In bubble sorting, the overall for loop is run n-i times, where i lies between 1 to  
//1) counter = 1 (to get the counting)
//2) for loop from 0 to (n-counter)
//3) if(arr[i]>arr[i+1])    swap(arr[i],arr[i+1])
//4) counter++;
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int main()
// {
//     int arr[] = {1,4,3,2,5};
//     int n=5;
//     int counter=1;       //Need for counter: So that we do not compare the element to an element in the sorted list, and the loop keeps moving till counter reaches n, because that would mean our array is sorted..
//     while(counter<n-1){
//     for(int i=0;i<n-counter;i++){        //This loop will compare all values to a single index value and ONLY THEN move forward
//         if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
//     }
//     counter++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
//Basically swapping the bigger element until we reach our sorted array to the right.




//Hackerrank: insertionArray1 - Variation of insertion sorting
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int insertionSort(vector<int> ar){
// int to_be_sorted = *( ar.end() - 1);
//     int i ;
//     for (i = ar.size(); i > 1; --i) {
//         if(to_be_sorted < ar[i-2]) {
//             ar[i-1] = ar[i-2];
//             for (int j = 0; j < ar.size(); ++j) {
//                 cout << ar[j] << " ";
//             }
//             cout << endl;
//         }
//         else {
//             break;
//         }
//     }
//         ar[i-1] = to_be_sorted;
//             for (int j = 0; j < ar.size(); ++j) {
//                 cout << ar[j] << " ";
//             }
//             cout << endl;
// }

// int main()
// {   
// vector<int>  _ar;
// int _ar_size;
// cin >> _ar_size;
// for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
//    int _ar_tmp;
//    cin >> _ar_tmp;
//    _ar.push_back(_ar_tmp); 
// }

// insertionSort(_ar);

//     return 0;
// }





//Insertion Sort: So basically it checks the array from right to left, that if ANY ELEMENT IS BIGGER THAN OUR CURRENT ELEMENT, our CURRENT ELEMENT CAN BE SWAPPED/INSERTED THERE.
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int main()
// {
//     int a,n;
//     cout<<"Enter the size: "; 
//     cin>>n;
//     int arr[n];    
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=1;i<n;i++){       //Traversing through the array
//         int current = arr[i];       //Storing current element
//         int j = i-1;    //initializing j by i-1 (because we don't wanna check our current element do we)
//             while(arr[j]>current && j>=0){      //Check the numbers, CHECK WITH ARR[J] NOT ARR[I]
//                 arr[j+1] = arr[j];
//                 j=j-1;
//             }
//             arr[j+1] = current;     //Storing the value of current NEXT TO THE ELEMENT WHICH IS SMALLER.
//         }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     return 0;
// }
// Insertion sort starts from index 1 and not from index 0.
// for loop from 1 to n{
// store current number
// j starting from (i-1)

// //Checking if arr[j] is bigger than current number (any element in sorted list is bigger than current element)
// while (arr[j]>current &&j>=0) {		//j should not be smaller than 0.
// //if yes, then move all the elements to the next position to create space for the current element to be added.
// arr[j+1] = arr[j];
// j--;	//To move and check all the elements
// }	//while loop end

// Now that we have checked, its time to place our element in the array.
// arr[j+1] = current	//because j is decremented by 1 and our element is to be inserted in the next place.




//Merging Arrays
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {6,7,8,9,10};
//     int n=5;
//     int n1=5;
//     int arr3[n+n1];
//     int a=10;
//     for(int i=0; i<n; i++){
//         arr3[i] = arr1[i];
//     }
//     for(int i=n,j=0; i<a,j<n;i++,j++){
//         arr3[i] = arr2[j];
//     }

//     for(int i=0;i<a;i++){
//         cout<< arr3[i]<<" ";
//     }
// return 0;
// }




//Quick Sort
// #include<bits/stdc++.h>
// using namespace std;

// void swap(int arr[],int i,int j){
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
// }

// int partition(int arr[],int l,int r){
//    int pivot = arr[r];  //Considering the rightmost element as pivot
//    int i = l-1;

//    for(int j=l;j<r;j++){ 
//       if(arr[j]<pivot){
//          i++; 
//          swap(arr,i,j);
//       }
//    }
//       swap(arr,i+1,r);
//       return i+1;
// }
//OR in case you want to use the STL Swap
/*
int partition(int arr[], int l, int r){
   int pivot = arr[r];
   int i = l-1;

   for(int j=l;j<r;j++){
      if(arr[j]<pivot){
         i++;
         swap(arr[i],arr[j]);
      }
   }
   swap(arr[i+1],arr[r]);
   return i+1;
}
*/

// void quickSort(int arr[], int l, int r){
//    if(l<r){
//       int pi = partition(arr,l,r);
//       quickSort(arr,l,pi-1);  //pi not included because it is already sorted
//       quickSort(arr,pi+1,r);
//    }
// }

// int main()
// {
//    int arr[] = {5,4,1,2,3,6};
//    int n=6;

//    quickSort(arr,0,4);

//    for(int i=0;i<n;i++) cout<<arr[i];

//    return 0;
// }
/*
Steps:
3 Functions: Swap, Partition, quickSort

Partition{
pivot declare
declare i

loop from l to r{
    if pivot is bigger than arr
    i++; swap(i,j)
}
swap(i+1,pivot)
return i+1
}

quickSort: 
pi = partition(arr,l,r)
Recursive from pi-1, and pi+1
*/




//Heap Sort
#include<bits/stdc++.h>
using namespace std;

class heap{
   public:
   int arr[100];
   int size;

   heap(){
      arr[0]=-1;
      size=0;
   }

   void insert(int val){
      size++;
      int index=size;
      arr[index] = val;

      while(index>1){
      int parent=index/2;
         if(arr[parent]<arr[index]) 
         {
            swap(arr[parent],arr[index]);
            index=parent;
         }
         else  return;
      }

   }

   void print(){
      for(int i=1;i<=size;i++){
         cout<<arr[i]<<" ";
      }
   }
};

void heapify(int arr[], int n, int i){
   int largest=i;
   int left=2*i;
   int right=2*i+1;

   if(left<n && arr[largest]<arr[left])   largest=left;

   if(right<n && arr[largest]<arr[right]) largest=right;

   if(largest!=i) swap(arr[largest], arr[i]);
   heapify(arr,n,largest);   
}

int main()
{ 
   heap hea;
   hea.insert(59);
   hea.insert(60);
   hea.insert(41);
   hea.insert(29);
   hea.insert(15);

   hea.print();

   heapify()
   
   return 0;
}