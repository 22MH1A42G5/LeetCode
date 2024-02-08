class Solution:
    def numSquares(self, n: int) -> int:
        def isPerfectSquare(x):
            sqrt_x = int(math.sqrt(x))
            return sqrt_x * sqrt_x == x
        if isPerfectSquare(n):
            return 1
        while n % 4 == 0:
            n //= 4
        if n % 8 == 7:
            return 4
        for i in range(1, int(math.sqrt(n)) + 1):
            if isPerfectSquare(n - i * i):
                return 2
        return 3