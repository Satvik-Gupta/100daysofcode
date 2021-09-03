class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int,int> m1 ,m2;
        vector <int> inter_arr;
        
        for(int i=0 ; i<nums1.size() ;i++) m1[nums1[i]]++;
        for(int i=0 ; i<nums2.size() ;i++) m2[nums2[i]]++;
        
        for(auto i : m1)
            if(m2.find(i.first)!= m2.end())
                for(int j=0 ; j< min(i.second , m2[i.first]);j++)
                    inter_arr.push_back(i.first);
            
        return inter_arr;
    }
};