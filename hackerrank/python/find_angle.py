import math

ab = int(input())
bc = int(input())

tanx = ab / bc

rad = math.atan(tanx)

print('{}\u00B0'.format(int(round(math.degrees(rad)))))
