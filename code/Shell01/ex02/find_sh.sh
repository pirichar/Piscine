#!/bin/bash
find . -type f -name '*sh' | rev | cut -f 1  -d  '/' | rev | cut -f 1  -d '.'
