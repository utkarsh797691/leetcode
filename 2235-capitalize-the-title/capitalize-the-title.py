class Solution:
    def capitalizeTitle(self, title: str) -> str:
        s = title.lower()
        word = s.split()
        for i in range(len(word)):
            if len(word[i]) >= 3:
                word[i] = word[i].capitalize()
        return " ".join(word)
        