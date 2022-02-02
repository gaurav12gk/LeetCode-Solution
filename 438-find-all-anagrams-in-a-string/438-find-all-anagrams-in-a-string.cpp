class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        vector<int> res;
          map<char,int> pathash,txthas; 
  for(auto c: pat)pathash[c]++; 
  int i = 0 , j = 0 ; 

  while(j<txt.size())
  {
	  txthas[txt[j]]++; 
	 if(j-i+1==pat.size())
	 { 
		 if(txthas == pathash)
		 {
			 	
				 res.push_back(i);
		 }
		 txthas[txt[i]]--; 
		 if(txthas[txt[i]]==0)txthas.erase(txt[i]); 
		 i++;
		 j++; 
	 }else j++;
  }
        return res;
    }
};