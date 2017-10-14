main = do
      let result = sum (takeWhile (<4000000) (filter even fibs))
      print result

fibs :: [Int]
fibs = 0 : 1 : zipWith (+) fibs (tail fibs)
