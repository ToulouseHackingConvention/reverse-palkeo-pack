import os
import sys

IN = sys.argv[1]
OUT = sys.argv[2]

assert IN and OUT
assert os.path.isfile(IN)

content = bytearray(open(IN, 'rb').read())

# Corrupt last byte
content[-1] = content[-1] + 1

open(OUT, 'wb').write(content)
