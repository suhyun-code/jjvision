1 #!/usr/bin/python<br>
  2
  3 import time
  4 import RPi.GPIO as GPIO
  5 import requests,json
  6 from influxdb import InfluxDBClient as influxdb
  7
  8 GPIO.setmode(GPIO.BCM)
  9 GPIO.setup(4,GPIO.IN)
 10
 11 def interrupt_fired(channel):
 12     print("interrupt Fired")
 13     print(channel)
 14
 15 GPIO.add_event_detect(4,GPIO.FALLING,callback=interrupt_fired)
 16
 17 while(True):
 18     time.sleep(1)
 19     a=1
 20     data = [{
 21         'measurement' : 'pir',
 22        'tags':{
 23             'visionUni' : '2410',
 24             },
 25         'fields':{
 26             'pir' :a,
 27             }
 28         }]
 29     client = None
 30     try:
 31         client = influxdb('localhost',8086,'root','root','pir')
 32     except Exception as e:
 33         print "Exception write"+str(e)
 34     if client is not None:
 35         try:
 36             client.write_points(data)
 37         except Exception as e:
 38             print "Exception write"+str(e)
 39         finally:
 40             client.close()
 41         print("running influxdb ok")
 42
 43
~
