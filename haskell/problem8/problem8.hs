main = do

let result = take 1 [x * y * (1000-x-y) | 
                x <- [1..], 
                y <- [(ceiling (500.0 / (sqrt 2)))..], 
                x^2 + y^2 == (1000 - x - y)^2]
print result
