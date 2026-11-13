class Solution(object):
    def isThree(self, n):
        
        if n == 1 or n == 2 or n == 3:
            return False
        j = int(math.sqrt(n))
        if j * j != n:
            return False
        for i in range(2, j):
            if n % i == 0:
                return False
        return True
        