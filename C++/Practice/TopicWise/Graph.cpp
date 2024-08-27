// //BFS
// #include<bits/stdc++.h>
// using namespace std;

// class Graph{
//     int V;  //Vertices
//     vector< list <int> > adj;   //Pointer to an array containing adjacency list

// public:
//     Graph(int V){
//     this->V = V;
//     adj.resize(V);
//     }

//     void addEdge(int v, int w){     //Add w to v's list
//     adj[v].push_back(w);
//     }

//     void BFS(int s){    //Print BFS
//         vector<bool> visited;
//         visited.resize(V,false);    //Resize the bool vector visited (which is a vector to store whether the vertex was visited or not, because we can't revisit the same vector can we), and initialize with value false
    
//     //Making a queue in the form of LIST.
//         list<int> queue;    //Create a queue for BFS, which is going to store the traversed non - repeating elements

//         visited[s] = true;  //Mark the current node as visited
//         queue.push_back(s); //Now push_back the current node value into queue

//         while(!queue.empty()){
//             s = queue.front();  //DEQUEUE (return the first element and remove it) a vertex from queue and print
//             cout<<s<<" ";
//             queue.pop_front();  //Shoot and Scoot

//             for(auto adjacent : adj[s]){    //Get all adjacent vertices of dequeued vertex s. 
//             if(!visited[adjacent]){
//                 visited[adjacent] = true;
//                 queue.push_back(adjacent);
//             }
//             }
//         }
//     }
// };

// int main(){

//     //Create a Graph
//     Graph g(5);
//     g.addEdge(0,1);
//     g.addEdge(0,2);
//     g.addEdge(0,3);
//     g.addEdge(0,4);
//     g.addEdge(0,5);

//     cout<<"BFS: "<<endl;
//     g.BFS(0);
// }
/*
Summarising:
class Graph: 
1) 2 Variables: Graph and V(vertices)
2) 1 Constructor: Resize the Graph, store value of this.V = v;
3) 2 Functions: addEdge, BFS(int s)
BFS(int s){
    visited queue (resize it with V and initialize it with false)
    list queue

    visited[s] = true and push_back s inside queue

    while(queue is not empty){
        s = queue.top(), print it and pop
    }

    for(traversing the adjacent elements of s){
        if(they are not visited)    mark them visited, and store them inside queue
    }
}
// */




// DFS
// #include<bits/stdc++.h>
// using namespace std;

// class Graph{
//     public:

//     map<int,bool> visited;
//     map<int,list<int> > adj;

//     void addEdge(int v, int w){
//         adj[v].push_back(w);
//     }

//     void DFS(int v){
//         visited[v] = true;      //Mark current node as visited and print node
//         cout<< v << " ";
    
//         for(auto itr = adj[v].begin(); itr!= adj[v].end();++itr){
//             if(!visited[*itr])    DFS(*itr);
//         }
//     }
// };

// int main()
// {
//     Graph g;

//     g.addEdge(0,1);
//     g.addEdge(1,2);
//     g.addEdge(2,3);
//     g.addEdge(3,4);
//     g.addEdge(4,5);
//     g.addEdge(5,6);

//     cout<<"DFS: ";

//     g.DFS(0);
    
//     return 0;
// }
// /*
// class Graph:
// 1) 2 Maps: visited(bool), adj
// 2) 2 Functions: addEdge, DFS
// DFS(int s){
//     mark true for visited and print it
//     then make iterator i
//     Run the for loop to traverse the neighbours of s
//     If not visited, then Backtrack
// }

// */
