# A docker container to compile latex files. Example usage:
# $ docker run -it --rm -v /some/dir:/tmp/tche_linux $image_name bash
FROM base/arch
RUN pacman -Syu --noconfirm texlive-core texlive-bin texlive-latexextra
