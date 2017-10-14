import Control.Monad

main = do
  let problem_4 = maximum [x | y<-[100..999], z<-[y..999], let x=y*z, let s=show x, s==reverse s]
  print problem_4

test :: [Integer]
test = do
  let l1 = [100..]
  y <- l1
  let l2 = [y..999]
  z <- l2
  let x = y*z
  let s = show x
  guard (s == reverse s)
  return x

