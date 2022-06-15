bool palihelper(int l , int r, string &s)
{ if(l>=r) 
    return true;
   if(s[l]!=s[r])
        return false;
    return palihelper(l+1,r-1,s);
}
bool isPalindrome(string &s)
{
	// Write your code here.
    return palihelper(0,s.size()-1,s);
}
