This is a cloned repo of an implementation of malloc given in the link below
See [danluu.com/malloc-tutorial](danluu.com/malloc-tutorial) :-).

Tests and wrapper borrowed from [Andrew Roth](https://github.com/ps2dude756)

I added thread-safety to the malloc implementation by using a pthread\_mutex.
I also made the size request to be aligned to a 8-byte boundary ( for 64-bit computers ).

So far the tests run successfully. If you catch any issues or bugs do let me know.

