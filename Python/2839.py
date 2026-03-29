# class Solution:
#     def canBeEqual(self, s1: str, s2: str) -> bool:
#         if s1 == s2:
#             return True

#         temp = list(s1)
#         temp[0], temp[2] = temp[2], temp[0]
#         if "".join(temp) == s2:
#             return True

#         temp = list(s1)
#         temp[1], temp[3] = temp[3], temp[1]
#         if "".join(temp) == s2:
#             return True

#         temp[0], temp[2] = temp[2], temp[0]
#         if "".join(temp) == s2:
#             return True

#         return False