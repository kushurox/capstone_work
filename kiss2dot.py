#!/usr/bin/env python3

import fileinput

f = open("malloc.kiss2", "r")
text = f.read()
f.close()

print("digraph fsm {")

for line in text.splitlines():
    if not line.startswith("."):
        in_bits, from_state, to_state, out_bits = line.split()
        print("%s -> %s [label=\"IN=%s,\\nOUT=%s\"];" % (from_state, to_state,
                in_bits.replace("-", "?"), out_bits.replace("-", "?")))

print("}")