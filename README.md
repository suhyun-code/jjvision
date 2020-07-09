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
