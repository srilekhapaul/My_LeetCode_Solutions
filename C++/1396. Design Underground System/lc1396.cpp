class UndergroundSystem {
public:
    unordered_map <int, pair <string, int>> startTime; // id, (station, time)
    unordered_map <string, pair <int,int>> avgTime; // s1_s2, (totalTime, count)
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        startTime[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string s1=startTime[id].first;
        string s1_s2=s1+"_"+stationName;
        int time=t-startTime[id].second;
        startTime.erase(id);
        avgTime[s1_s2]={avgTime[s1_s2].first+time,avgTime[s1_s2].second+1};      
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s1_s2=startStation + "_"+ endStation;
        return (double)avgTime[s1_s2].first/avgTime[s1_s2].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
