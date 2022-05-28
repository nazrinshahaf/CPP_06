#./convert inf
#echo "\n"
#
#./convert +inf
#echo "\n"
#
#./convert -inf
#echo "\n"
#
#./convert inff
#echo "\n"
#
#./convert +inff
#echo "\n"
#
#./convert -inff
#echo "\n"
#
#./convert nan
#echo "\n"
#
#./convert nanf
#echo "\n"

#c=$(echo {a..z} | tr -d ' ')
#for i in {1..5}
#do
#	x=${c:$((RANDOM%26+1)):1}
#    ./convert $x
#done
#
#c=$(echo {A..Z} | tr -d ' ')
#for i in {1..5}
#do
#	x=${c:$((RANDOM%26+1)):1}
#    ./convert $x
#done
#
#c=$(echo {1..10} | tr -d ' ')
#for i in {1..5}
#do
#	x=${c:$((RANDOM%10+1)):1}
#    ./convert $x
#done

echo "===============INT_MAX - 1===================\n"
./convert 2147483647
echo "\n"

./convert 2147483647.0
echo "\n"

./convert 2147483647.0f
echo "\n"
echo "=============================================\n\n"

echo "=================INT_MAX====================="
./convert 2147483648
echo "\n"

./convert 2147483648.0
echo "\n"

./convert 2147483648.0f
echo "\n"
echo "=============================================\n\n"

echo "===============INT_MIN + 1===================\n"
./convert -2147483648
echo "\n"

./convert -2147483648.0
echo "\n"

./convert -2147483648.0f
echo "\n"
echo "=============================================\n\n"

echo "=================INT_MIN====================="
./convert -2147483649
echo "\n"

./convert -2147483649.0
echo "\n"

./convert -2147483649.0f
echo "\n"
echo "=============================================\n\n"
