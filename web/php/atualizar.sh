#!/bin/bash

vim $1
docker stop php
docker rm php
docker build -t php .
docker run --name=php -p=3000:3000 php
