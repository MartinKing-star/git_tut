

class A():
  def __init__(self,age,name):
    self.age=age
    self.name=name
  def show(self):
    print(f"Hello {self.name} ur age is {self.age}")

def main():
   a=A(21,"Killer")
   a.show()

main()
