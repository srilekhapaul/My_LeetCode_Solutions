class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        total=sum(cardPoints)
        n_k=len(cardPoints)-k
        winSum=sum(cardPoints[0:n_k])
        maxScore=total-winSum
        for i in range(n_k, len(cardPoints)):
            winSum+=cardPoints[i]
            winSum-=cardPoints[i-n_k]
            maxScore=max(maxScore,total-winSum)
        return maxScore
