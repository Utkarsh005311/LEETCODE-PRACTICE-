class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i!=j && arr[i]==2*arr[j])
                {
                    return true;
                }
            }
        }
        return false;
        /*unordered_set <int> set;
        for (int i = 0; i < arr.size(); i++) {
            if ((set.count(2 * arr[i])) || (arr[i] % 2 == 0 && set.count(arr[i] / 2))) {
                return true;
            }
            set.insert(arr[i]);
        }
        return false;*/
    }
};
