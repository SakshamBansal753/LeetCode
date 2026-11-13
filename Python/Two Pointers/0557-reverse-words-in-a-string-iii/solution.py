class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans=s.split(' ')
        for i in range(len(ans)):
            ans[i]=ans[i][::-1]

        return ' '.join(ans)
        
        
        