### Tracing Instructions

To generate traces for testing various simulator configurations, you must first build the tracer. This can be done as follows:

- Download Pin from Intel.
- Open [PIN SOURCE]/source/tools/SimpleExamples.
  - Copy tracer/champsim_tracer.cpp in here.
  - Overwrite makefile.rules with the one in this directory, so that Make compiles this new file too.
  - Run commands of the form:

```sh
../../../pin -t obj-intel64/champsim_tracer.dylib -o trace.champsim -s 1000 -t 2000 -- ${TO BE TRACED}
gzip trace.champsim
```