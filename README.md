# seedlang-c

The smallest self hosted language.

## Build

I use [Tsoding](https://github.com/tsoding/)'s [no build](https://github.com/tsoding/nob.h/) header file.

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

x1.c (and x2.c) will be the same as main.c too.

## About

I followed along with this video from Tsoding:

https://www.youtube.com/watch?v=QGm-d5Ch5JM
