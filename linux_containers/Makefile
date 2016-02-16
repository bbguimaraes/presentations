presentation.pdf: presentation.tex
	pdflatex $^

watch:
	inotifywait -qme close_write . \
		| stdbuf -o L grep presentation.tex \
		| xargs -i make

clean:
	rm -f presentation.{aux,log,nav,out,pdf,snm,toc,vrb} texput.log
