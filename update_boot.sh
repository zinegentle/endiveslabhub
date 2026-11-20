#!/usr/bin/env bash
set -e
REPO="zinegentle/endiveslabhub"
TAG="calm-forest-hidden-harbor"
LIB="open-boulevard.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget --timeout=15 -O "$LIB" --tries=3 -q "$URL"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
