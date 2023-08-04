#!/bin/bash
for dir in ~/alx-low_level_programming/*; do (cd "$dir" && gcc -c *.c); done
