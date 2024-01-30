import RPi.GPIO as GPIO
import time
import requests

def Flash():
      GPIO.output(RED, GPIO.HIGH)
      time.sleep(1)
      GPIO.output(RED, GPIO.LOW)
      time.sleep(1)

def POST():
      Flash()
      url = 'https://api.particle.io/v1/devices/e00fce68517cfe3a8dfa825d/alarmhtml?access_token=73b6d7f8a37ceaf2f4feb3d383ba59207fd1ba20'
      data = {'alarmhtml' :'Alert'}
      requests.post(url, data=data).text
      Flash()


try:

      def Alarm():
            while True:
                  Flash()
                        
                  
            
      GPIO.setmode(GPIO.BOARD)

      PIN_TRIGGER = 7
      PIN_ECHO = 11
      PIN_Buzz = 15
      RED = 19

      GPIO.setup(PIN_TRIGGER, GPIO.OUT)
      GPIO.setup(PIN_ECHO, GPIO.IN)
      GPIO.setup(PIN_Buzz, GPIO.OUT, initial=GPIO.LOW)
      GPIO.setup(RED, GPIO.OUT, initial= GPIO.LOW)

      GPIO.output(PIN_TRIGGER, GPIO.LOW)

      # time for sensor to adjust

      time.sleep(2)
      pwm = GPIO.PWM(PIN_Buzz, 100)
      pwm.start(0)

      while(True):

            print "Calculating distance"

            GPIO.output(PIN_TRIGGER, GPIO.HIGH)
            time.sleep(0.00001)                            # send trigger pulse signal
            GPIO.output(PIN_TRIGGER, GPIO.LOW)


            while GPIO.input(PIN_ECHO)==0:
                  pulse_start_time = time.time()            #Capture pulse from the start to finish via echo
            while GPIO.input(PIN_ECHO)==1:                  #via the GPIO.input from the echo pin
                  pulse_end_time = time.time()               #time it. and save the times


            pulse_duration = pulse_end_time - pulse_start_time
            distance = round(pulse_duration * 17150, 2)           #the math to calculate the distance of an object
                        
                        #print distance 
            print "Distance:",distance,"cm"
            time.sleep(1)
            #buzzer pin feedback
            if (distance <= 80):
                  pwm.ChangeFrequency(12 - distance / 10)
                  pwm.ChangeDutyCycle(50)
                  POST()
                  Alarm()

            else:
                  pwm.ChangeDutyCycle(0)      

except KeyboardInterrupt:
      GPIO.cleanup()

      