#! /bin/bash
cat "$@" | while read -r line; do
    echo -n "$line" | sha256sum | cut -f1 -d' '
done
