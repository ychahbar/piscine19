#/bin/sh
find . -type f -iname "*.sh" | rev | cut -d / -f1 | rev | cut -d . -f1
