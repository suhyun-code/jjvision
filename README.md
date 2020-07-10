프로젝트
---
사용된 github<br>
---
### 파일실행<br>
```
gcc -o run test.c
```

github등대<br>
```
git clone https://github.com/suhyun-code/name
cd project
```

파일제거<br>
```
sudo rm 폴더명/ -rf
```

변경사항 깃허브에 적용<br>
```
git add.
```

주석에 달듯이 변경사항 적용하기
```
git commit -m upload
```

github구성
```
git config --gobal user.email "email"
git config -- gobal user.name " user name"
```

당기기
```
git push
```

git 푸시 오류 vim
```
git pull
```

고정IP
```
sudo apt-get install vim (빔설치)
vim /etc/dhcpcd.conf
```

방화벽
```
sudo ufw allow (port)
sudo ufw enable
sudo ufw status
sudo ufw disable
```

__vim 편집기 설정__
```
vim . vimrc
set nu                     <Linenumbet 
set cindent                 < C language indent
set ts=4                    < tab size 4
set softtabstop=4       
set bg =dark
set expandtab
let python_version_2 = 1
let python_highlight_all = 1
filetype indent plugin on
if has("syntax")             <syntax on
    syntax on
 endif 
 ```
 #DHT11 센서 설치
 ```
 gif clone https://github.com/adafruit/Adafruit_Python_DHT.git
 cd Adafruit_Python_DHT
 sudo python setup.py install
 cd Adafruit_Python_Dht/examples
 ```
 실행<br>
 ```
 python AdafruitDHT.py 11 4
 or python simpletest.py
 ```
 
 # 유입DB설치
 ---
 
 1.리포지토리 GPG키
 ---
 ```
curl -sL https://repos.influxdata.com/influxdb.key | sudo apt-key add -
 ```
 2.저장소 추가
 ---
 ```
 echo "deb https://repos.influxdata.com/debian stretch stable" | sudo tee /etc/apt/sources.list.d/influxdb.list
 ```
 3.프로그램설치
 ---
 ```
 sudo apt update
 sudo apt install influxdb
 ```
 4.실행
 ---
 ```
 sudo service influxdb start
 influx
 ```
 5.DB만들기
 ---
 ```
 > create database 데이터베이스 이름
 ```
 5.1 확인
 ---
 ```
 show databases
 ```
 5.2 > 나가기
 ---
 ```
 exit
 ```
  ## 그라파나 설치
 ---
 1.리포지토리 GPG 키
 ```
 curl https://bintray.com/user/downloadSubjectPublicKey?username=bintray | sudo apt-key add-
 ```
 2.저장소 추가
 ---
 ```
 echo "deb https://dl.bintray.com/fg2it/deb stretch main" | sudo tee -a /etc/apt/sources.list.d/grafana.list
 ```
 3.설치
 ---
 ```
 sudo apt update
 sudo apt install grafana
 ```
 4.실행
 ---
 ```
 sudo service grafana-server start
 ```
 파이썬과 유입DB 가져오기
 ---
 ```
 sudo pip install influxdb
 ```
시간경로바꾸기
---
```
sudo raspi-config
```
```
pip3 install python-telegram-bot --upgrade
```
git clone https://github
