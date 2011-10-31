BLASTHOME=~/works/BLAST-tool/blast-2.5/blast
BLAST=~/bin/pblast.opt

all: assertion pointer

assertion: assertion.i
	${BLAST} $< -main bar

assertion.i: assertion.c
	gcc -E -I ${BLASTHOME}/test/headers/ $< > $@

pointer: pointer.i
	${BLAST} $< -main bar

pointer.i: pointer.c
	gcc -E -I ${BLASTHOME}/test/headers/ $< > $@
