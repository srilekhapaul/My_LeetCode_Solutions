typedef pair <int, int> pii;
class Solution {
private:
    priority_queue <pii, vector <pii> , greater<pii>> pq;
    
public:

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector <vector <pii>> graph(n+1);
        vector <int> dist (n+1);
        for(auto time :times)
        {
            graph[time[0]].push_back({time[1],time[2]});
        }

        for(int i=1;i<=n;i++)
        {
            if(i==k)
            {
                pq.push({0,k});
                dist[k]=0;
            }
            else
            {           
                pq.push({INT_MAX,i});
                dist[i]=INT_MAX;
            }

        }
        while (!pq.empty() and dist[pq.top().second]<INT_MAX)
        {
            pii u=pq.top();
            pq.pop();
            for(auto adj : graph[u.second])
            {   
                int v=adj.first;
                int w=adj.second;
                
                if(dist[v]>dist[u.second]+w)
                {
                    dist[v]=dist[u.second]+w;
                    pq.push({dist[v],v});
                } 
            }
        }
        int maxTime=0;
        for(int i=1;i<=n;i++)
        {   
            if(dist[i]==INT_MAX)
                return -1;
            if(i==k)
                continue;
            maxTime=max(maxTime,dist[i]);
        }
        return maxTime;
    }
};
