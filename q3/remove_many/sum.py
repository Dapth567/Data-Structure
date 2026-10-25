n = int(input())
s = 0

for i in range(n):
	if(i % 15 == 0):
		s += 10 * i
	if(i % 3 == 0):
		s += 2 * i
	if(i % 5 == 0):
		s += 3 * i

	else:
		s += i

print(s)