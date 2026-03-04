#include<bits/stdc++.h>
using namespace std;
map<string,vector<string>>adjList;

void addFriendship(string u, string v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

// using bfs algorithm to find the smallest "degree of seperation"
int find_connection(string start, string target){
    if(start==target)return 0;
    map<string,int>dist;
    queue<string>q;
    q.push(start);
    dist[start]=0;
    while(!q.empty()){
        string current=q.front();
        q.pop();
        for(string friends:adjList[current]){
            if(dist.find(friends)==dist.end()){
                dist[friends]=dist[current]+1;
                q.push(friends);
                if(friends==target){
                    return dist[friends];
                }
            }
        }
    }
    return -1; // if no connection exists!
}
int main(){
    ifstream inputFile("names.txt");
    if(!inputFile){
        cout<<"Error: Could not open network.txt!"<<endl;
        return 0;
    }
    string u,v;
    while(inputFile>>u>>v){
        addFriendship(u,v);
    }
    inputFile.close();
    cout<<"Data Driven Social Network Connection Finder:"<<endl;
    string personA,personB;
    cout<<"\nEnter first person name: ";
    cin>>personA;
    cout<<"Enter second person name: ";
    cin>>personB;
    int result=find_connection(personA,personB);
    if(result!=-1){
    cout<<personA<<" is "<<result<<" degrees away from "<<personB<<"."<<endl;
    }else{
    cout<<"No connection found between them."<<endl;
    }
}