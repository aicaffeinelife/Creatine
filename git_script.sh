#!/bin/bash

echo "Adding the changed files ..."
git add .

echo "Comitting the files with the message...."
git commit -m "$1"

echo "Pushing to Github...."
git push -u origin master

