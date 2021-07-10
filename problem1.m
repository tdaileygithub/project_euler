#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
#The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.
echo off

sum_mults   = 0;
multiple_of = [3,5];
below_val   = 1000;
ismult      = false;

for itr=0:(below_val-1)

  multof = arrayfun(@(x) 0 == mod(itr,x), multiple_of);
  ismult = any(multof);

  if ismult
    sum_mults += itr;
  end
end

disp (sum_mults)