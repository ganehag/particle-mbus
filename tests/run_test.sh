#!/bin/bash

if [ -z "$1" ]; then
    echo "Please supply a device id"
    exit 1;
fi

DEVICE_ID=$1

which particle > /dev/null || (echo "Please install particle-cli"  && exit 1)

echo "Flashing firmware..."

particle flash ${DEVICE_ID} ../src unittest/ 2>&1 > /dev/null || (echo "Failed to flash firmware" && exit 1)

echo "Waiting for device to come online..."
sleep 10;

while [ "$(particle get ${DEVICE_ID} state 2>/dev/null)" != "1" ]; do
    echo "please wait..."
    sleep 1;
done

particle call ${DEVICE_ID} cmd start 2>&1 > /dev/null|| (echo "Failed to execute test" && exit 1)

echo "running tests..."

while [ "$(particle get ${DEVICE_ID} state 2>/dev/null)" != "3" ]; do
    echo "please wait"
    sleep 1;
done

echo "Passed: " $(particle get ${DEVICE_ID} passed)
echo "Failed: " $(particle get ${DEVICE_ID} failed)
