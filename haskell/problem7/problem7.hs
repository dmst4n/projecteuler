primes :: [Integer]
primes = 2 : 3 : filter (isPrimes primes) [5,7..]

isPrimes :: [Integer] -> Integer -> Bool
isPrimes (p:ps) n 
    | p * p > n = True
    | otherwise = n `rem` p /= 0 && isPrimes ps n

main = do
print (primes!!10001)
