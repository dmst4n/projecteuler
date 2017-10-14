primes :: [Integer]
primes = 2 : 3 : filter (isPrime primes) [5, 7..]

isPrime :: [Integer] -- Primes discovered "so far"
        -> Integer   -- Number we are checking for primality
        -> Bool
isPrime (p:ps) n
    -- No need to check divisors past sqrt(n), we know n is prime
    | p*p > n = True 
    -- Otherwise, it's prime if none of the primes we've discovered so far divide it evenly
    | otherwise = n `rem` p /= 0 && isPrime ps n


primesList :: Integer -> [Integer]
primesList n = takeWhile (<n) primes

main = do
let divisors = [x | x <- primesList 100000 , 600851475143 `mod` x == 0]
print (last divisors)


