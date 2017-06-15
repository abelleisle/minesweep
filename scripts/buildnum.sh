#!/bin/bash

TMP=$(cat buildnum.txt)
echo $($TMP+1)
