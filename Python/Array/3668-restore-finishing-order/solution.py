class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        ans=[]
        for orders in order:
                if orders in friends:
                    ans.append(orders)
        return ans