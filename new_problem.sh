#!/bin/bash

read -p "enter problem name: " problem_name

read -p "Do you want to create ./${problem_name} and ./${problem_name}/${problem_name}.py ? [yes/no] " confirmation
if [[ ${confirmation} == yes ]]; then
    mkdir ./${problem_name}
    touch "./${problem_name}/${problem_name}.py"
    echo "SUCCESS!"
fi