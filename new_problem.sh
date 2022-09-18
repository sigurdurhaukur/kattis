#!/usr/bin/env bash

read -p "enter problem name: " NAME

NAME="${NAME,,}" # make lowercase
NAME="${NAME// /_}" #replace ' ' with '_'
# get rid of special characters
SCRIPTNAME=$NAME
SCRIPTNAME="${SCRIPTNAME//[á]/a}"
SCRIPTNAME="${SCRIPTNAME//[ð]/d}"
SCRIPTNAME="${SCRIPTNAME//[é]/e}"
SCRIPTNAME="${SCRIPTNAME//[í]/i}"
SCRIPTNAME="${SCRIPTNAME//[ó]/o}"
SCRIPTNAME="${SCRIPTNAME//[ú]/u}"
SCRIPTNAME="${SCRIPTNAME//[ý]/y}"
SCRIPTNAME="${SCRIPTNAME//[þ]/th}"
SCRIPTNAME="${SCRIPTNAME//[æ]/ae}"
SCRIPTNAME="${SCRIPTNAME//[ö]/o}"

read -p "Do you want to create ./${NAME} and ./${NAME}/${SCRIPTNAME}.py ? [yes/no] " CONFIRMATION
if [[ ${CONFIRMATION} == yes ]]; then
    mkdir "./${NAME}"
    touch "./${NAME}/${SCRIPTNAME}.py"
    echo "SUCCESS!"
fi