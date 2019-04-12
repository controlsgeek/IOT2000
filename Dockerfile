FROM balenalib/iot2000-ubuntu:xenial

RUN apt-get update 
RUN apt-get install -y --no-install-recommends \
	less \
	kmod \
	nano \
	net-tools \
	ifupdown \
	iputils-ping \
	i2c-tools \
	usbutils \
	g++ \
	subversion \
	gfortran \
	ipython \
	cmake \
	swig \
	ant \
	openjdk-8-jdk \
	python-dev \
	python-numpy \
	python-scipy \
	python-matplotlib \
	cython \
	python-lxml \
	python-nose \
	python-jpype \
	zlib1g-dev \
	libboost-dev \
	&& rm -rf /var/lib/apt/lists/*

COPY JModelica.org /home/JModelica.org

RUN apt-get update && apt-get install make

WORKDIR /home/JModelica.org
RUN rm -rf build
RUN mkdir build
WORKDIR /home/JModelica.org/build

RUN ../configure --prefix=/home/JModelica --disable-openmp
RUN make install 

COPY testfmu.py /home/JModelica/bin
COPY test1.sh /home/JModelica/bin/test.sh

RUN apt-get update && apt-get install -y python-tk

WORKDIR "/home/JModelica/bin"

ENTRYPOINT "./test.sh"
CMD ["tail", "-f", "/dev/null"]


