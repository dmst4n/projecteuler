main = do
let sum_1 = (sum [1..100])^2
let sum_2 = sum [x^2 | x <- [1..100]]
print (sum_1 - sum_2)
