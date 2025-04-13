class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          int pos=0;
          
          //move non zero element forward
          for(int num: arr){
              if(num != 0){
                  arr[pos++]=num;
              }
          }
          
          //fill others with zero
          while(pos<arr.size()){
              arr[pos++]=0;
          }
      }
  };