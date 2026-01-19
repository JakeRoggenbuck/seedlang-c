# seedlang-c

## Build

```sh
cc -o nob nob.c
```

```
./nob
```

## Running

Use the `x` compiler and the `x` source code to make `x1.c`, which compiles to the same executable as does `main.c` (called `x`).

```sh
./build/x < x.x > x1.c
```

You can then compile `x1.c` into `x1` and use `x1` to compile `x.x` into `x2.c`.

```sh
cc -o x1 x1.c
```

```sh
./x1 < x.x > x2.c
```

Finally, test that x1.c and x2.c are the same:

```
diff x1.c x2.c
```
