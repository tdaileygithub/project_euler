#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
#The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.
echo off

function sum_mults = sum_mult_func (multiple_of, below_val)
  sum_mults   = 0;
  ismult      = false;

  for itr=0:(below_val-1)
    multof = arrayfun(@(x) 0 == mod(itr,x), multiple_of);
    ismult = any(multof);

    if ismult
      sum_mults += itr;
    end
  end

endfunction

multiple_of = [3,5];
below_val   = 1000;
assert(233168 == sum_mult_func (multiple_of, below_val));

%!test
%! multiple_of = [3,5];
%! below_val   = 1000;
%! assert(233168 == sum_mult_func (multiple_of, below_val))    # check sum of all the multiples of 3 or 5 below 1000 =  233168