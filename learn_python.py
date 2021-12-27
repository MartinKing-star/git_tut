

class A():
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def show(self):
        print(f"Hello {self.name} your age is {self.age}")
    def change(self,name):
        self.name=name
        #print(f"Your name change to {self.name}")

def main():
    #read input from file
    name=input("Enter your name")
    age=int(input("Enter your age"))
    person =A(name,age)
    person.show();
    name=input("Enter to update your name")
    person.change(name)
    person.show()



main()
