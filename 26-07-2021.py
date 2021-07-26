# class Rectangle():
#     def __init__(self, length, breadth):
#         self.length = length
#         self.breadth  = breadth

#     def area(self):
#         return (self.length * self.breadth)

#     def perimeter(self):
#         return 2*(self.length + self.breadth)

# obj = Rectangle(20, 15)
# print(obj.area())
# print(obj.perimeter())

# Create a Time class and initialize it with hours and minutes.
# 1. Make a method addTime which should take two time object and add them. E.g.- (2 hour and 50 min)+(1 hr and 20 min) is (4 hr and 10 min)
# 2. Make a method displayTime which should print the time.
# 3. Make a method DisplayMinute which should display the total minutes in the Time. E.g.- (1 hr 2 min) should display 62 minute.

class Time:
    def __init__(self, hours, minutes):
         self.hours = hours
         self.minutes = minutes 
    
    def addTime(time1, time2):
        time = Time(0,0)
        time.hours = time1.hours + time2.hours
        time.minutes = time1.minutes + time2.minutes
        while time.minutes > 60:
            time.hours += 1
            time.minutes -= 60
        return time 
    
    def displayTime(self):
        print(f"{self.hours} and {self.minutes}")

    def displayMinutes(self):
        print((self.hours * 60) + self.minutes)

obj1 = Time(1, 30)
obj2 = Time(1, 70)
obj3 = Time.addTime(obj1, obj2)
obj3.displayTime()
obj3.displayMinutes()
