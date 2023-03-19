class BrowserHistory {
public:
    vector<string> v;
    int curr_index;
    
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        curr_index=0;
    }
    
    void visit(string url) {
        v.resize(curr_index+1);
        v.push_back(url);
        curr_index++;
    }
    
    string back(int steps) {
        int index = max(0,curr_index-steps);
        curr_index = index;
        return v[curr_index];
    }
    
    string forward(int steps) {
        int index = min((int)v.size()-1,curr_index+steps);
        curr_index = index;
        return v[curr_index];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */