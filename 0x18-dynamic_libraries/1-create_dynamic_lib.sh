#!/bin/bash
gcc -c -fPIC *.c || { echo "Failed to compile"; exit 1; }
gcc -shared -o liball.so *.o || { echo "Failed to create"; exit 1; }
