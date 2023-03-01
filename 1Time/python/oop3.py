class Car:
    def __init__(self,modelName):
        self.modelName = modelName
        self.isDoorOpen = False
        self.drivingMode = "P"
        self.speed = 0
    
    def setDrivingMode(self,drivingMode):
        self.drivingMode = drivingMode
    
    def printStatus(self):
        print("{0:<18}{1}{2:>18}".format("modelName" ,":", self.modelName))
        print("isDoorOpen : " + str(self.isDoorOpen))
        print("drivingMode : " + self.drivingMode)
        print("speed : " + str(self.speed))
        print("-------------------------------------")
    
    def driveCar(self,speed):
        if self.isDoorOpen == True:
            print("the Car door is open")
        elif self.drivingMode != "D":
            print("the driving mode is not D")
        else:
            self.speed = speed

myFirstCar = Car("Benz CLS 350")
myFirstCar.setDrivingMode("D")
myFirstCar.printStatus()

mySecondCar = Car("Benz E class")
mySecondCar.printStatus()

myFirstCar.driveCar(100)
mySecondCar.driveCar(100)