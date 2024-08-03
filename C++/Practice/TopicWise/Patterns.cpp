//RECTANGLE PATTERN
// #include<iostream>
// using namespace std;
// int main()
// {   int i,j;
    
//     for(j=0;j<5;j++){
//     for(i=0;i<4;i++){
//     cout<<"*  ";
//     }
//     cout<<"\n";
//     }
//     return 0;
// }

//HOLLOW RECTANGLE PATTERN

// #include<iostream>
// #include<fstream>
// using namespace std;


// void fun(){
// cout<<"\t";
// }


// int main()
// {
    // ofstream fout("output.txt");
    // ifstream fin("input.txt");
//     int i,j,length,breadth,c,d,e,f;
//     cout<<"Enter the length and breadth of hollow rectangle: \n";
//     fin>>length>>breadth;
//         c=breadth-1;
//         e=length-2;
//         f=breadth-2;
//         for(i=0;i<breadth;i++){
//             fout<<"*\t";
//         }
//         fout<<"\n\n";

//         d=length-1;
//         for(j=0;j<d;j++)
//         {
//         if(j==e){
//         for(i=0;i<breadth;i++){
//         fout<<"*\t";
//         }
//         }
        
//         else{

//         fout <<"*";
//         for(i=0;i<c;i++){
//         fout<<"\t";
//         }
//         fout<<"*\n\n";
//         }

//         }


//     return 0;
// }

//Making Pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//     cout<<"* ";
//     }
//     cout<<endl;
           
//     }
    
//     return 0;
// }

//Pyramid of 10101.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"Enter size of pyramid: ";
//     cin>>n;

//     for(i=1;i<=n;i++){

//     for(j=1;j<=i;j++){
//         if(i%2==0 && j%2!=0){
//         cout<<"0\t";
//         }
//         else if (i%2!=0 && j%2==0){
//         cout<<"0\t";
//         }
//         else cout<<"1\t";

//     }
//     cout<<endl;
//     }
//     return 0;
// }