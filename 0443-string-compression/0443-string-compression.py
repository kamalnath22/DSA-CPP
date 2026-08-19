class Solution:
    def compress(self, chars: list[str]) -> int:

        i = 0
        j = 0

        while i < len(chars):

            current = chars[i]
            count = 0

            # Count consecutive characters
            while i < len(chars) and chars[i] == current:
                i += 1
                count += 1

            # Write character
            chars[j] = current
            j += 1

            # Write count if greater than 1
            if count > 1:
                for digit in str(count):
                    chars[j] = digit
                    j += 1

        return j