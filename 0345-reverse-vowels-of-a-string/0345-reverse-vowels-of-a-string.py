class Solution:
    def check(self, c):
        if c.lower() == 'a' or c.lower() == 'e' or c.lower() == 'i' or c.lower() == 'o' or c.lower() == 'u':
            return True
        else:
            return False

    def reverseVowels(self, s: str) -> str:
        lis = []

        # Store vowels
        for i in range(len(s)):
            if self.check(s[i]):
                lis.append(s[i])

        # Reverse vowels
        lis.reverse()

        # Convert string to list
        ss = list(s)

        j = 0

        # Replace vowels
        for i in range(len(s)):
            if self.check(s[i]):
                ss[i] = lis[j]
                j += 1

        return "".join(ss)