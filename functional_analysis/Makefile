BLASTHOME=~/works/BLAST-tool/blast-2.5/blast
BLAST=~/bin/pblast.opt

all: assertion.i
	${BLAST} $< -main bar

assertion.i: assertion.c
	gcc -E -I ${BLASTHOME}/test/headers/ $< > $@
