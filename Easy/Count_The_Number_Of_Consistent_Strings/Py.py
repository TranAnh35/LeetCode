class Solution(object):
    def countConsistentStrings(self, allowed, words):
        allowed_set = set(allowed)
        consistent_count = 0

        for word in words:
            if all(char in allowed_set for char in word):
                consistent_count += 1

        return consistent_count
    
if __name__ == '__main__':
    allowed = 'ab'
    words = ["ad","bd","aaab","baa","badab"]
    print(Solution().countConsistentStrings(allowed, words))