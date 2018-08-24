calc:my_exec_24.c
	gcc -o $@ $^ 
.PHONY:clean
clean:
	rm -f calc
