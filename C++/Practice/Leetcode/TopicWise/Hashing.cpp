// #include<bits/stdc++.h>
// using namespace std;

// class HashTable{
//     public:
//     static const int hashGroups = 10;   //How many Linked List you want when using Open Hashing Method
//     list<pair<int,string>> table[hashGroups];   //Array of lists (each index is a list), pair of key and value

//     void isEmpty();
//     int hashFunction(int key);
//     void insert(int key, string value);
//     void remove(int key);
//     string search(int key);
//     void print();
// };

// void HashTable::isEmpty(){
//     int sum=0;
//     for(int i=0; i<hashGroups; i++){  //Finding whether all lists' size are equal to 0
//          sum+=table[i].size();     //Checking the whole list altogether by adding their sizes as this alone would be able to tell
//     }
//     if(sum==0)  cout<<"Empty";
//     else cout<<"Not Empty";
// }

// int HashTable::hashFunction(int key){   //As there are 10 different lists, return a value between 0 and 9
//     return key%hashGroups;
// }

// void HashTable::insert(int key, string value){
//     int index = hashFunction(key);
//     auto& cell = table[index];
//     auto itr = begin(cell);
//     bool keyExists = false; //If its true, means we are altering the value, else it means we are inputting a new key-value pair
//     for(itr=begin(cell);itr!=end(cell);itr++){
//         if(itr->first==key){   
//             keyExists=true;
//             itr->second=value;
//             break;
//             cout<<"Key Exists and Value has been replaced.";
//         }
//     }
//     if(keyExists==false){
//             cell.emplace_back(key,value);
//         }
//     return;
// }

// void HashTable::remove(int key){    //So, we also do have to know whether the key exists in hash table or not
//     int index = hashFunction(key);
//     auto& cell = table[index];
//     auto itr = begin(cell);
//     bool keyExists = false; //If its true, means we are altering the value, else it means we are inputting a new key-value pair
//     for(itr=begin(cell);itr!=end(cell);itr++){
//         if(itr->first==key){
//             keyExists=true;
//             itr = cell.erase(itr);    //Erase function is such a function, which after erasing the element, RETURNS THE NEXT ITERATOR FROM THE CURRENT ITERATOR, eg. item 2 is erased and itr=3 is returned. So, we have to contain this value in something, which we choose as itr itself
//             cout<<"Key Value pair has been removed.";
//             break;
//         }
//     }
//     if(keyExists==false){
//             cout<<"Key does not exist.";
//         }
//     return;
// }

// void HashTable::print(){
//     for(int i=0;i<hashGroups;i++){
//         if(table[i].size()==0)  continue;
//         else{
//             for(auto itr=begin(table[i]);itr!=end(table[i]);itr++){
//                 cout<<"Key:"<<itr->first<<", Value:"<<itr->second;
//             }
//         }
//     }
//     return;
// }

// string HashTable::search(int key){
//     int index=hashFunction(key);
//     for(int i=0;i<hashGroups;i++){
//         if(table[i].size()==0)    continue;
//         else{
//             for(auto itr=begin(table[i]); itr!=end(table[i]); itr++){
//                 if(itr->first==key) return itr->second;
//             }
//         }
//     }
//     return "Key doesn't map to any.";
// }

// int main()
// {
//     HashTable HT;
//     HT.insert(69,"Paddu");
//     HT.insert(70,"Kaddu");
//     HT.insert(68,"Chaddu");
//     HT.insert(67,"Laddu");
//     HT.insert(66,"Khaddu");
//     HT.insert(64,"Phaddu");
//     HT.insert(63,"Naddu");
//     string a = HT.search(75);
//     cout<<a;

//     return 0;
// }
/*
Approach:
Class HashTable: static hashgroups, HashTable in the form of Array of Lists of Pairs (key, value), And methods:
    a) insert
    b) remove
    c) isEmpty
    d) print
    e) search

Insert(int key, string value):
Convert key into index (to search it in HashTable)
And choose a particular cell according to this index, AS A REFERENCE VARIABLE
Now traverse this cell, using an iterator from begin and before end, and check if its first is equal to key or not.
    If yes, then change the second of the iterator to value AND BREAK, and if No, then use cell.emplace_back(key,value) AND BREAK.

Delete(int key):
Check whether it is there in the HashTable or not.
If yes, then itr=cell.erase(itr), and if no then uk

isEmpty():
If sum of sizes of all lists of array is 0, then empty, otherwise not

print():
for(int i=0;i<hashGroups;i++)   
    if(!table[i].size)   continue;
    else{
        iterator itr from table[i]-begin to end, cout<<itr->second;
    }

Search, can be done copying the insert method algo
*/
