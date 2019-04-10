FROM controlsgeek/iot2000_pyfmi

WORKDIR "/home/JModelica/bin"
ENTRYPOINT "./test.sh"
CMD ["tail", "-f", "/dev/null"]

