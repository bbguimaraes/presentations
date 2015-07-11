presentation.pdf: presentation.tex
	pdflatex $^

watch:
	inotifywait -qme close_write presentation.tex \
		| while read; do pdflatex presentation.tex; done

clean:
	rm -f presentation.{aux,log,nav,out,pdf,snm,toc,vrb} texput.log
