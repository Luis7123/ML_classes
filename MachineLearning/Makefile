filename=input
#filename=pml

# all: ${filename}.tex
all: ${filename}.tex
	pdflatex  ${filename}.tex 
#	lualatex ${filename}.tex 
# next command is because the gnuplot binary is /usr/bin/gnuplot and lualatex does not want to look 
# for my right binary. Other than that it should be commented out.
#	/apps/tools/gnuplot/4.6.0/bin/gnuplot $(wildcard *.gnuplot)

pdf:ps
	ps2pdf ${filename}.ps

bib:
	pdflatex ${filename}.tex
	bibtex ${filename}||true
	pdflatex ${filename}.tex
	bibtex ${filename}||true
	pdflatex ${filename}.tex


ps:dvi
	dvips ${filename}.dvi

asy:
	pdflatex ${filename}
	asy ${filename}-*.asy
	pdflatex ${filename}

index:
	pdflatex ${filename}.tex 
	makeindex ${filename}
	pdflatex ${filename}.tex

test: test1.tex
	pdflatex test1.tex 

dvi:
	latex ${filename}
	bibtex ${filename}||true
	latex ${filename}
	latex ${filename}

read: ${filename}.pdf
	okular ${filename}.pdf 2>/dev/null &

aread:
	acroread ${filename}.pdf &

eread:
	evince ${filename}.pdf &

clean:
	cp ${filename}.tex saveme.tex
	rm ${filename}.*
	cp saveme.tex ${filename}.tex 
