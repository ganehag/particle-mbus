# M-Bus (Meter-Bus) for Photon, Electron

M-Bus master-mode library for Photon and Electron.

## Source Code

Ported from the RScada C library <a href="https://github.com/rscada/libmbus" target=_blank>Libmbus</a>, to C++ for use with Particle Photon and Electron.

## License

BSD 3-Clause License, same as the original Libmbus library.

## Usage

Connect XYZ hardware, add the MBus library to your project and follow this simple example:

```
#include "MBus.h"
MBus mBus;

void setup() {
  mBus.begin();
}

void loop() {
  mBus.process();
}
```

See the [examples](examples) folder for more details.

## Documentation

TODO: Describe `MBus`

## Contributing

Here's how you can make changes to this library and eventually contribute those changes back.

To get started, [clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different. You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. Do `particle library add MBus_myname` to add the library to a project on your machine or add the MBus_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a [GitHub pull request](https://help.github.com/articles/about-pull-requests/) with your changes to the original library. 

If you wish to make your library public, use `particle library publish` or `Publish` command.

## LICENSE
Copyright 2018 Mikael Ganehag Brorsson

Licensed under the <insert your choice of license here> license
