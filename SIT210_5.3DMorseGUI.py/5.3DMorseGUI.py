from Tkinter import *
import RPi.GPIO as GPIO
from gpiozero import LED
import time


#setup
GPIO.setmode(GPIO.BCM)

#light pins
blink = LED(23)

# TKinter gui set up
root = Tk()
root.title("5.3D MorseCode Blinker GUI")
root.geometry('500x500')

# Widgets and Buttons # 

label = Label(root, text = "Enter text you wish to blink as morsecode:")
label.grid(row = 0, column= 1)

morseString = StringVar()
entrytext = Entry(root, width = 12, textvariable = morseString)     #entry text 
entrytext.grid(row = 1,column = 1)

label2 = Label(root, text = "No More then 12 characters!.")
label2.grid(row = 3, column= 1)



## Morse code dictionary (corresponding dashes and dots value to be flashed per letter)
Morseblink = {' ': ' ','a': '.-', 'b': '-...', 'c': '-.-.', 'd': '-..', 'e': '.',
'f': '..-.', 'g': '--.', 'h': '....','i': '..', 'j': '.---', 'k': '-.-',
'l': '.-..', 'm': '--', 'n': '-.', 'o': '---', 'p': '.--.', 'q': '--.-',
'r': '.-.', 's': '...', 't': '-', 'u': '..-', 'v': '...-', 'w': '.--',
'x': '-..-', 'y': '-.--', 'z': '--..'}

def flashmorse():                   #main function to call 
    string = morseString.get()
    string = string.lower()

    if (len(string) > 12):
        Issue = Label(text = "you entered more then 12 characters. Try again with less than 12.")
        Issue.grid(row = 3,column = 1)

    elif (len(string) < 12):
        for var in string:
            this = Morseblink.get(var)
            time.sleep(2)
            for var in this:
                if var == '-':
                    dash()
                elif var == '.':
                    dot()
                elif var == ' ':
                    Spacing()
        

def dot():          #One second flash for dots
    blink.on()
    time.sleep(1)
    blink.off()
    time.sleep(1) #One second before next part of the same letter
    
def dash():         # three second flash for dash
    blink.on()
    time.sleep(3)
    blink.off()
    time.sleep(1) # one second before part of same letter

def Spacing():
    time.sleep(1)



Morsetext = Button(root, text = "Convert to Morsecode", command = flashmorse)
Morsetext.grid(row = 2, column = 1)

def Terminate():
    GPIO.cleanup()
    root.destroy()


#Terminate
exitButton = Button(root, text = "Exit", command = Terminate, bg = 'orange')
exitButton.grid(row=4, column=1)

root.mainloop()
