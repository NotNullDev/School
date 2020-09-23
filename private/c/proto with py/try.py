import sys
import os

fd = open("/proc/5269/status", "r")
print(os.read(3, 10000))
