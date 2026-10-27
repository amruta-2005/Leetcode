class Solution {
public:
    bool isCycle(vector<vector<int>>& graph,int u,vector<bool>& visited,vector<bool>& recur){
        visited[u]=true;
        recur[u]=true;
        for(int &v:graph[u]){
            if(visited[v]==false && isCycle(graph,v,visited,recur)){
                return true;
            }
            else if(recur[v]==true){
                return true;
            }
        }
        recur[u]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<bool> visited(v,false);
        vector<bool> recur(v,false);
        for(int i=0;i<v;i++){
            if(!visited[i]){
                isCycle(graph,i,visited,recur);
            }
        }
         vector<int> res;
         for(int i=0;i<v;i++){
            if(recur[i]==false){
                 res.push_back(i);
            }
         }
         return res;
    }
};