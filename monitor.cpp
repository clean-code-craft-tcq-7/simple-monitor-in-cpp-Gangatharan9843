from time import sleep
import sys

def displayVitalAlert(message):
  print(message)
  for i in range(6):
    print('\r* ', end='')
    sys.stdout.flush()
    sleep(1)
    print('\r *', end='')
    sys.stdout.flush()
    sleep(1)

def isTemperatureOk(temperature):
  if temperature > 102 or temperature < 95:
    displayVitalAlert("Temperature is critical!")
    return False
  return True
  
def isPulseRateOk(pulseRate):
  if pulseRate < 60 or pulseRate > 100:
    displayVitalAlert("Pulse Rate is out of range!")
    return False
  return True
  
def isSpo2Ok(spo2):
  if spo2 < 90:
    displayVitalAlert("Oxygen Saturation out of range!")
    return False
  return True


def vitals_ok(temperature, pulseRate, spo2):
  return isTemperatureOk(temperature) and isPulseRateOk(pulseRate) and isSpo2Ok(spo2)
