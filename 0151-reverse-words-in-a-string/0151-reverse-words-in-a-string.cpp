class Solution {
public:
    string reverseWords(string s) 
    {
        //first reverse whole string 
        reverse(s.begin(), s.end());
        
        // initialize three pointer
        int i=0;
        // l and r pointer ha jo revrse krenge sabhi word ko
        int l=0, r=0;
        int n=s.length();

        
        while(i<n)
        {
            //i ko koi character dikha too oh r ko de dega
            while(i<n && s[i]!=' ')
                {
                s[r]=s[i];
                i++;
                r++;
                }
                
            if(l<r)
            {
              reverse(s.begin()+l, s.begin()+r);
                
                s[r]=' ';
                r++;
                
                l=r;
            }
            i++;
       }
        
        s=s.substr(0, r-1);
        return s;
    
    }
};