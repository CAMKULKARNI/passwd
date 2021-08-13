a.out : c_project.o c_project_functions.o
	gcc c_project.o c_project_functions.o
c_project.o : c_project.c c_project_functions.h
	gcc c_project.c
c_project_functions.o : c_project_functions.c c_project_functions.h
	gcc c_project_functions.c