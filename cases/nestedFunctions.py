x = 7
def f():
  x = 99
  def g():
    x += 1
    print x
    def h():
      x += 1
      print x
    h()  
  g()

f()
print x

