# Problem no 3842 - Leetcode 


# class Solution:
#     def toggleLightBulbs(self, bulbs):
#         freq = {}

#         # Count occurrences
#         for b in bulbs:
#             freq[b] = freq.get(b, 0) + 1

#         result = []

#         # Check odd occurrences
#         for bulbID, count in freq.items():
#             if count % 2 != 0:
#                 result.append(bulbID)

#         result.sort()
#         return result