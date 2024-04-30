class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict1={}
        for i in strs:
            sorted_str = ''.join(sorted(i))
            if sorted_str in dict1:
                dict1[sorted_str].append(i)
            else:
                dict1[sorted_str] = [i]
        l1=list(dict1)
        l2=[]
        for i in l1:
            l2.append(dict1[i])
        return l2