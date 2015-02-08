# 1440 minutes/day: 1 ke = 14.4 minutes = 864 seconds

from time import *

now = localtime()

ke = (now.tm_hour*60+now.tm_min)/14.4

print "%0.1f" %(ke)