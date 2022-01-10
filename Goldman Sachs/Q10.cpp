
vector<int> max_num( vector<int> &arr, int n)
{
    vector<int> maxi;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++)
    {
    	pq.push(arr[i]);

        if(pq.size()>10){
            pq.pop();
        }
    }

    while(!pq.empty()){
        maxi.push_back(pq.top());
        pq.pop();
    }
  return maxi;
}