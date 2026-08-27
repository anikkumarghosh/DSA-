class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //greatest element to the right of a number = getr....we use interchaging method to interchange and track the greatest elemnet so first initialize with intmin
        int getr=INT_MIN;
        int n = arr.size();
        for ( int i =n-1;i>=0;i--){
            //steps of what we doing actually---
            //assign imtmin its the getr initially,so the last element must be getr,but the getr must be(max(getr,lastelement)) but we already lost real lastelement so we keep temp for tracking
            //then we decrease the index
            int temp = arr[i];
            arr[i]=getr;

            if(temp>getr){
                getr=temp;

            }

        }
        arr[n-1]=-1;
        return arr;
        
    }
};