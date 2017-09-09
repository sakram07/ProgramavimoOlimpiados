# ganėtinai efektyvus spredimo būdas.
# paprasčiausiai sudeda range sarašus naudojant sum.
# efektyviau nei paprastas bruteforce
print(sum(range(0,1000,3)) + sum(range(0,1000,5)) - sum(range(0,1000,15)))
