challenge: challenge.packed
	python3 corrupt.py challenge.packed challenge && chmod +x challenge

challenge.packed: challenge.unpacked
	upx -f -o challenge.packed challenge.unpacked

challenge.unpacked:
	gcc -static -o challenge.unpacked main.c
