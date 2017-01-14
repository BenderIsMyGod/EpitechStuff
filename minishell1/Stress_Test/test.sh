make; make clean;
(echo "ls -a /usr"; echo "pwd"; echo "cd /bin"; echo "pwd"; echo "cd -"; echo "pwd") | tcsh 2>&1 > result.tcsh;
(echo "ls -a /usr" ; echo "pwd" ; echo "cd /bin" ; echo "pwd" ; echo "cd -" ; echo "pwd") | ./mysh 2>&1 > result.mysh;
 diff result.mysh result.tcsh;
