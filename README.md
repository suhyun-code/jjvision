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

github구성<br>
```
git config --gobal user.email "email"<br>
git config -- gobal user.name " user name"
```

당기기<br>
```
git push
```

git 푸시 오류 vim
```
git pull
```

고정IP<br>
```
sudo apt-get install vim (빔설치)<br>
vim /etc/dhcpcd.conf
```

방화벽<br>
```
sudo ufw allow (port)<br>
sudo ufw enable<br>
sudo ufw status<br>
sudo ufw disable
```

vim 편집기 설정
```
set nu                     <Linenumbet<br>  
set cindent                 < C language indent<br>
set ts=4                    < tab size 4<br>
set softtabstop=4<br>        
set bg =dark<br>
set expandtab<br>
let python_version_2 =1<br>
let python_highlight_all=1<br>
filetype indent plugin on<br>
if has("syntax") // syntax on<br>
syntax on<br>
 endif 
 ```
 ##DHT11 센서 설치
 >gif clone https://github.com/adafruit/Adafruit_Python_DHT.git<br>
