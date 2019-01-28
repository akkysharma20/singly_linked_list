main: main.o menu.o creatlist.o display.o count.o search.o addatbeg.o addatend.o addafter.o addbefore.o delete.o reverse.o
	gcc -g -o main main.o menu.o creatlist.o display.o count.o search.o addatbeg.o addatend.o addafter.o addbefore.o delete.o reverse.o
main.o:	main.c
	gcc -g -c -o main.o main.c
menu.o: menu.c
	gcc -g -c -o menu.o menu.c
creatlist.o: creatlist.c
	gcc -g -c -o creatlist.o creatlist.c
display.o: display.c
	gcc -g -c -o display.o display.c
count.o: count.c
	gcc -g -c -o count.o count.c
search.o: search.c
	gcc -g -c -o search.o search.c
addatbeg.o: addatbeg.c
	gcc -g -c -o addatbeg.o addatbeg.c
addatend.o: addatend.c
	gcc -g -c -o addatend.o addatend.c
addafter.o: addafter.c
	gcc -g -c -o addafter.o addafter.c
addbefore.o: addbefore.c
	gcc -g -c -o addbefore.o addbefore.c
delete.o: delete.c
	gcc -g -c -o  delete.o delete.c
reverse.o: reverse.c
	gcc -g -c -o  reverse.o reverse.c
clean:
	rm -rf *.o main
