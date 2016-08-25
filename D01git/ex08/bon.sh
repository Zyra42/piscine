ldapsearch -Q "(uid=*bon*)" cn | grep cn: | wc -l | bc
