class Solution {
public:
    int calPoints(vector<string>& operations) {
        int i=0,top=-1;
        int n=operations.size();
        vector<int>record(n,0);
        for(auto &s:operations)
        {
            if(s=="C")
            {
                top--;
            }
            else if(s=="D")
            {
                record[top+1]=record[top]*2;
                top++;
            }
            else if(s=="+")
            {
                record[top+1]=record[top]+record[top-1];
                top++;
            }
            else
            {
                record[top+1]=stoi(s);
                top++;
            }
        }
        int s=0;
        for(i=0;i<=top;i++)
        {
           s=s+record[i];
        }
        return s;
    }
};