from pyfmi import load_fmu
import time
model=load_fmu('test.fmu');
res=model.simulate(final_time=10.)
while True:
	time.sleep(5)
