./convert inf
echo "\n"

./convert +inf
echo "\n"

./convert -inf
echo "\n"

./convert nan
echo "\n"

./convert inff
echo "\n"

./convert +inff
echo "\n"

./convert -inff
echo "\n"

./convert nanf
echo "\n"

echo "=================== Char ====================\n"

c=$(echo {a..z} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%25+1)):1}
    ./convert $x
	printf '\n'
done

c=$(echo {A..Z} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%25+1)):1}
    ./convert $x
	printf '\n'
done

echo "============= non-print char ===============\n"

unprint=$(printf '\000')
./convert $unprint
printf '\n'

unprint=$(printf '\001')
./convert $unprint
printf '\n'

unprint=$(printf '\021')
./convert $unprint
printf '\n'

unprint=$(printf '\023')
./convert $unprint
printf '\n'

echo "=============================================\n\n"

echo "=================== Int =====================\n"

c=$(echo {1..50} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%50+1)):1}
    ./convert $x
	printf '\n'
done

c=$(echo {1..10000} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%10000+1)):1}
    ./convert $x
	printf '\n'
done

echo "=============================================\n\n"

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
