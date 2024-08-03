//Using recursions to print the number of occurrences of a and b for (x = a^n + b^n).
// #include<bits/stdc++.h>
// using namespace std;
// int c = 0;
// int powerSum(int X,int num, int k,int N){
//     if (num == 0)  c++;
    
//     int d = pow(X,1.0/N);
    
//     for(int i=k+1;i<=d;i++){
//         int a = num - (int)pow(i,N);
//         if(a>=0)    powerSum(X,a,i,N); 
//         }

//     return c;
//     }

// int powerSumo (int x, int y){
//     return powerSum(x,x,0,y);
// }
// int main()
// {   cout << (powerSumo(40,2));
    
//     return 0;
// }




//Fibonacci Series using Recursions
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int fibo(int n){
//     if (n==0||n==1) return n;
//     else{
//         return (fibo(n-1)+fibo(n-2));
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int i=0;
//     while(fibo(i)<n){
//         cout<<fibo(i)<<" ";
//         i++;
//     }
    
//     return 0;
// }
// My approaches:
// 1) include while loop in another function
// 2) Include while loop in same function

// In addition to a recursion, a loop has been used to keep incrementing the values
// So that it doesnt get stuck at a single point because of recursion.




//Fibonacci Series using loops
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// class Fibo{
//     public:
// int a=0;
//  int first = 0;
//  int second = 1;
//  int gum=0;

// int sum(int n){

//     while (gum<=n){
//     if(n==0) cout<<gum;
//     else{
//     gum = first + second;
//     first = second;
//     second = gum;
//     if(gum<=n) cout<<gum<<" ";
// }
// }
// }
// };
// // 0 1 1 2 3 5 8
// int main()
// {   Fibo fib;
//     int n;
//     cin>>n;
//     fib.sum(n);
//     return 0;
// }





//Recursion Digit Sum
// #include<bits/stdc++.h>
// using namespace std;

//Unoptimized Approach... : Because stoi () has a range and its can't handle a number.
//So we can use --> stoll instead. ll stands for long long int. And it has the capability to handle large numbers

// int superDigit(string n, int k) {
//     if (n.length()==1 && k==1)   {
//         return stoll(n);
//     }
    
//     //Making the string
//     string c = n;
//     for(int i=0;i<k-1;i++){       //Concatenating Strings
//         n = n + c;
//     }
    
//     int a = n.length();
//     unsigned long long ar = stoll(n);           //Storing string as integer    
    
//     int digit;
//     vector<int> arr;
      
//     for(int i=0;i<a;i++){       //Storing integer as array of integers
//         digit = ar%10;
//         ar = ar/10;
//         arr.push_back(digit);
//     }
    
//     unsigned long long b=0;                    //Taking out superdigit
        
//     for(int i=0;i<arr.size();i++){
//         b = arr[i] + b;
//         }
    
//     n = to_string(b);
    
//     return superDigit(n,1);
// }


//Optimized Approach:
// int superDigit(string n, int k){

//    long long a=0;       // Take out the number from string and ADD THEM side by side, hence reducing lines of code.
//    for(char c: n){
//       a += c - '0';     //c is typecasted to int and added to a
//    }

//    if(a<10 && k==1)  return a;

//    return superDigit( to_string(a*k) , 1 );   //Multiplying the sum with k and converting to string  
// }

// int main()
// {
//     string n = {'1','2','3','4','5'};
//     int k=5;

//     cout << superDigit(n,k);
//     return 0;
// }





//Fibonacci Series using Recursions
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int sum(int n){
//     if(n==1||n==0) return n;
//     else{
//         return (sum(n-1) + sum(n-2));    
// }
// }
// //sum(n) + sum(n-1) won't work because WE DO NOT HAVE VALUE OF sum(n) yet; but we are actually DERIVING ITS VALUE. Never include func(n) = func(n) + something.. ; because that won't work like a variable. Unlike a variable, it does not have any previous value.
// int main()
// {   int n;
//     cin>>n;
//     int i=0;
//     while(i<n){              //We put while loop here because we have to print SUM lower to some integer N.
//     cout<<sum(i)<<" ";
//     i++;
//     }
    
//     return 0;
// }





//To find sum of n natural numbers
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int main()
// {   int a=0,n;
//     cin>>n;
//     for(int i=1;i<n+1;i++){
//         a = a + i;
//     cout<<a<<" ";        
//     }
//     return 0;
// }





//Finding Sum of n natural numbers using recursions
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>

// int a;
// int sum(int n){
//     if(n<=1) return n;
//     else return (sum(n-1) + n);
// }

// using namespace std;
// int main()
// {   int i=0,n,b;
//     cin>>n;
//     // while(i < n){                //We didn't put while loop here, because there is no condition to printing the sum LOWER to some boundaries, it a normal sum, and is going to get terminated by the function itself, because it has a condition (i<=1).
//     cout<<sum(n)<<" ";
//     // i++;
//     // b++;
//     // }
//     return 0;
// }





//Tail and Non tail recursive:

//Simple example of Non-Tail Recursion:
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// void rec(int n){
//     if(n<=1)    return ;
//     else {
//         cout<<n<<" ";
//         rec(n-1);
//         cout<<n<<" ";
//         }
//     return ;
// }
// int main(){
//     rec(5);
//     return 0;
// }

//Notice the order of the OUTPUT. It should have been 5 4 3 2 NOT 5 4 3 2 2 3 4 5. THIS PHENOMENON is because of the order of release of stack memory OR ORDER OF POPPING THE CONSECUTIVE RECURSIONS OUT OF STACK MEMORY. Loading order of the stacks was normal, but when they are popped out, it is done in a First in Last out Order.
//However same code but Tail recursive would look like this and watch the output. The output only shows "1" because after this 1, no EXPRESSION has to be evaluated and the code is finished. It prints the value of rec(1) (which happens at the lastt recursion), and then ends the function.

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int rec(int n){
//     if(n<=1)    return n;
//     return rec(n-1);
// }
// int main(){
//     cout<<rec(5);
//     return 0;
// }


//Non - Tail recursive to find factorial
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// int fact(int n){
//         if(n<=1){           //first i wrote if(n>0) LMAO
//             return n;
//         }
//         return n * fact(n-1);        //Look here, we FIRST SEE THAT WE HAVE TO GET FACT(n-1), and AFTER THAT, we also have to multiply this value with n. SO, our task DID NOT END IN THE RECURSIVE ITSELF.
//     }

// int main(){
//     cout<<fact(5);
//     return 0;

// }

//It is non tail recursive 


//Tail Recursive to find Factorial

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int factTR(int n,int a){
//     if(n<=1)        return a;
    // return factTR(n-1,n*a);      //Here, instead of trying to multiply the recursive with something, we instead divide the tasks: (n-1) and (n*a), and then store the value of n*a in a itself. So, no more work is required and now our recursive is tail recursive.
// }

// int fact(int n) {return factTR(n,1);}

// int main()
// {
//     cout<<fact(5);
//     return 0;
// }

//Hence tail recursive function is considered better than tail recursive because it stores return values of the function in the same areas of the stack BY POPPING THE PREVIOUS RECURSIVE CALL OUT OF THE STACK PUTTING THE NEW RECURSIVE CALL INTO THE SAME PLACE AS THE PREVIOUS STACK.

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;
// void printFun(int test)
// {
//     if (test < 1)
//         return ;
//     else {
//         cout << test << " ";
//         printFun(test - 1); // statement 2
//         cout << test << " ";
//         // return;
//     }
// }

// // Driver Code
// int main()
// {
//     int test = 3;
//     printFun(test);
// }

// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// void rec(int n){
//     if(n<=1)    return ;
//     else {
//         cout<<n<<" ";
//         rec(n-1);
//         cout<<n<<" ";
//         }
//     return ;
// }
// int main(){
//     rec(5);
//     return 0;
// }





//Crossword Solve
// #include<bits/stdc++.h>
// using namespace std;

// // vector<string> crosswordPuzzle(vector<string> crossword, string words) {
// //     //Finding Length of the missing spaces
// //     //Lets traverse the string until we find a -ve 
    
// //     for(int i)
// // }

// int main()
// {
//    vector<vector<int>> word;
//    int a;
//    for(int i=0;i<10;i++){
//       for(int j=0;j<10;j++){
//          cin>>a;
//          word.push_back(a);
//       }
//    }
   
//    for(int i=0;i<10;i++){
//       for(int j=0;j<10;j++){
//          cout << word[i][j];
//       }
//    }

//    return 0;
// }

//Find Length of different spaces
// Then we can try filling in the names with appropriate length into them.

// Then we check IF ANY THEIR LETTERS coincide with the STARTING LETTER of another word and if there is EMPTY SPACE IN SOMEWHERE AROUND IT.
// If yes, then we PLACE THAT WORD inside the puzzle. If no 

// Lets divide it into smaller problems:
// 1) Find the LENGTH of the different empty spaces.