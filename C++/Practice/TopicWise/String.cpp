//WAP to print how many letters of string are small and large
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// int main()
// {   
    // int a='a';       //Printing ascii value of character
    // cout<<a;

    //Seeing if array can grapple a single word or not.
    // char a[5];
    // for(int i=0;i<5;i++){
    //     cin>>a[i];
    // }
    // cout<<a;     //It can

    //Whether we can compare 2 strings.
    // if('A'<'a')     cout<<'a';
    // else    cout<<'A';
    //Yes we can..

//     int n;
//     cout<<"Please input the number of letters of the word: ";   cin>>n;
//     char a[n];
//     cout<<"Please input the word: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int small=0,big=0;
//     for(int i=0;i<n;i++){
//         if(a[i]<'a'){
//         small++;
//         }
//         else {
//             big++;
//             }
//     }
//     cout<<"The word you have input has "<<big<< " capital Letters and "<<small<<" small letters.";
//     return 0;
// }




//Separating a String into different words when a SEMI COLON comes
// #include<bits/stdc++.h>
// using namespace std;

// void solvePuzzle(string words){

//       vector<string> wor;
//       string word;
// int i=0;

//          while(i<words.length()){
//             if (words[i]!=';'){
//                word = word + words[i];               
//             }

//             else{
//                wor.push_back(word);
//                word = "";
//             }
//             i++;
//          }
//          wor.push_back(word);

//       for(int i=0;i<wor.size();i++)    cout<<wor[i]<<" ";
//       }

// int main()
// {  
//    string words = "Harbour;India;Spain";
//    solvePuzzle(words);
   
//    return 0;
// }
/*We have 5 strings
When semi colon come we move on to the NEXT string
We store 'words' inside another string word.
Till ';' store words inside word.
Then Continue i, but reset word[j].
Then push back this word inside vector.
Harbour;India
word[0] = words[0]	H
a r b o u r
i=7 ';' Else statement:
i=8, j=0;*/