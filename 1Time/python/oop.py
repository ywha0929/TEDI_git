class Car:
    def __init__(self):
        self.isDoorOpen = False
        self.mode = "P"
        self.speed = 0
        self.modelName = ""
    
    def printStatus(self):
        print("----------------------------------------")
        print("| {0:<18}{1}{2:^18}|".format("Car modelName",":",self.modelName))
        print("----------------------------------------")
        print("| {0:<18}{1}{2:^18}|".format("Car isDoorOpen",":",self.isDoorOpen))
        print("----------------------------------------")
        print("| {0:<18}{1}{2:^18}|".format("Car mode ",":",self.mode))
        print("----------------------------------------")
        print("| {0:<18}{1}{2:^18}|".format("Car speed ",":",self.speed))
        print("----------------------------------------")

    def changeMode(self,mode):
        self.mode = mode

    def driveCar(self,speed):
        if self.isDoorOpen == False and self.mode == "D":
            self.speed = speed
        else:
            print("Error")
            print("----------------------------------------")
        


myFirstCar = Car()
myFirstCar.modelName = "Benz CLS 350"
myFirstCar.printStatus()

mySecondCar = Car()
mySecondCar.modelName = "Porche Cayene"
mySecondCar.printStatus()

myFirstCar.changeMode("D")
myFirstCar.printStatus()

myFirstCar.driveCar(100)
mySecondCar.driveCar(100)

myFirstCar.printStatus()
mySecondCar.printStatus()
