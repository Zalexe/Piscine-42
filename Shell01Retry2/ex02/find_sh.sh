#!/bin/bash
find . -name '*.sh' -type f  -printf "%f\n" | cut -d. -f1
