class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key= lambda x:x[1],reverse=True)
        units=0
        for box in boxTypes:
            while(box[0] and truckSize):
                truckSize-=1
                box[0]-=1
                units+=box[1]
        return units
