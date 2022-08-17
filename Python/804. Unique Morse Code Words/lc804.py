class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        alphaDict={'a':".-",'b':"-...",'c':"-.-.",'d':"-..",'e':".",'f':"..-.",
                   'g':"--.",'h':"....",'i':"..",'j':".---",'k':"-.-",'l':".-..",'m':"--",
                   'n':"-.",'o':"---",'p':".--.",
                   'q':"--.-",'r':".-.",'s':"...",'t':"-",'u':"..-",'v':"...-",
                   'w':".--",'x':"-..-",'y':"-.--",'z':"--.."}
        resSet=set()
        for w in words:
            morse=""
            for c in w:
                morse+=(alphaDict[c])
            resSet.add(morse)
        return len(list(resSet))
