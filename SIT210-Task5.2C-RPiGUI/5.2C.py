from Tkinter import *
import RPi.GPIO as GPIO
from gpiozero import LED
import time


#setup
GPIO.setmode(GPIO.BCM)

#light pins
blue = LED(17)
red = LED(27)
green = LED(23)

# TKinter gui set up
root = Tk()
root.title("5.2C GUI Blinker")
root.geometry('300x200')

# Variable holder for radio buttons
x = IntVar()




# lights on per led colour

def Redledon():
    Off()
    red.on()

def Greenledon():
    Off()
    green.on()

def Blueledon():
    Off()
    blue.on()

# lights off command

def Off():
    blue.off()
    red.off()
    green.off()

def Terminate():
    GPIO.cleanup()
    root.destroy()





#   widgets and buttons
RedLED = Radiobutton(root, text = "Turn Red LED ON", variable = x, value = 5,command = Redledon,)
RedLED.grid(row=0, column=0)
BlueLED = Radiobutton(root, text = "Turn Blue LED ON", variable = x, value = 10,command = Blueledon)
BlueLED.grid(row=1, column=0)
GreenLED = Radiobutton(root, text = "Turn Green LED ON", variable = x, value = 15,command = Greenledon)
GreenLED.grid(row=2, column=0)

#Terminate
exitButton = Button(root, text = "Exit", command = Terminate, bg = 'orange')
exitButton.grid(row=3, column=0)




root.mainloop()
