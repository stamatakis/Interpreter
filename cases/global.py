x = 9
def f():
  x = 17
  print x
  global x
  x += 1
  print x

f()
print x
