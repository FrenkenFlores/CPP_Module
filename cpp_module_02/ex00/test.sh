# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 20:47:16 by fflores           #+#    #+#              #
#    Updated: 2021/03/23 20:47:16 by fflores          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
echo "Test 1"
clang++ -Wall -Werror -Wextra test.cpp Fixed.class.cpp -D N=0 -o test1
./test1
echo " "
echo Test 2
echo " "
clang++ -Wall -Werror -Wextra test.cpp Fixed.class.cpp -D N=1 -o test2
./test2
rm test1 test2