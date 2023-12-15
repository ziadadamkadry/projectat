nums = [1, 2, 8, 7, 12, 4, 25]
evens = 0; odds = 0
even_num = list(); odd_num = list()

for num in nums:
    if num % 2:
        odds += 1
        odd_num.append(num)
    else:
        evens += 1
        even_num.append(num)
print(evens, odds)
print(f'the evens are: {even_num}, the odds are: {odd_num}')




