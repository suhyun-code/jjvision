#jjvision

## Install DHT11 sensor
'''
git clone https://github.com/adafruit/Adafruit_Python_DHT.git
cd Adafruit_Python_DHT
sudo python setup.py install
cd Adafruit_Python_DHT/examples
'''
 'run
 '''
 python AdafruitDHT.py 11 4
 '''
 ###JAVA Install
 ###InfluxDB Installation
 '''
 curl -sL https://repos.influxdate.com/influxdb.key | sudo apt-key add.
 
 echo "deb http://repos.influxdate.com/debian strech stable" | sudo tee /etc/apt/sources.list.d/influxdb.list
 인플럭스 설치
 sudo apt update
 sudo apt install influxdb
 인플럭스 실행
 #sudo service influxdb start
 
 ##데이터베이스 만들기
 create database<데이터베이스이름>

 ##확인
 show database
 
 ##Grafana Installation
 
 curl https://bintray.com/user/downloadSubjectPublicKey?username-bintray | sudo apt-key add -
 
 echo "deb https://dl.bintray.com/fg2it/deb stretch main" | sudo tee -a /etc/apt/sources.list.d/grafana.list
 
 sudo apt update
 sudo apt install grafana
 
 sudo service grafana-server start
 
 ##git hub
-Repository down load
'''
 -git clone https://github.com/suhyun-code/jjvision
 '''
 ## vim 탐지기 setting
 '''
 
 set nu   //Linenumbet
 set cindent   // C language indent
 set ts=4   // tab size 4
 set softtabstop=4
 set bg =dark
 set expandtab
 let python_version_2 =1
 let python_highlight_all=1
 filetype indent plugin on
 if has("syntax") // syntax on
  syntax on
  endif 
  
  ##인체센서
   1 #!/usr/bin/python
  2
  3 import time
  4 import RPi.GPIO as GPIO
  5
  6 print GPIo. VERSION
  7 GPIO.setmode (GPIO.BCM)
  8 GPIO.setup(4,GPIO.IN)
  9
 10 def interrupt_fired(channel):
 11     print("interrupt Fired")
 12     print(channel)
 13
 14 GPIO.add_event_detect(4,GPIO.FALLING,callback=interrupt_fired)
 15
 16 while(True):
 17     time.sleep(1)
 18     print("timer fired")
~
###소스코드
 1 #!/usr/bin/python
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


