LIB = tabix pcre
all: ${LIB}

tabix: tabix-0.2.5.tar.bz2
	-mv tabix-0.2.5.tar.bz2* tabix-0.2.5.tar.bz2
	tar jvxf tabix-0.2.5.tar.bz2
	ln -s -f tabix-0.2.5 tabix
	(cd tabix-0.2.5; make; ar rcs libtabix.a *.o)

pcre: pcre-8.21.tar.gz
	-mv pcre-8.21.tar.gz* pcre-8.21.tar.gz
	tar zvxf pcre-8.21.tar.gz
	ln -s -f pcre-8.21 pcre
	-(DIR=`pwd`; cd pcre-8.21; ./configure --prefix="$${DIR}"/pcre; make -j; make install; ar rcs libpcre.a)
clean:
	rm -rf tabix-0.2.5
	rm -rf pcre-8.21
	rm -f pcre tabix
