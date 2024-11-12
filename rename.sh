#!/bin/zsh

# '%_*' to delete every characters from the last _ to the end
# '*' for every thing
# ';' is needed to stop the loop

for filename in *.c; do
	mv "$filename" "${filename%.c_b*}_bonus.c"
done
