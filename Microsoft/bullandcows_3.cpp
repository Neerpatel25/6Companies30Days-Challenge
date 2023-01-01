//bull and cows
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
         vector<int>a(10,0);
        vector<int>b(10,0);
       
        int bull=0;
        int cow=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
            }else{
                int x=secret[i]-'0';
                int y=guess[i]-'0';
                a[x]++;
                b[y]++;
            }
        }
        for(int i=0;i<10;i++){
            cow=cow+min(a[i],b[i]);
        }
        string d="";
        d=d+to_string(bull);
      
        d=d+'A';
  
        d=d+to_string(cow);
      
        d=d+'B';
        return d;
    }
};