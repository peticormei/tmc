FROM ocaml/opam2:ubuntu

WORKDIR $HOME

USER root

RUN apt-get update
RUN apt-get install -y m4 wget tcsh cmake

USER opam

RUN opam switch 4.02
RUN opam update
RUN opam init
RUN opam install "heptagon=1.03.00"

RUN wget http://polychrony.inria.fr/SIGALI_2.4/pKSigali-2.4-x86_64-linux.tar.gz
RUN tar -zxvf pKSigali-2.4-x86_64-linux.tar.gz

WORKDIR ./Sigali-2.4/cmake
RUN cmake ..

ENV OPAM_HOME="$HOME/.opam/4.02"
ENV HEPTAGON_LIB_HOME="$OPAM_HOME/lib/heptagon"

ENV SIGALI_HOME="$HOME/Sigali-2.4"
ENV SIGALI_PATH="$SIGALI_HOME/lib:$SIGALI_PATH"

ENV PATH="$SIGALI_HOME/bin:$OPAM_HOME/bin:$PATH"

WORKDIR $HOME
