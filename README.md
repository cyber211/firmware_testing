# Embedded Firmware Testing

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/afe25c5f6f1a4dab8bebad314cf3ce6a)](https://app.codacy.com/project/pelco/firmware_testing/dashboard)
[![Build Status](https://travis-ci.org/pelco/firmware_testing.svg?branch=master)](https://travis-ci.org/pelco/firmware_testing)
[![Coverage Status](https://coveralls.io/repos/github/pelco/firmware_testing/badge.svg?branch=master)](https://coveralls.io/github/pelco/firmware_testing?branch=master)

## Description

The goal of this project is to show how to test an embedded firmware using [CppUTest](https://github.com/cpputest/cpputest) framework.

![embdev](https://github.com/pelco/firmware_testing/blob/master/img/EmbDevice.png)

An embedded system usually communicates with a lot of inner devices (e.g.: accelerometers, GPS modules, CAN controllers, ...), and now with the IoT trend, they may also communicate with nearby devices (e.g.: fridge, microwaves, smartphones) and/or remote servers. Thus, testing software for embedded systems can sometimes be very painful (if you are an embedded software engineer you understand!).

The goal here, is to show how to remove these hardware/devices dependencies and test/run code on a host machine using [CppUTest](https://github.com/cpputest/cpputest) framework.

## Get Started

*Working on it....*

The is an embedded firmware project that shows how to use CppUTest to test the code.

This project shows an example of using CppUTest framework to test an embedded firmware.

Features covered:

1.  Simple Unit Test
2.  Testing ISRs
3.  Testing Hardware Dependencies

`make`