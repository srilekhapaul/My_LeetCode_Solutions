class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        cur_max=-1
        for i in range(len(arr)-1,-1,-1):
            if arr[i]>cur_max:
                arr[i],cur_max= cur_max,arr[i]
            else:
                arr[i]=cur_max
        return arr
                
