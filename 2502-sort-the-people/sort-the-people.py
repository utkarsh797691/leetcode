class Solution:
    def sortPeople(self, names: list[str], heights: list[int]) -> list[str]:
        pair = list(zip(heights,names))
        pair.sort(reverse = True)
        return [name for names, name in pair]