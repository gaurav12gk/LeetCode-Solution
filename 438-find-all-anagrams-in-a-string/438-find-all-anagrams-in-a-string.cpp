class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        vector<int> res;
          vector<int> txthas(26),pathash(26);
  for(auto c: pat)pathash[c-'a']++; 
  int i = 0 , j = 0 ; 

  while(j<txt.size())
  {
	  txthas[txt[j]-'a']++; 
	 if(j-i+1==pat.size())
	 { 
		 if(txthas == pathash)
		 {
			 	
				 res.push_back(i);
		 }
		 txthas[txt[i]-'a']--; 
		
		 i++;
		 j++; 
	 }else j++;
  }
        return res;
    }
};