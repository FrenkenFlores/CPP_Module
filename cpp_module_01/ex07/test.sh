# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 20:47:01 by fflores           #+#    #+#              #
#    Updated: 2021/03/23 20:47:02 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cat file.txt
echo "\n"
read -p "str1: " STR1
read -p "str2: " STR2
./replace file.txt $STR1 $STR2
diff -y file.txt file.txt.replace