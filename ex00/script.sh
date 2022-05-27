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

c=$(echo {a..z} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%26+1)):1}
    ./convert $x
done

c=$(echo {A..Z} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%26+1)):1}
    ./convert $x
done

c=$(echo {1..10} | tr -d ' ')
for i in {1..5}
do
	x=${c:$((RANDOM%10+1)):1}
    ./convert $x
done
