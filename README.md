프로젝트
---
사용된 github<br>
---
파일실행<br>

>gcc -o run test.c

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

vim 편집기 설정
```
set nu                     <Linenumbet 
set cindent                 < C language indent
set ts=4                    < tab size 4
set softtabstop=4       
set bg =dark
set expandtab
let python_version_2 =1
let python_highlight_all=1
filetype indent plugin on<br>
if has("syntax") // syntax on<br>
syntax on<br>
 endif 
 ```
 ##DHT11 센서 설치
 >gif clone https://github.com/adafruit/Adafruit_Python_DHT.git
