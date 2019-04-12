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
	python-dev \
	python-numpy \
	python-scipy \
	&& rm -rf /var/lib/apt/lists/*

RUN apt-get update 

WORKDIR /home

RUN curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
RUN python get-pip.py
RUN python -m pip install https://github.com/CATIA-Systems/FMPy/archive/develop.zip

COPY test1.sh /home/test.sh
COPY test.fmu /home/test.fmu
COPY testfmu.py /home/testfmu.py

ENTRYPOINT "./test.sh"
CMD ["tail", "-f", "/dev/null"]




