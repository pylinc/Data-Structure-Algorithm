class Solution {
public:
    bool check(int i , int currentSum, string s, int num){
        if(i==s.length()){
            return currentSum == num;
        }
        if(currentSum>num){
            return false;
        }

        bool possible = false;

        for(int j = i;j<s.length();j++){
            string sub = s.substr(i,j-i+1);
            int val = stoi(sub);

            possible = possible || check(j+1,currentSum+val,s,num);

            if(possible ==true){
                return true;
            }
        }

        return possible;
    }
    int punishmentNumber(int n) {
        int punish = 0;

        for(int i = 1;i<=n;i++){
            int sq = i*i;

            string s = to_string(sq);
            if(check(0,0,s,i)==true){
                punish+=sq;
            }
        }

        return punish;
    }
};