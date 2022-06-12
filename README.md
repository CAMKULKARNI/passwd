# passwd
This project tries to mimic the behaviour of the passwd command on linux.
This project helps change the passwords of already existing users. This information is stored in the shadow.txt.
The help options for the passwd command can be viewed using the command:
```
passwd -h
```

The man pages for the passwd abd shadow are also included and can be viewed using 
```
man passwd
```
and 
```
man shadow
```
respectively.

THe main runner file of the project is c_project.c and the helper functions are in the c_project_functions.h and c_project_functions.c
The project can be run by compiling all the files.

The makefile is also provided.
