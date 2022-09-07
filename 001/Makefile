###
# Makefile
# author: oleg <oleg@osvoj.ru>
# license: MIT
###

PACKAGE=hello.osvoj.ru

hello: clean main.o hello.o com.locale doc
	  gcc -o $(PACKAGE).v1  ./main.o  -lintl.dll -lhello.dll
		gcc -o $(PACKAGE).v2  ./main.o  -lintl.dll -lhello.dll
hello.o:
	  gcc -c ./hello.c
		gcc -shared -o libhello.dll.a -Wl,-soname,libhello.dll ./hello.o  -lintl.dll
main.o:
	  gcc -c ./main.c
clean:
	  rm  -f *.o *.exe
gen.locale:
	  xgettext --default-domain=$(PACKAGE) --output-dir=./locale --language=C  \
		--from-code=UTF-8 --keyword=_ --directory=./ *.c *.h

		mkdir  -p ./locale/ru/LC_MESSAGES

		msginit -i locale/$(PACKAGE).po -o locale/ru/LC_MESSAGES/$(PACKAGE).po \
		--locale=ru_RU.UTF8;

    #mkdir  -p ./locale/fr/LC_MESSAGES

		msginit -i locale/$(PACKAGE).po -o locale/fr/LC_MESSAGES/$(PACKAGE).po \
		--locale=fr_FR.UTF8
com.locale:
		msgfmt locale/ru/LC_MESSAGES/$(PACKAGE).po \
		-o locale/ru/LC_MESSAGES/$(PACKAGE).mo

		msgfmt locale/fr/LC_MESSAGES/$(PACKAGE).po \
		-o locale/fr/LC_MESSAGES/$(PACKAGE).mo

doc:
	mkdir ./doc
	doxygen ./doxygen.conf
