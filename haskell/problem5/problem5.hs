main = do
let result = foldr1 lcm [1..20]
print result
